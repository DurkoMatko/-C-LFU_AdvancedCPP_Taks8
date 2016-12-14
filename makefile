CC = g++-5
OBJECT_FILES = main.o Finds.o FindIfs.o
CPPFLAGS = -std=c++14

default : all
all : Finds

Finds: $(OBJECT_FILES)
	g++ -o $@ main.o 


%.o: %.cpp
	$(CC) -c $(CPPFLAGS) $<


clean:
	rm Finds $(OBJECT_FILES)
