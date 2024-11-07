CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = main

all: $(TARGET)

$(TARGET): main.cpp
	$(CC) $(CFLAGS) -o $(TARGET) main.cpp

clean:
	rm -f $(TARGET)

re: clean all
