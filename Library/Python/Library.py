from Book import Book

class Library:

	def __init__(self, branch, city, zipcode):
		self.branch = branch
		self.city = city
		self.zipcode = zipcode
		self.bookshelf = []	
		
	def addBook(self,Book):
		self.bookshelf.append(Book)

	def delBook(title):
		for Book in bookshelf:
			if Book.title == title:
				bookshelf.remove(Book)
		
	def printBooks(self):
		print"These are all the books at the ",self.branch," located at the city of ",self.city,"."
		for x in range(len(self.bookshelf)):
			print self.bookshelf[x].getTitle()
		
