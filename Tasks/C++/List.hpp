#ifndef LIST_HPP
#define LIST_HPP
#include "Task.hpp"
#include <string>
#include <vector>

class List
{
	private:
		std::vector<Task*> notepad;
	
	public:
		List();
		~List();
		void addTask(Task*);
		void removeTask();
		void printTasks();

};
#endif
