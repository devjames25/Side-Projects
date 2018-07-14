#include "List.hpp"
#include <string>
#include <vector>
#include <iostream>

List::List()
{	
}

List::~List()
{	
}

void List::addTask(Task* t)
{
	notepad.push_back(t);
}

void List::removeTask()
{
	notepad.pop_back();
}

void List::printTasks()
{
	std::cout << "*************To Do List*********************\n";
	std::cout << "      Tasks        \n";
	
	for(int i = 0; i < notepad.size(); i++)
	{
		std::cout << i+1 << ". " << notepad.at(i)->getName() << std::endl;
	}
}
