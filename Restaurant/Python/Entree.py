from Item import Item

class Entree(Item):
	def __init__(self, name, price):
		self.name = name
		self.price = price
	
	def getName(self):
		return self.name
		
	def getPrice(self):
		return self.price
	
	