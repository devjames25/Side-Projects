from abc import ABCMeta, abstractmethod

class Food:
	__metaclass__ = ABCMeta
	
	@abstractmethod
	def __init__(self, name, price):
		self.name = name
		self.price = price
		self.quantity = 1 
		
	def getName(self):
		pass
		
	def getPrice(self):
		pass
		
	def addQuantity(self):
		pass
		
	def getQuantity(self):
		pass
	