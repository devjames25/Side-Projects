
class Book:
	def __init__(self, title, author, publisher, date, pageNumber):
		self.title = title
		self.author = author
		self.publisher = publisher
		self.date = date
		self.pageNumber = pageNumber
		
	def getTitle(self):
		return self.title
		
	def getAuthor(self):
		return self.author
		
	def getPublisher(self):
		return self.publisher
		
	def getDate(self):
		return self.date
		
	def getPage(self):
		return self.pageNumber
		
