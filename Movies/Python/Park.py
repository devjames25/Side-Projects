from Movie import Movie

class Park(Movie):
	def __init__(self, title, price, time, type):
		self.title = title
		self.price = price
		self.time = time
		self.type = type
	
	def getTitle(self):
		return self.title
		
	def getPrice(self):
		return self.price
		
	def getTime(self):
		return self.time
		
	def getType(self):
		return self.type