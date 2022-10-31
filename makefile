all: main.c  Sources/PBN.c 
	gcc  Sources/PBN.c main.c -o exec

clang: main.c
	clang main.c -o EXEC_CLANG Sources/PBN.c

run: exec
	./exec

