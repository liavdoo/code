all: reverse.exe 
main.exe: reverse.o list.o
	g++ reverse.o list.o -o reverse.exe -g

main.o: reverse.cpp
	g++ -c reverse.cpp -o reverse.o -g
	
queue.o: list.cpp
	g++ -c list.cpp -o list.o -g

clean:
	del *.o

run: reverse.exe
	./reverse.exe