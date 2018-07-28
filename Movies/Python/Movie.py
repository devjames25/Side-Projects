from abc import ABCMeta, abstractmethod

class Movie:
	__metaclass__ = ABCMeta
	
	@abstractmethod
	def __init__(self, title, price, time, type):
		self.title = title
		self.price = price
		self.time = time
		self.type = type
		
	def getTitle(self):
		pass
		
	def getPrice(self):
		pass
		
	def getTime(self):
		pass
		
	def getType(self):
		pass