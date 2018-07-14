#include "Task.hpp"
#include "List.hpp"
#include <string>
#include <iostream>

int main(int argc, char**argv)
{
	Task* chore = NULL;
	List l;
	int input;
	std::string name;
	char s[100];

	
	do{
		std::cout << "This is your personal To-Do List. Enter numbers below to edit your list.\n";
		std::cout << "1) Add tasks to the list!\n";
		std::cout << "2) Remove last task off the list!\n";
		std::cout << "3) Display your tasks on screen!\n";
		std::cout << "4) Exit your task list editor!\n";
		std::cin >> input;
		std::cin.ignore();
		
		/*while((input < 1) || (input > 4)) //Input Validation
		{
			std::cout << "WRONG INPUT! Please choose between 1 and 4:\n";
			std::cin >> input;
		}*/
		
		if(input != 4)
		{
			switch(input)
			{
				case 1:	std::cout << "Enter the task here:\n";
						
						std::cin.getline(s,sizeof(s));
						name = s;
						chore = new Task(name);
						l.addTask(chore);
						std::cin.ignore();

						break;
				
				case 2: l.removeTask();
						break;
						
				case 3:	l.printTasks();
						break;
						
				case 4: delete chore;
			}
		} 
	} while(input != 4);
	
	return 0;
}
