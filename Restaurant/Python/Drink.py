from Item import Item

class Drink(Item):
	def __init__(self, name, price):
		self.name = name
		self.price = price
	
	def getName(self):
		return self.name
		
	def getPrice(self):
		return self.price