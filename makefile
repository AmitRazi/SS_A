CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=mylib.o
FLAGS= -Wall
all: mains maindloop maindrec
mains: main.o libclassrec.a NumClass.h
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm
	
maindloop: main.o NumClass.h libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so
	
maindrec: main.o libclassrec.so NumClass.h
	$(CC) $(FLAGS) main.o ./libclassrec.so -o maindrec -lm
main.o: main.c
	$(CC) $(FLAGS) -c main.c
loops: libclassloops.a
libclassloops.a: advancedClassificationLoop.o basicClassification.o
	$(AR) -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o
advancedClassificationLoop.o: advancedClassificationLoop.c
	$(CC) $(FLAGS) -c advancedClassificationLoop.c
basicClassification.o: 	basicClassification.c
	$(CC) $(FLAGS) -c basicClassification.c
recursives: libclassrec.a
libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
advancedClassificationRecursion.o: advancedClassificationRecursion.c
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c
recursived: libclassrec.so
libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o
loopd: libclassloops.so
libclassloops.so: advancedClassificationLoop.o basicClassification.o
	$(CC) -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o
	
.PHONY: loops clean all
clean:
	rm -f *.o  *.so *.a mains maindloop maindrec
