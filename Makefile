CC = g++
CFLAGS = -I.
DEPS = THRCalc.hpp
OBJ = main.o THRCalc.o

%.o: %.c $(DEPS)
        $(CC) -cpp -o $@ $< (CFLAGS)

main: main.o THRCalc.o
        $(CC) -o main main.o THRCalc.o
