CC = g++
CFLAGS  = -Wall -Werror

all: bin/chessviz

bin/chessviz: build/main.o build/board.o build/board_print_plain.o bin
	$(CC) $(CFLAGS) build/main.o build/board_print_plain.o build/board.o -o bin/chessviz

build/main.o: src/main.cpp src/board.h src/board_print_plain.h build
	$(CC) $(CFLAGS) -c src/main.cpp -o build/main.o

build/board.o: src/board.cpp src/board.h build
	$(CC) $(CFLAGS) -c src/board.cpp -o build/board.o

build/board_print_plain.o: src/board_print_plain.cpp src/board_print_plain.h build
	$(CC) $(CFLAGS) -c src/board_print_plain.cpp -o build/board_print_plain.o



build:
	mkdir build

bin:
	mkdir bin
