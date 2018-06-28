from Book import Book
from Library import Library

if __name__ == "__main__":

	print("**********************Welcome to the Library Program**********************\n")
	print("\n")
	
	book1 = Book("The 48 Laws of Power", "Robert Greene", "Penguin Books", "September 1, 2000", 452)
	book2 = Book("The Art of War", "Sun Tzu", "Greyhound Press", "April 7, 2017", 38)
	book3 = Book("12 Rules for Life: An Antidote to Chaos", "Jordan B. Peterson", "Random House Canada", "January 23, 2018", 416)
	book4 = Book("Selected Writings and Speeches of Marcus Garvey", "Marcus Garvey", "Dover Publications", "March 5, 2012", 226)
	book5 = Book("How Democracies Die", "Steven Levitsky", "Crown", "January 16, 2018", 320)
	book6 = Book("The Mis-Education of the Negro", "Carter Godwin Woodson", "CreateSpace Independent Publishing Platform", "August 18, 2017", 92)
	
	mainBranch = Library("Main Library", "West Palm Beach", 33406)
	greenBranch = Library("Greenacres Branch", "Greenacres", 33467)
	
	mainBranch.addBook(book1)
	mainBranch.addBook(book2)
	mainBranch.addBook(book3)
	greenBranch.addBook(book4)
	greenBranch.addBook(book5)
	greenBranch.addBook(book6)
	
	mainBranch.printBooks()
	print("\n")
	greenBranch.printBooks()
