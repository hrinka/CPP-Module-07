CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = array_test

all: $(TARGET)

$(TARGET): main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o

main.o: main.cpp Array.hpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f *.o $(TARGET)

re: clean all
