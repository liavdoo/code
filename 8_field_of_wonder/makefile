all: pole.exe clean

main.exe: pole.o Master.o Word.o Player.o Game.o
	g++ pole.o Master.o Word.o Player.o Game.o -o pole.exe -g

pole.o: pole.cpp
	g++ -c pole.cpp -o pole.o -g

Master.o: Master.cpp
	g++ -c Master.cpp -o Master.o -g

Word.o: Word.cpp
	g++ -c Word.cpp -o Word.o -g

Player.o: Player.cpp
	g++ -c Player.cpp -o Player.o -g
	
Game.o: Game.cpp
	g++ -c Game.cpp -o Game.o -g
 
clean:
	del *.o

run: pole.exe
	./pole.exe