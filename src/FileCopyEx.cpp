#include "common.h"

#include <initguid.h>
#include "guid.hpp"

#include "SDK/plugin.hpp"
#include "FarPlugin.h"
#include "version.hpp"
#include "dlgclass.h"

PluginStartupInfo Info;
FarPlugin* plugin = NULL;

/*
 ������� GetMsg ���������� ������ ��������� �� ��������� �����.
 � ��� ���������� ��� Info.GetMsg ��� ���������� ���� :-)
*/
const wchar_t* GetMsg(int MsgId)
{
	return Info.GetMsg(&MainGuid,MsgId);
}

static void FarErrorHandler(const wchar_t* s)
{
	const wchar_t* items[]={ L"Framework Error", s, L"OK", L"Debug" };
	if (Info.Message(&MainGuid, &MainGuid, FMSG_WARNING, NULL, items, 4, 2) == 1) {
		DebugBreak();
	}
}

/*
Far Manager �������� ������� GetGlobalInfoW � ������ �������, ��� ��������� �������� ���������� � �������. 
������� ���������� ���� ���.
*/
void WINAPI GetGlobalInfoW(struct GlobalInfo *Info)
{
	Info->StructSize = sizeof(GlobalInfo);
	Info->MinFarVersion = PLUGIN_MIN_FAR_VERSION;
	Info->Version = PLUGIN_VERSION;
	Info->Guid = MainGuid;
	Info->Title = PLUGIN_TITLE;
	Info->Description = PLUGIN_DESC;
	Info->Author = PLUGIN_AUTHOR;
}

/*
������� SetStartupInfoW ���������� ���� ���, ����� �������� DLL-������ � ������. 
Far Manager ������� ������� ����������, ����������� ��� ���������� ������.
*/
void WINAPI SetStartupInfoW(const struct PluginStartupInfo *psi)
{
	if (psi->StructSize >= sizeof(PluginStartupInfo)) {
		Info = *psi;
		if (!plugin) {
			errorHandler = FarErrorHandler;
			InitObjMgr();
			plugin = new FarPlugin();
			plugin->Create();
		}
	}
};

/*
������� GetPluginInfoW ���������� Far Manager ��� ��������� �������������� ���������� � �������.
*/
static const wchar_t *pluginMenuStrings[1] = { L"Extended copy" };
static const wchar_t *configMenuStrings[1] = { L"Extended copy" };

void WINAPI GetPluginInfoW(struct PluginInfo *Info)
{
	Info->StructSize = sizeof(*Info);

	Info->PluginMenu.Guids = &MenuGuid;
	Info->PluginMenu.Strings = pluginMenuStrings;
	Info->PluginMenu.Count = ARRAYSIZE(pluginMenuStrings);

	Info->PluginConfig.Guids = &ConfigGuid;
	Info->PluginConfig.Strings = configMenuStrings;
	Info->PluginConfig.Count = ARRAYSIZE(configMenuStrings);

	plugin->InitLang();
}

/*
������� ConfigureW ���������� Far Manager, ����� ������������ ������ � ���� "��������� ������� �������" �����, ����������� ���� ������ ��������.
*/
intptr_t WINAPI ConfigureW(const struct ConfigureInfo *Info)
{
	return plugin->Configure(Info);
}

/*
  ������� OpenW ���������� ��� �������� ����� ����� �������.
*/
HANDLE WINAPI OpenW(const struct OpenInfo *OInfo)
{
	plugin->InitLang();
	plugin->OpenPlugin(OInfo);
	plugin->SaveOptions();
	return INVALID_HANDLE_VALUE; // ok
}

void WINAPI ExitFARW()
{
	delete plugin;
	DoneObjMgr();
};