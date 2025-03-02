Important
=========

- ! In `ProcessDesc` it is necessary to take into account that the file may be renamed
- ! Check copy to NUL in win9x

For the future
==============

- ! append in unbuffered mode
- ! in the queue, when exiting to the parent directory, the cursor moves to the beginning
  (`FAR` can't, see `xs` how to fix)

But what about the promised copying by mask? (for example, from all subdirectories you want to
copy only `*.jpg`)

Wicked:
  - > make a checkbox, when enabled, before copying,
  - > auto-resume activated 10 minutes after disconnection
  - in resume mode, show already rewritten data in progress

Pavlov_Sergej <lidars@mail.ru>:
  - > change copy dialog colors

"Sergey A. Golosov" <megabyte@mitso.vitebsk.net>:
- > Is it possible or are you going to make it possible in the future
  > copy from NTFS to NTFS while keeping the "compressed" attribute state, not
  > setting according to destination attribute like this
  > does the system itself?

- if copying is interrupted, not to all copied files
  descriptions can be copied
  
- automatic retry on errors (first retry, then reopen &
  retry, only then showing the message)

Alexander_Reznikov@f220.n4600.z2.fidonet.org (Alexander Reznikov):

- > Still have wishes. In the copy dialog there is an "Advanced" dialog, in it
  > "Continue unfinished files". I would like this feature to be available in
  > the main dialog, because relevant enough when copying over the network. And in
  > dialog "File already exists" would also be nice to add such a button.

- placing skipped files on the temporary panel

- speed up renaming in win9x (`MoveFile` calls `GetRealFileName`,
  which can take a long time due to calls to `QueryDosDevice` and `WNetGetConnection`)
  
- show a list of existing files before copying, rather than asking for
  each one alone
  
- show a warning about a possible lack of free space

VE:
- > Standard Copy can be assigned to Alt + Shift + F5. Why
  > you cannot assign this copy to these keys, and the standard
  > leave it as it is?



  

----------------------------

Вaжное
======

- ! В ProcessDesc надо учитывать, что файл может быт переименован
- ! Проверить копирование в NUL в win9x


На будущее
==========

- ! Append в unbuffered режиме
- ! в очереди, при выходе в родительский каталог, курсор становится на начало
  (косяк ФАРа, хз как исправить)

А как же обещанное копиpование по маске? (к пpимеpy, из всех подкаталогов хочy
скопиpовать только `*.jpg`)

Wicked:
- > сделать чекбокс, при включении которого перед началом копирования,
  > активизировалось авто-докачивание через 10 минут после разрыва связи
  - в режиме resume показывать в прогрессе уже переписанные данные

Pavlov_Sergej <lidars@mail.ru>:
  - > менять цвета диалога копирования

"Sergey A. Golosov " <megabyte@mitso.vitebsk.net>
- > Возможно ли, или собираетесь ли вы в будущем сделать возможным
  > копирование с NTFS на NTFS с сохранением состояния атрибута "compressed", а не
  > установкой в соответствии с атрибутом места назначения как это
  > делает сама система?

- если копирование прервано, не ко всем скопированным файлам 
  могут быть скопированы описания
  
- автоматический повтор при ошибках (сначала retry, потом reopen & 
  retry, только затем показ сообщения)

Alexander_Reznikov@f220.n4600.z2.fidonet.org (Alexander Reznikov):
- > Ещё есть пожелания. В диалоге копирования есть диалог "Дополнительно", в нём
  > "Продолжить незавершенные файлы". Хочется, чтобы эта функция была доступна в
  > основном диалоге, т.к. достаточно актуальна при копировании по сети. И в
  > диалог "Файл уже существует" тоже неплохо бы добавить такую кнопочку.

- помещение пропущенных файлов на временную панель

- ускорить переименование в win9x (`MoveFile` вызывает `GetRealFileName`,
  которая может работать долго из-за вызовов `QueryDosDevice` и `WNetGetConnection`)
  
- показывать список существующих файлов перед копированием, а не спрашивать по
  одному
  
- показывать предупреждение о возможной нехватке свободного места

VE:
- > Стандартное копирование можно назначить на Alt + Shift + F5. Почему
  > нельзя назначить данное копирование на эти клавиши, а стандартное
  > оставить так, как есть?

