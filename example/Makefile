CC=musl-gcc
#CC=cc
EXEC=modexport
INPUT=main.c mod1.c mod2.c mod3.c
OBJS=main.o mod1.o mod2.o mod3.o
DEST=~/bin/

FLAGS=-static -Wall -Wextra -pedantic -Iinclude
DFLAGS=$(FLAGS) -Og -g
CFLAGS=$(FLAGS) -O3

debug:
	$(CC) $(DFLAGS) -c $(INPUT)
	$(CC) $(DFLAGS) $(OBJS) -o $(EXEC)

all:
	$(CC) $(CFLAGS) -c $(INPUT)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)
	strip -s $(EXEC)

install: all
	install $(EXEC) -t $(DEST)

uninstall:
	rm -f $(DEST)/$(EXEC)

clean:
	rm -rf $(OBJS) $(EXEC)
