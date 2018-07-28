from Food import Food

class Baskets(Food):
	def __init__(self, name, price):
		self.name = name
		self.price = price
		self.quantity = 1 
		
	def getName(self):
		return self.name
		
	def getPrice(self):
		return self.price
		
	def addQuantity(self):
		self.quantity += 1
		return self.quantity
		
	def getQuantity(self):
		return self.quantity