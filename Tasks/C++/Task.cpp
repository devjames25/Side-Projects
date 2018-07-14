#include "Task.hpp"
#include <string>

Task::Task()
{

}

Task::~Task()
{
	
	
}

Task::Task(std::string name)
{
		this->name = name;
}


std::string Task::getName()
{
	return this->name;
}

