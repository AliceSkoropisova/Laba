TARGET = bubble
CC = g++
CFLAGS = -std=c++11
SOURCES = laba1.cpp
OBJECTS = $(SOURCES:.cpp=.o)
ARRAY = 20 140 4
all: $(TARGET)
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
run: $(TARGET)
	./$(TARGET) "$(ARRAY)"
clean:
	rm -f $(TARGET) $(OBJECTS)
