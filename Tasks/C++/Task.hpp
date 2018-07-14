#ifndef TASK_HPP
#define TASK_HPP
#include <string>

class Task
{
	private:
		std::string name;
		
	public:
		Task();
		~Task();
		Task(std::string);
		std::string getName();
	
	
};
#endif
