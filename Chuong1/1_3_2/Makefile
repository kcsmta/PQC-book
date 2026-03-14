CC = gcc
CFLAGS = -Wall -O2

OBJ = main.o operators.o

demo: $(OBJ)
	$(CC) $(CFLAGS) -o demo $(OBJ)

main.o: main.c operators.h
	$(CC) $(CFLAGS) -c main.c

operators.o: operators.c operators.h
	$(CC) $(CFLAGS) -c operators.c

clean:
	rm -f *.o demo