hello: hello.o utils.o
	gcc hello.o utils.o -o hello

hello.o: hello.c
	gcc -c hello.c

utils.o: utils.c
	gcc -c utils.c

clean:
	rm -f hello hello.o utils.o
