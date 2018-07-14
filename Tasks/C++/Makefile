
task:	Task.o List.o main.o
	g++ Task.o List.o main.o -o task

Task.o: Task.cpp Task.hpp
	g++ -c Task.cpp

List.o:	List.cpp List.hpp
	g++ -c List.cpp

main.o:	main.cpp
	g++ -c main.cpp

clean:
	rm *.o task
