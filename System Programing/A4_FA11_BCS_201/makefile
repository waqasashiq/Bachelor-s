all: mycopydir mycopyfile
mycopydir:mycopydir.o
	gcc -o mycopydir mycopydir.o
mycopydir.o:mycopydir.c
	gcc -c mycopydir.c
mycopyfile:mycopyfile.o
	gcc -o mycopyfile mycopyfile.o
mycopyfile.o:mycopyfile.c
	gcc -c mycopyfile.c

