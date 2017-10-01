.PHONEY: all
all: cs

cs : cs.o draw.o
	g++  $^ -o $@ -lncurses

cs.o : cs.c 
	g++ -c $? -o $@

draw.o : draw.c 
	g++ -c $? -o $@


.PHONEY: clean
clean:
	rm -f cs.o cs


