from Task import Task
from List import List


if __name__ == "__main__":

	print "************************To Do List*******************\n"
	
	option = ''
	todolist = List()
	
	while option != 'q':
		print("[1] Enter 1 to add task to your list.\n")
		print("[2] Enter 2 to remove last task on your list.\n")
		print("[3] Enter 3 to display To Do List.\n")
		print("[q] Enter 'q' to quit.\n")
		
		option = input("\nEnter your option here:")
		
		if option == 1:
			name = raw_input("Enter the task here:\n")
			newTask = Task(name)
			todolist.addTasks(newTask)
			del newTask
		elif option == 2:
			todolist.removeTask()
		elif option == 3:
			todolist.printTask()
		elif option == 'q':
			print("\nFarewell!")
		else:
			print ("\nWrong input. Please try again.")
	
	
