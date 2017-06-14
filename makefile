
all test:
	make -C ./prog1 $@
	make -C ./prog2 $@

clean:
	make -C ./prog1 $@
	make -C ./prog2 $@
	rm -f *.gcov
