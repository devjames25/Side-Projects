from Task import Task

class List:
	def __init__(self):
		self.list =  []
		
	def addTasks(self, Task):
		self.list.append(Task);
		
	def removeTask(self):
		del self.list[-1]
				
	def printTask(self):
		 print "*************To Do List*********************"
		 for x in range(len(self.list)):
			print self.list[x].getName() 