# -*- coding: utf-8 -*-
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
from Theater import Theater

if __name__ == "__main__":
	
		wallet = 100.00
		entranceFee = 0
		
		#Theater
		royal = Theater("Regal Royal Palm Beach Stadium 18 & RPX", "Royal Palm Beach", "Florida")
		cityplace = Theater("AMC CityPlace 20", "West Palm Beach", "Florida")
		
		#Movies
		#Black Panther Movie
		panther1 = Black("Black Panther", 9.99, "10:45am", "standard");
		panther2 = Black("Black Panther", 9.99, "11:30am", "standard");
		panther3 = Black("Black Panther", 11.05, "12:15pm", "3D");
		panther4 = Black("Black Panther", 9.99, "1:30pm", "standard");
		
		#Deadpool Movie
		deadpool1 = Deadpool("Deadpool", 12.99, "9:30am", "standard");
		deadpool2 = Deadpool("Deadpool", 12.99, "12:30pm", "standard");
		deadpool3 = Deadpool("Deadpool", 14.05, "3:45pm", "3D");
		deadpool4 = Deadpool("Deadpool", 12.99, "5:15pm", "standard");
		
		#Ocean Movie
		ocean1 = Ocean("Ocean's 8", 10.99, "8:45am", "standard");
		ocean2 = Ocean("Ocean's 8", 10.99, "9:25am", "standard");
		ocean3 = Ocean("Ocean's 8", 12.05, "10:00am", "3D");
		ocean4 = Ocean("Ocean's 8", 10.99, "12:00pm", "standard");
		
		#Marvel Movie
		marvel1 = Marvel("Avengers: Infinity War", 10.99, "2:15pm", "standard");
		marvel2 = Marvel("Avengers: Infinity War", 10.99, "3:30pm", "standard");
		marvel3 = Marvel("Avengers: Infinity War", 11.05, "4:05pm", "3D");
		marvel4 = Marvel("Avengers: Infinity War", 10.99, "6:45pm", "standard");
		
		#Sky Movie
		sky1 = Sky("Skyscrapper", 9.99, "10:15am", "standard");
		sky2 = Sky("Skyscrapper", 9.99, "12:45pm", "standard");
		sky3 = Sky("Skyscrapper", 11.05, "4:45pm", "3D");
		sky4 = Sky("Skyscrapper", 9.99, "5:00pm", "standard");
		
		#Park Movie
		park1 = Park("Jurassic World: Fallen Kingdom", 11.99, "8:25am", "standard");
		park2 = Park("Jurassic World: Fallen Kingdom", 11.99, "10:15am", "standard");
		park3 = Park("Jurassic World: Fallen Kingdom", 13.05, "12:55pm", "3D");
		park4 = Park("Jurassic World: Fallen Kingdom", 11.99, "5:25am", "standard");
		
		#Mission Movie
		mission1 = Mission("Mission: Impossible – Fallout", 12.99, "9:00am", "standard");
		mission2 = Mission("Mission: Impossible – Fallout", 12.99, "11:15am", "standard");
		mission3 = Mission("Mission: Impossible – Fallout", 13.05, "2:25pm", "3D");
		mission4 = Mission("Mission: Impossible – Fallout", 12.99, "4:15pm", "standard");

		
		#Add movies to royal movie theater
		royal.addFilm(panther1)
		royal.addFilm(panther2)
		royal.addFilm(deadpool1)
		royal.addFilm(deadpool2)
		royal.addFilm(ocean1)
		royal.addFilm(ocean2)
		royal.addFilm(marvel1)
		royal.addFilm(marvel2)
		royal.addFilm(sky1)
		royal.addFilm(sky2)
		royal.addFilm(park1)
		royal.addFilm(park2)
		royal.addFilm(mission1)
		royal.addFilm(mission2)
		
		#Add movies to city place movie theater
		cityplace.addFilm(panther3)
		cityplace.addFilm(panther4)
		cityplace.addFilm(deadpool3)
		cityplace.addFilm(deadpool4)
		cityplace.addFilm(ocean3)
		cityplace.addFilm(ocean4)
		cityplace.addFilm(marvel3)
		cityplace.addFilm(marvel4)
		cityplace.addFilm(sky3)
		cityplace.addFilm(sky4)
		cityplace.addFilm(park3)
		cityplace.addFilm(park4)
		cityplace.addFilm(mission3)
		cityplace.addFilm(mission4)
		
		#Food Items
		#Baskets
		chicken = Baskets("Chicken Tenders N Fries", 8.99)
		burger = Baskets("Cheese Burger with Fries", 9.59)
		hotdog = Baskets("Hot Dog with Fries", 7.69)
		nachoes = Baskets("Nachoes with cheese", 6.99)
		cheesefries = Baskets("Cheese Fries", 6.99)
		fries = Baskets("Fries Only", 5.99)
	
		#Popcorn
		cornS = Popcorn("Small Popcorn", 4.99)
		cornM = Popcorn("Medium Popcorn", 5.59)
		cornL = Popcorn("Large Popcorn", 6.99)
	
		#Sodas
		drinkS = Soda("Small Fountain Soda", 3.59)
		drinkM = Soda("Medium Fountain Soda", 4.59)
		drinkL = Soda("Large Fountain Soda", 5.59)
		
		#Snacks
		lays = Snacks("lays's Original Chips ", 2.25)
		salt = Snacks("Salt N Vinegar Chips", 2.25)
		barbecue = Snacks("Barbecue Chips", 2.25)
		skittles = Snacks("Skittles", 2.89)
		sour = Snacks("Sour Gummy Worms", 2.89)
		chocolate = Snacks("Cookies n Creams Hersey Bar", 2.25)
		
		#Add food to royal theater
		royal.addFood(chicken)
		royal.addFood(burger)
		royal.addFood(hotdog)
		royal.addFood(nachoes)
		royal.addFood(cheesefries)
		royal.addFood(fries)
		royal.addFood(cornS)
		royal.addFood(cornM)
		royal.addFood(cornL)
		royal.addFood(drinkS)
		royal.addFood(drinkM)
		royal.addFood(drinkL)
		royal.addFood(lays)
		royal.addFood(salt)
		royal.addFood(barbecue)
		royal.addFood(skittles)
		royal.addFood(sour)
		royal.addFood(chocolate)
	
		#Add food to cityplace theater 
		cityplace.addFood(chicken)
		cityplace.addFood(burger)
		cityplace.addFood(hotdog)
		cityplace.addFood(nachoes)
		cityplace.addFood(cheesefries)
		cityplace.addFood(fries)
		cityplace.addFood(cornS)
		cityplace.addFood(cornM)
		cityplace.addFood(cornL)
		cityplace.addFood(drinkS)
		cityplace.addFood(drinkM)
		cityplace.addFood(drinkL)
		cityplace.addFood(lays)
		cityplace.addFood(salt)
		cityplace.addFood(barbecue)
		cityplace.addFood(skittles)
		cityplace.addFood(sour)
		cityplace.addFood(chocolate)
		
		entrance = ''
		
		print "***************************Welcome to the Movie program***************"
		print "\n"
		path = raw_input("\nWhich movie theater would you like to go to?(Type 'royal' for Royal Theater or 'city' for City Place Theater)")
	
		if path == "royal":
			print "\nWelcom to the {} at the city of {} in the state of {}.".format(royal.getName(), royal.getCity(), royal.getState())
			
			while entrance != 'q':
			
				royal.printFilms()
				entrance = input("Enter which movie you want to see using the corresponding number or 'q' to exit:\n")
				
				if entrance == 1:
					tickets = input("How many tickets do you want?\n")
					entranceFee = panther1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
							
				elif entrance == 2:
					tickets = input("How many tickets do you want?\n")
					entranceFee = panther2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 3:
					tickets = input("How many tickets do you want?\n")
					entranceFee = deadpool1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 4:
					tickets = input("How many tickets do you want?\n")
					entranceFee = deadpool2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 5:
					tickets = input("How many tickets do you want?\n")
					entranceFee = ocean1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 6:
					tickets = input("How many tickets do you want?\n")
					entranceFee = ocean2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 7:
					tickets = input("How many tickets do you want?\n")
					entranceFee = marvel1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 8:
					tickets = input("How many tickets do you want?\n")
					entranceFee = marvel2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 9:
					tickets = input("How many tickets do you want?\n")
					entranceFee = sky1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
							
				elif entrance == 10:
					tickets = input("How many tickets do you want?\n")
					entranceFee = sky2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 11:
					tickets = input("How many tickets do you want?\n")
					entranceFee = park1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 12:
					tickets = input("How many tickets do you want?\n")
					entranceFee = park2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 13:
					tickets = input("How many tickets do you want?\n")
					entranceFee = mission1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 14:
					tickets = input("How many tickets do you want?\n")
					entranceFee = mission2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						royal.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							royal.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							royal.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							royal.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							royal.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							royal.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							royal.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							royal.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							royal.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							royal.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							royal.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							royal.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							royal.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							royal.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							royal.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							royal.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							royal.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							royal.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							royal.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
			
			print "*****************Your order*****************\n"
			royal.printOrder()
			
			print "Your total would be ${}.".format(royal.totalOrder())
			if wallet < royal.totalOrder():
				print "Sorry, you don't have enough money.\n"
			else:
				wallet -= royal.totalOrder()
				print "You have ${} left.\n".format(wallet)
				
		elif path == "city":
			print ("\nWelcom to the {} at the city of {} in the state of {}.".format(cityplace.getName(), cityplace.getCity(), cityplace.getState()))
			
			while entrance != 'q':
			
				cityplace.printFilms()
				entrance = input("Enter which movie you want to see using the corresponding number or 'q' to exit:\n")
				
				if entrance == 1:
					tickets = input("How many tickets do you want?\n")
					entranceFee = panther1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
							
				elif entrance == 2:
					tickets = input("How many tickets do you want?\n")
					entranceFee = panther2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 3:
					tickets = input("How many tickets do you want?\n")
					entranceFee = deadpool1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 4:
					tickets = input("How many tickets do you want?\n")
					entranceFee = deadpool2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrdyr(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 5:
					tickets = input("How many tickets do you want?\n")
					entranceFee = ocean1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 6:
					tickets = input("How many tickets do you want?\n")
					entranceFee = ocean2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 7:
					tickets = input("How many tickets do you want?\n")
					entranceFee = marvel1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 8:
					tickets = input("How many tickets do you want?\n")
					entranceFee = marvel2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 9:
					tickets = input("How many tickets do you want?\n")
					entranceFee = sky1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
							
				elif entrance == 10:
					tickets = input("How many tickets do you want?\n")
					entranceFee = sky2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 11:
					tickets = input("How many tickets do you want?\n")
					entranceFee = park1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 12:
					tickets = input("How many tickets do you want?\n")
					entranceFee = park2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 13:
					tickets = input("How many tickets do you want?\n")
					entranceFee = mission1.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
				
				elif entrance == 14:
					tickets = input("How many tickets do you want?\n")
					entranceFee = mission2.getPrice() * tickets
					print "Your total is ${}".format(entranceFee)
					wallet -= entranceFee
					print "You have ${} left in your wallet.".format(wallet)
					
					more = raw_input("Would you like to order any food(Enter 'y' for yes and 'n' for no)")
					
					while more == 'y':
						cityplace.printMenu()
						foodOption = input("Enter the menu item you want to order with corresponding number\n")
						
						if foodOption == 1:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chicken.addQuantity()
							cityplace.addOrder(chicken)
							
						elif foodOption == 2:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								burger.addQuantity()
							cityplace.addOrder(burger)
							
						elif foodOption == 3:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								hotdog.addQuantity()
							cityplace.addOrder(hotdog)
						
						elif foodOption == 4:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								nachoes.addQuantity()
							cityplace.addOrder(nachoes)
						
						elif foodOption == 5:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cheesefries.addQuantity()
							cityplace.addOrder(cheesefries)
							
						elif foodOption == 6:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								fries.addQuantity()
							cityplace.addOrder(fries)
							
						elif foodOption == 7:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornS.addQuantity()
							cityplace.addOrder(cornS)
							
						elif foodOption == 8:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornM.addQuantity()
							cityplace.addOrder(cornM)
									
						elif foodOption == 9:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								cornL.addQuantity()
							cityplace.addOrder(cornL)
							
						elif foodOption == 10:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkS.addQuantity()
							cityplace.addOrder(drinkS)
							
						elif foodOption == 11:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkM.addQuantity()
							cityplace.addOrder(drinkM)
							
						elif foodOption == 12:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								drinkL.addQuantity()
							cityplace.addOrder(drinkL)
							
						elif foodOption == 13:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								lays.addQuantity()
							cityplace.addOrder(lays)
							
						elif foodOption == 14:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								salt.addQuantity()
							cityplace.addOrder(salt)
						
						elif foodOption == 15:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								barbecue.addQuantity()
							cityplace.addOrder(barbecue)
							
						elif foodOption == 16:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								skittles.addQuantity()
							cityplace.addOrder(skittles)
							
						elif foodOption == 17:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								sour.addQuantity()
							cityplace.addOrder(sour)
							
						elif foodOption == 18:
							add = raw_input("Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)")
							if add == 'y':
								chocolate.addQuantity()
							cityplace.addOrder(chocolate)
							
						else:
							print "The order that you asked for is not on the menu.\n"
							
						more = raw_input("Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n")
						
						if more == 'n':
							entrance = 'q'
			
			cityplace.printOrder()
			
			print "Your total would be ${}.".format(cityplace.totalOrder())
			if wallet < cityplace.totalOrder():
				print "Sorry, you don't have enough money.\n"
			else:
				wallet -= cityplace.totalOrder()
				print "You have ${} left.\n".format(wallet)
		
		else:
			print("\nWrong input. Theater doesn't exist.")
