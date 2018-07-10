from abc import ABCMeta, abstractmethod

class Item:
	__metaclass__ = ABCMeta
	
	@abstractmethod
	def __init__(self, name, price):
		self.name = name
		self.price = price
	
	def getName(self):
		pass
		
	def getPrice(self):
		pass
		

