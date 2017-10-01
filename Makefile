
.PHONEY: all
all: cs

cs : cs.o
	g++  $^ -o $@ -lncurses

cs.o : cs.c 
	g++ -c cs.c -o $@


.PHONEY: clean
clean:
	rm -f cs.o cs


