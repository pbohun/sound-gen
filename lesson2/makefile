MODULES=-lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system
CFLAGS=-std=c++11

all: sound

sound: main.o
	$(CXX) $(CFLAGS) main.o -o sound $(MODULES)

main.o: main.cpp
	$(CXX) $(CFLAGS) -c main.cpp

clean:
	rm -f *.o sound
