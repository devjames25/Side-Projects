from Item import Item
from Drink import Drink
from Entree import Entree
from Side import Side
from Dessert import Dessert
from Restaurant import Restaurant

if __name__ == "__main__":
	
	#Restaurant
	pollo = Restaurant("Pollo Tropical")

	#Drinks
	coke = Drink("Coca-Cola", 2.19)
	sprite = Drink("Sprite", 2.19)
	lemonade = Drink("Lemonade", 2.19)
	water = Drink("Water", 1.99)
	fruitpunch = Drink("Hi-C Fruit Punch", 2.49)
	icetea = Drink("Mango Ice Tea", 2.25)
	
	#Entrees
	chicken = Entree("1/4 Fire Grilled Chicken", 3.49)
	pork = Entree("Mojo Roast Pork", 5.79)
	ribs = Entree("Caribbean Ribs", 8.49)
	shrimp = Entree("Tropical Citrus Shrimp", 3.99)
	salad = Entree("Chicken Caesar Salad", 6.69)
	wrap = Entree("Chicken Quesadilla Wrap", 3.19)
	sandwiches = Entree("Chipotle Chicken Sandwich", 3.69)
	
	#Sides
	rice = Side("White or Brown Rice", 1.99)
	beans = Side("Black Beans", 1.99)
	riceYellow = Side("Yellow Rice & Vegetables", 1.99)
	fries = Side("Waffle Fries", 1.99)
	corn = Side("Kernel Corn", 2.49)
	potatoe = Side("Mashed Potatoes with Gravy", 2.49)
	cheese = Side("Macaroni & Cheese", 2.49)
	
	#Dessert
	flan = Dessert("Flan", 1.99)
	cake = Dessert("Guava Cheesecake", 2.69)
	bar = Dessert("Guava Bar", 0.99)
	
	#Adding drinks to menu
	pollo.addDrinks(coke)
	pollo.addDrinks(sprite)
	pollo.addDrinks(lemonade)
	pollo.addDrinks(water)
	pollo.addDrinks(fruitpunch)
	pollo.addDrinks(icetea)
	
	#Adding entrees to menu
	pollo.addMeals(chicken)
	pollo.addMeals(pork)
	pollo.addMeals(ribs)
	pollo.addMeals(shrimp)
	pollo.addMeals(salad)
	pollo.addMeals(wrap)
	pollo.addMeals(sandwiches)
	
	#Adding sides to menu
	pollo.addSides(rice)
	pollo.addSides(beans)
	pollo.addSides(riceYellow)
	pollo.addSides(fries)
	pollo.addSides(corn)
	pollo.addSides(potatoe)
	pollo.addSides(cheese)
	
	#Adding desserts to menu
	pollo.addDessert(flan)
	pollo.addDessert(cake)
	pollo.addDessert(bar)
	
	#Printing menu
	pollo.printMenu()
	
	#Add to order
	pollo.addToOrder(shrimp)
	pollo.addToOrder(riceYellow)
	pollo.addToOrder(corn)
	pollo.addToOrder(icetea)
	pollo.addToOrder(cake)
	
	#Print order
	pollo.printOrder()
	
	print "Your total is $",pollo.sumOrder()
	
	pollo.clearOrder()
	
	
