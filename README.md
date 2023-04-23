So, this plugin is created to bring to life all kinds of perverted fantasies on the topic of file copying, each of which will speed up the process by 5% :smile:. At the moment, it has implemented the main features that were sometimes quite lacking in standard copiers. 

Main features:

- Buffering of copying for several files at once. 

  When copying small files, instead of reading and writing each one separately, it is possible to read several pieces of them, and then write several pieces. This reduces the amount of movement of the heads from the source to the destination, which is strongly affected when copying between two partitions of one harddisk (HDD). The idea was inspired from DOS Navigator.

- Minimization of fragmentation when copying. 

  When copying large files, it is done in large blocks in order to reduce the amount of redistribution of disk space when the file size increases.

- Optimization for caching. 

  The sizes of blocks for reading and writing are selected so that the system can cache data in the most optimal way for copying.

- Parallel copying. 

  Both reading and writing occur simultaneously. This is used when copying data between different physical media, for example two harddisks (HDDs), or from a CD to a HDD. The maximum performance increase (in both scenarios) will be when the reading speed of the original medium is equal to the writing speed of the destination.
  
- NTFS support: compression and encryption. 

  It is possible to specify whether the copied files will be compressed and/or encrypted at the new location or not. (Encryption support is only available in Windows 2000 and later). The plugin also copies access rights and NTFS streams (ADS).

- Improved modes of overwriting existing files, including adding, automatic and manual renaming. 

  The idea was inspired from DOS Navigator.

--- 

Итак, этот плагин создан для того, чтобы воплотить в жизнь всевозможные извращенные фантазии на тему копирования, каждая из которых ускорит процесс на 5% :). На данный момент в нем реализованы основные возможности, которых иногда довольно сильно не хватало в стандартных копировщиках. (Ц) 

Основные возможности: 

- Буферизация копирования для нескольких файлов сразу. 

  При копировании мелких файлов вместо того, чтобы каждый по отдельности читать и записывать, можно прочитать их несколько штук, а затем несколько штук записать. Это уменьшает количество перемещений головок от источника к назначению, которое сильно сказывается при копировании между двумя разделами одного винчестера. Идея сперта из ДОС Навигатора. 

- Минимизация фрагментации при копировании. 

  При копировании больших файлов ведется большими блоками, чтобы уменьшить количество перераспределений места на диске при увеличении размера файла. 

- Оптимизация под кэширование. 

  Размеры блоков для чтения и записи подобраны так, чтобы система могла кэшировать данные наиболее оптимальным для копирования способом. 
  
- Параллельное копирование. 

  И чтение, и запись происходят одновременно. Это применяется при копировании данных между разными физическими носителями, например двумя винчестерами, или с CD на винчестер. Максимум прироста производительности (в 2 раза) будет, если скорость чтения исходного носителя равна скорости записи назначения. 
  
- Поддержка NTFS: сжатие и шифрование. 

  Есть возможность указать, будут ли скопированные файлы на новом месте сжаты и зашифрованы, или нет. (Поддержка шифрования есть только в Windows 2000). Плагин также копирует права доступа и NTFS потоки. 
  
- Улучшенные режимы перезаписи существующих файлов, включая дописывание, автоматическое и ручное переименование. 

  Идея сперта из ДОС Навигатора. 

--- 

Copyright (C) 2004 - 2014  <br>
Idea & core: Max Antipin  <br>
Coding: Serge Cheperis aka craZZy  <br>
Bugfixes: slst, CDK, Ivanych, Alter, Axxie and Nsky  <br>
Special thanks to Vitaliy Tsubin  <br>
Far 2 (32 & 64 bit) full unicode version by djdron  <br>
Far 3 (32 & 64 bit) Ruslan Petrenko (ruslanp@ruslanp.com), Michael Lukashov (michael.lukashov@gmail.com)
 
