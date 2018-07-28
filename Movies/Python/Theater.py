from Movie import Movie 
from Black import Black
from Deadpool import Deadpool
from Marvel import Marvel
from Park import Park
from Mission import Mission
from Ocean import Ocean
from Sky import Sky
from Food import Food
from Soda import Soda
from Popcorn import Popcorn
from Snacks import Snacks
from Baskets import Baskets

class Theater:
	def __init__(self, name, city, state):
		self.name = name
		self.city = city
		self.state = state
		self.sumFood = 0
		self.films = []
		self.menu = []
		self.order = []
		
	def getName(self):
		return self.name
		
	def getCity(self):
		return self.city
		
	def getState(self):
		return self.state
		
	def addFilm(self, Movie):
		self.films.append(Movie)
	
	def addFood(self, Food):
		self.menu.append(Food)
		
	def addOrder(self, Food):
		self.order.append(Food)
	
	def printFilms(self):
		print "*****************Now Playing*****************"
		for x in range(len(self.films)):
			print "{}. {} {} ${} {}".format(x+1, self.films[x].getTitle(), self.films[x].getTime(), self.films[x].getPrice(), self.films[x].getType())

	def printMenu(self):
		print "*****************Food Menu*****************"
		for x in range(len(self.menu)):
			print "{}. {} ${}".format(x+1, self.menu[x].getName(), self.menu[x].getPrice())
			
	def printOrder(self):
		print "*****************Your Order*****************"
		for x in range(len(self.order)):
			print "{}. {} ${} quant: {}".format(x+1, self.order[x].getName(), self.order[x].getPrice(), self.order[x].getQuantity())

	def totalOrder(self):
		total = 0
		sumFood = 0
		for x in range(len(self.order)):
			total = self.order[x].getPrice() * self.order[x].getQuantity()
			sumFood += total
		return sumFood
		
	
