output: main.o Character.o HarryPotter.o Vampire.o Medusa.o Barbarian.o BlueMen.o Game.o
	g++ -std=c++11 main.o Character.o HarryPotter.o Vampire.o Medusa.o Barbarian.o BlueMen.o Game.o -g -o Project3

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Character.o:
	g++ -std=c++11 -c Character.cpp Character.hpp

HarryPotter.o:
	g++ -std=c++11 -c HarryPotter.cpp HarryPotter.hpp

Vampire.o:
	g++ -std=c++11 -c Vampire.cpp Vampire.hpp

Medusa.o:
	g++ -std=c++11 -c Medusa.cpp Medusa.hpp

Barbarian.o:
	g++ -std=c++11 -c Barbarian.cpp Barbarian.hpp

BlueMen.o:
	g++ -std=c++11 -c BlueMen.cpp BlueMen.hpp

Game.o:
	g++ -std=c++11 -c Game.cpp Game.hpp
	
clean:
	rm *.o *.gch Project3
