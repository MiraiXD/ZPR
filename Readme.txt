

Do kompilacji i uruchomienia aplikacji wykorzystywane są dodatkowe biblioteki:
-Qt v. 5.11.2 (do pobrania ze strony https://www.qt.io/download)
-Boost 1_67_0 (link do pobrania oraz instrukcja instalacji dostępna na stronie: https://www.boost.org/doc/libs/1_68_0/more/getting_started/unix-variants.html)

oraz program qmake do utworzenia pliku "Makefile"

kompilacja programu:

Linux:

############################################################################
W celu wygenerowania pliku "Makefile" w folderze głównym projektu używamy komendy:
$ qmake

Następnie używając komend:
$ make
$ make clean

tworzymy plik uruchomieniowy "ZPR_Qt"

############################################################################

Windows:

Programy wymagane do kompilacji projektu znajdują się w folderach instalacji biblioteki Qt:
folder zawierający program qmake.exe: np.: "C:/Qt/5.11.2/mingw53_32/bin"
folder zawierający program mingw32.exe: np.: "C:/Qt/Tools/mingw530_32/bin"

Lokalizacje programów można dodać do zmiennej środowiskowej $PATH

############################################################################

W celu wygenerowania pliku "Makefile" w folderze głownym projektu używamy programu qmake:
$ qmake

Następnie używając komendy:

$ mingw32-make release

tworzymy plik uruchomieniowy ZPR_Qt.exe, zlokalizowany w podfolderze release.


############################################################################
