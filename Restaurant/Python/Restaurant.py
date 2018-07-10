from Item import Item
from Drink import Drink
from Entree import Entree
from Side import Side
from Dessert import Dessert

class Restaurant:
	def __init__(self, name):
		self.name = name
		self.total = 0
		self.drinks = []
		self.meals = []
		self.extras = []
		self.sweets = []
		self.order = []
		
	def addDrinks(self,Drink):
		self.drinks.append(Drink)
		
	def addMeals(self,Entree):
		self.meals.append(Entree)
		
	def addSides(self, Side):
		self.extras.append(Side)
		
	def addDessert(self,Dessert):
		self.sweets.append(Dessert)
		
	def addToOrder(self, Item):
		self.order.append(Item)
		
	def printMenu(self):
		print "****************",self.name,"Menu*********************\n"
		print("\n")
		
		print("****************Drinks*********************\n")
		for x in range(len(self.drinks)):
			print self.drinks[x].getName()
		print("\n")
		
		print("****************Entrees*********************\n")
		for x in range(len(self.meals)):
			print self.meals[x].getName()
		print("\n")
		
		print("****************Sides*********************\n")
		for x in range(len(self.extras)):
			print self.extras[x].getName()
		print("\n")
		
		print("****************Dessert*********************\n")
		for x in range(len(self.sweets)):
			print self.sweets[x].getName()
		print("\n")
		
	def printOrder(self):
		print "This is your order:\n"
		for x in range(len(self.order)):
			print self.order[x].getName()
		print "\n"
		
	def sumOrder(self):
		total = 0
		for x in range(len(self.order)):
			total = total + self.order[x].getPrice()
		return total
			
	def clearOrder(self):
		del self.order[:]
	
			
		
		
		
		
		
		
		
	
		
	
