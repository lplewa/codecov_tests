CC = gcc
CFLAGS += -I.. -coverage

LIBS=-lgcov

all: program

program: main.o foo.o
	gcc -o $@ $^ $(LIBS)

%.o: %.c
	gcc -c `readlink -f $^` $(CFLAGS)


clean:
	rm -f *.o program *.gcda *.gcno *.gcov

test: program
	@./program


.PHONY: test all clean
