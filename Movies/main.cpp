#include "Movie.hpp"
#include "Black.hpp"
#include "Deadpool.hpp"
#include "Sky.hpp"
#include "Marvel.hpp"
#include "Ocean.hpp"
#include "Park.hpp"
#include "Mission.hpp"
#include "Food.hpp"
#include "Candy.hpp"
#include "Soda.hpp"
#include "Popcorn.hpp"
#include "Baskets.hpp"
#include "Chips.hpp"
#include "Theater.hpp"
#include <string>
#include <iostream>

int main(int argc, char**argv)
{
	int tickets;
	double wallet = 100.00;
	double entrance = 0;
	int increase;
	int option;
	char more;
	char add;
	int foodOption;
	std::string path;
	
	//Theater
	Theater royal("Regal Royal Palm Beach Stadium 18 & RPX", "Royal Palm Beach", "Florida");
	Theater cityplace("AMC CityPlace 20", "West Palm Beach", "Florida");	
	
	//Movies
	//Black Panther movie 
	Black* panther1 = new Black("Black Panther", 9.99, "10:45am", "standard");
	Black* panther2 = new Black("Black Panther", 9.99, "11:30am", "standard");
	Black* panther3 = new Black("Black Panther", 11.05, "12:15pm", "3D");
	Black* panther4 = new Black("Black Panther", 9.99, "1:30pm", "standard");
	
	//Deadpool movie
	Deadpool* deadpool1 = new Deadpool("Deadpool", 12.99, "9:30am", "standard");
	Deadpool* deadpool2 = new Deadpool("Deadpool", 12.99, "12:30pm", "standard");
	Deadpool* deadpool3 = new Deadpool("Deadpool", 14.05, "3:45pm", "3D");
	Deadpool* deadpool4 = new Deadpool("Deadpool", 12.99, "5:15pm", "standard");
	
	//Ocean movie
	Ocean* ocean1 = new Ocean("Ocean's 8", 10.99, "8:45am", "standard");
	Ocean* ocean2 = new Ocean("Ocean's 8", 10.99, "9:25am", "standard");
	Ocean* ocean3 = new Ocean("Ocean's 8", 12.05, "10:00am", "3D");
	Ocean* ocean4 = new Ocean("Ocean's 8", 10.99, "12:00pm", "standard");
	
	//Marvel movie
	Marvel* marvel1 = new Marvel("Avengers: Infinity War", 10.99, "2:15pm", "standard");
	Marvel* marvel2 = new Marvel("Avengers: Infinity War", 10.99, "3:30pm", "standard");
	Marvel* marvel3 = new Marvel("Avengers: Infinity War", 11.05, "4:05pm", "3D");
	Marvel* marvel4 = new Marvel("Avengers: Infinity War", 10.99, "6:45pm", "standard");
	
	//Sky movie
	Sky* sky1 = new Sky("Skyscrapper", 9.99, "10:15am", "standard");
	Sky* sky2 = new Sky("Skyscrapper", 9.99, "12:45pm", "standard");
	Sky* sky3 = new Sky("Skyscrapper", 11.05, "4:45pm", "3D");
	Sky* sky4 = new Sky("Skyscrapper", 9.99, "5:00pm", "standard");
	
	//Park movie
	Park* park1 = new Park("Jurassic World: Fallen Kingdom", 11.99, "8:25am", "standard");
	Park* park2 = new Park("Jurassic World: Fallen Kingdom", 11.99, "10:15am", "standard");
	Park* park3 = new Park("Jurassic World: Fallen Kingdom", 13.05, "12:55pm", "3D");
	Park* park4 = new Park("Jurassic World: Fallen Kingdom", 11.99, "5:25am", "standard");
	
	//Mission movie
	Mission* mission1 = new Mission("Mission: Impossible – Fallout", 12.99, "9:00am", "standard");
	Mission* mission2 = new Mission("Mission: Impossible – Fallout", 12.99, "11:15am", "standard");
	Mission* mission3 = new Mission("Mission: Impossible – Fallout", 13.05, "2:25pm", "3D");
	Mission* mission4 = new Mission("Mission: Impossible – Fallout", 12.99, "4:15pm", "standard");

	//add movies to royal theater
	royal.addFilm(panther1);
	royal.addFilm(panther2);
	royal.addFilm(deadpool1);
	royal.addFilm(deadpool2);
	royal.addFilm(ocean1);
	royal.addFilm(ocean2);
	royal.addFilm(marvel1);
	royal.addFilm(marvel2);
	royal.addFilm(sky1);
	royal.addFilm(sky2);
	royal.addFilm(park1);
	royal.addFilm(park2);
	royal.addFilm(mission1);
	royal.addFilm(mission2);
	
	//add movies to cityplace theater
	cityplace.addFilm(panther3);
	cityplace.addFilm(panther4);
	cityplace.addFilm(deadpool3);
	cityplace.addFilm(deadpool4);
	cityplace.addFilm(ocean3);
	cityplace.addFilm(ocean4);
	cityplace.addFilm(marvel3);
	cityplace.addFilm(marvel4);
	cityplace.addFilm(sky3);
	cityplace.addFilm(sky4);
	cityplace.addFilm(park3);
	cityplace.addFilm(park4);
	cityplace.addFilm(mission3);
	cityplace.addFilm(mission4);
	
	//Food items
	//Food Baskets 
	Baskets* chicken = new Baskets("Chicken Tenders N Fries", 8.99);
	Baskets* burger = new Baskets("Cheese Burger with Fries", 9.59);
	Baskets* hotdog = new Baskets("Hot Dog with Fries", 7.69);
	Baskets* nachoes = new Baskets("Nachoes with cheese", 6.99);
	Baskets* cheesefries = new Baskets("Cheese Fries", 6.99);
	Baskets* fries = new Baskets("Fries Only", 5.99);
	
	//Popcorn
	Popcorn* cornS = new Popcorn("Small Popcorn", 4.99);
	Popcorn* cornM = new Popcorn("Medium Popcorn", 5.59);
	Popcorn* cornL = new Popcorn("Large Popcorn", 6.99);
	
	//Sodas
	Soda* drinkS = new Soda("Small Fountain Soda", 3.59);
	Soda* drinkM = new Soda("Medium Fountain Soda", 4.59);
	Soda* drinkL = new Soda("Large Fountain Soda", 5.59);
	
	//Snacks
	Chips* lays = new Chips("lays's Original Chips ", 2.25);
	Chips* salt = new Chips("Salt N Vinegar Chips", 2.25);
	Chips* barbecue = new Chips("Barbecue Chips", 2.25);
	Candy* skittles = new Candy("Skittles", 2.89);
	Candy* sour = new Candy("Sour Gummy Worms", 2.89);
	Candy* chocolate = new Candy("Cookies n Creams Hersey Bar", 2.25);
	
	//Add food to royal theater
	royal.addMenu(chicken);
	royal.addMenu(burger);
	royal.addMenu(hotdog);
	royal.addMenu(nachoes);
	royal.addMenu(cheesefries);
	royal.addMenu(fries);
	royal.addMenu(cornS);
	royal.addMenu(cornM);
	royal.addMenu(cornL);
	royal.addMenu(drinkS);
	royal.addMenu(drinkM);
	royal.addMenu(drinkL);
	royal.addMenu(lays);
	royal.addMenu(salt);
	royal.addMenu(barbecue);
	royal.addMenu(skittles);
	royal.addMenu(sour);
	royal.addMenu(chocolate);
	
	//Add food to cityplace theater 
	cityplace.addMenu(chicken);
	cityplace.addMenu(burger);
	cityplace.addMenu(hotdog);
	cityplace.addMenu(nachoes);
	cityplace.addMenu(cheesefries);
	cityplace.addMenu(fries);
	cityplace.addMenu(cornS);
	cityplace.addMenu(cornM);
	cityplace.addMenu(cornL);
	cityplace.addMenu(drinkS);
	cityplace.addMenu(drinkM);
	cityplace.addMenu(drinkL);
	cityplace.addMenu(lays);
	cityplace.addMenu(salt);
	cityplace.addMenu(barbecue);
	cityplace.addMenu(skittles);
	cityplace.addMenu(sour);
	cityplace.addMenu(chocolate);
	
	std::cout << "***********************Welcome to the Movie program***************************\n";
	std::cout << "Which movie threater do you want to go to?(Enter 'royal' for Royal Palm Theater or 'cityplace' for City Place Theater)\n";
	std::cin >> path;
	
	if(path == "royal")
	{
		std::cout << "Welcome to the " << royal.getName() << " at the city of " << royal.getCity() << " in the state of " << royal.getState() << std::endl;
		std::cout << std::endl;
		std::cout << "******************Movies Now Playsing******************\n";
		//royal.printFilms();
		
		do
		{
			std::cout << "Enter which movie do you want to watch:\n";
			std::cout << "Movie 1: " << panther1->getTitle() <<  "  " << panther1->getTime()  << "  " << panther1->getType() << " $" << panther1->getPrice() << "\n";
			std::cout << "Movie 2: " << panther2->getTitle() <<  "  " << panther2->getTime()  << "  " << panther2->getType() << " $" << panther2->getPrice() << "\n";
			std::cout << "Movie 3: " << deadpool1->getTitle() <<  "  " << deadpool1->getTime()  << "  " << deadpool1->getType() << " $" << deadpool1->getPrice() << "\n";
			std::cout << "Movie 4: " << deadpool2->getTitle() <<  "  " << deadpool2->getTime()  << "  " << deadpool2->getType() << " $" << deadpool2->getPrice() << "\n";
			std::cout << "Movie 5: " << ocean1->getTitle() <<  "  " << ocean1->getTime()  << "  " << ocean1->getType() << " $" << panther1->getPrice() << "\n";
			std::cout << "Movie 6: " << ocean2->getTitle() <<  "  " << ocean2->getTime()  << "  " << ocean2->getType() << " $" << panther1->getPrice() << "\n";
			std::cout << "Movie 7: " << marvel1->getTitle() <<  "  " << marvel1->getTime()  << "  " << marvel1->getType() << " $" << marvel1->getPrice() << "\n";
			std::cout << "Movie 8: " << marvel2->getTitle() <<  "  " << marvel2->getTime()  << "  " << marvel2->getType() << " $" << marvel2->getPrice() << "\n";
			std::cout << "Movie 9: " << sky1->getTitle() <<  "  " << sky1->getTime()  << "  " << sky1->getType() << " $" << sky1->getPrice() << "\n";
			std::cout << "Movie 10: " << sky2->getTitle() <<  "  " << sky2->getTime()  << "  " << sky2->getType() << " $" << sky2->getPrice() << "\n";
			std::cout << "Movie 11: " << park1->getTitle() <<  "  " << park1->getTime()  << "  " << park1->getType() << " $" << park1->getPrice() << "\n";
			std::cout << "Movie 12: " << park2->getTitle() <<  "  " << park2->getTime()  << "  " << park2->getType() << " $" << park2->getPrice() << "\n";
			std::cout << "Movie 13: " << mission1->getTitle() <<  "  " << mission1->getTime()  << "  " << mission1->getType() << " $" << mission1->getPrice() << "\n";
			std::cout << "Movie 14: " << mission2->getTitle() <<  "  " << mission2->getTime()  << "  " << mission2->getType() << " $" << mission2->getPrice() << "\n";
			std::cout << "(Enter number matching the order you want or press 15 if you want to ring your order up)\n";
			std::cin >> option;
			
			if(option != 15)
			{
				switch(option)
				{
					case 1:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = panther1->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
						
					case 2:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = panther2->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 3:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = deadpool1->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 4:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = deadpool2->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 5:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = ocean1->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 6:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = ocean2->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 7:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = marvel1->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 8:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = marvel2->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 9:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = sky1->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 10:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = sky2->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 11:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = park1->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 12:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = park2->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 13:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = mission1->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 14:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = mission2->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									royal.addOrder(chicken);;
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									royal.addOrder(burger);
							
								}
								else if(foodOption == 3)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									royal.addOrder(hotdog);
						
									
								}
								else if(foodOption == 4)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									royal.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									royal.addOrder(cheesefries);

									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									royal.addOrder(fries);

								}
								else if(foodOption == 7)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									}
									royal.addOrder(cornS);
									
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();
									}
									royal.addOrder(cornM);
									
									
								}
								else if(foodOption == 9)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
									}
									royal.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}
									royal.addOrder(drinkS);
									
								}
								else if(foodOption == 11)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									royal.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									royal.addOrder(drinkL);
									
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									royal.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{	
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									royal.addOrder(salt);
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
									}
									royal.addOrder(barbecue);
									
								}
								else if(foodOption == 16)
								{		
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									royal.addOrder(skittles);
									
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
									}
									royal.addOrder(sour);
									
								}
								else if(foodOption == 18)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									royal.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					
				}
				
			}
			
			
		} while(option != 15);
		
		std::cout << "******************************Your order*************************\n";
		royal.printOrder();
		
		std::cout << "Your total would be $" << royal.totalFood() << std::endl;
		if(wallet < royal.totalFood())
		{
			std::cout << "Sorry, you don't have enough to purchase this food.\n";
		}
		else
		{
			wallet -= royal.totalFood();
			std::cout << "You have $" << wallet << "left.\n"; 
		}
	}
	else if(path == "cityplace")
	{
		std::cout << "Welcome to the " << cityplace.getName() << " at the city of " << cityplace.getCity() << " in the state of " << cityplace.getState() << std::endl;
		std::cout << std::endl;
		std::cout << "******************Movies Now Playsing******************\n";
		//cityplace.printFilms();
		
		do
		{
			std::cout << "Enter which movie do you want to watch:\n";
			std::cout << "Movie 1: " << panther3->getTitle() <<  "  " << panther3->getTime()  << "  " << panther3->getType() << " $" << panther3->getPrice() << "\n";
			std::cout << "Movie 2: " << panther4->getTitle() <<  "  " << panther4->getTime()  << "  " << panther4->getType() << " $" << panther4->getPrice() << "\n";
			std::cout << "Movie 3: " << deadpool3->getTitle() <<  "  " << deadpool3->getTime()  << "  " << deadpool3->getType() << " $" << deadpool3->getPrice() << "\n";
			std::cout << "Movie 4: " << deadpool4->getTitle() <<  "  " << deadpool4->getTime()  << "  " << deadpool4->getType() << " $" << deadpool4->getPrice() << "\n";
			std::cout << "Movie 5: " << ocean3->getTitle() <<  "  " << ocean3->getTime()  << "  " << ocean3->getType() << " $" << panther3->getPrice() << "\n";
			std::cout << "Movie 6: " << ocean4->getTitle() <<  "  " << ocean4->getTime()  << "  " << ocean4->getType() << " $" << panther4->getPrice() << "\n";
			std::cout << "Movie 7: " << marvel3->getTitle() <<  "  " << marvel3->getTime()  << "  " << marvel3->getType() << " $" << marvel3->getPrice() << "\n";
			std::cout << "Movie 8: " << marvel4->getTitle() <<  "  " << marvel4->getTime()  << "  " << marvel4->getType() << " $" << marvel4->getPrice() << "\n";
			std::cout << "Movie 9: " << sky3->getTitle() <<  "  " << sky3->getTime()  << "  " << sky3->getType() << " $" << sky3->getPrice() << "\n";
			std::cout << "Movie 10: " << sky4->getTitle() <<  "  " << sky4->getTime()  << "  " << sky4->getType() << " $" << sky4->getPrice() << "\n";
			std::cout << "Movie 11: " << park3->getTitle() <<  "  " << park3->getTime()  << "  " << park3->getType() << " $" << park3->getPrice() << "\n";
			std::cout << "Movie 12: " << park4->getTitle() <<  "  " << park4->getTime()  << "  " << park4->getType() << " $" << park4->getPrice() << "\n";
			std::cout << "Movie 13: " << mission3->getTitle() <<  "  " << mission3->getTime()  << "  " << mission3->getType() << " $" << mission3->getPrice() << "\n";
			std::cout << "Movie 14: " << mission4->getTitle() <<  "  " << mission4->getTime()  << "  " << mission4->getType() << " $" << mission4->getPrice() << "\n";
			std::cout << "(Enter number matching the order you want or press 15 if you want to ring your order up)\n";
			std::cin >> option;
			
			if(option != 15)
			{
				switch(option)
				{
					case 1:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = panther3->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);;
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
						
					case 2:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = panther4->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);;
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 3:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = deadpool3->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 4:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = deadpool4->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 5:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = ocean3->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 6:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = ocean4->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 7:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = marvel3->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 8:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = marvel4->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 9:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = sky3->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 10:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = sky4->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 11:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = park3->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 12:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = park4->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 13:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = mission3->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
					case 14:	std::cout << "How many tickets do you want to purchase?\n";
							std::cin >> tickets;
							entrance = mission4->getPrice() * tickets;
							wallet -= entrance;
							std::cout << "You have $" << wallet << std::endl;
							
							std::cout << "Would you like to order any food at our Concession stands?(Enter 'y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							while(more == 'y')
							{
								std::cout << "Order 1: " << chicken->getName() << "  $" << chicken->getPrice() << std::endl;
								std::cout << "Order 2: " << burger->getName() << "  $" << burger->getPrice() << std::endl;
								std::cout << "Order 3: " << hotdog->getName() << "  $" << hotdog->getPrice() << std::endl;
								std::cout << "Order 4: " << nachoes->getName() << "  $" << nachoes->getPrice() << std::endl;
								std::cout << "Order 5: " << cheesefries->getName() << "  $" << cheesefries->getPrice() << std::endl;
								std::cout << "Order 6: " << fries->getName() << "  $" << fries->getPrice() << std::endl;
								std::cout << "Order 7: " << cornS->getName() << "  $" << cornS->getPrice() << std::endl;
								std::cout << "Order 8: " << cornM->getName() << "  $" << cornM->getPrice() << std::endl;
								std::cout << "Order 9: " << cornL->getName() << "  $" << cornL->getPrice() << std::endl;
								std::cout << "Order 10: " << drinkS->getName() << "  $" << drinkS->getPrice() << std::endl;
								std::cout << "Order 11: " << drinkM->getName() << "  $" << drinkM->getPrice() << std::endl;
								std::cout << "Order 12: " << drinkL->getName() << "  $" << drinkL->getPrice() << std::endl;
								std::cout << "Order 13: " << lays->getName() << "  $" << lays->getPrice() << std::endl;
								std::cout << "Order 14: " << salt->getName() << "  $" << salt->getPrice() << std::endl;
								std::cout << "Order 15: " << barbecue->getName() << "  $" << barbecue->getPrice() << std::endl;
								std::cout << "Order 16: " << skittles->getName() << "  $" << skittles->getPrice() << std::endl;
								std::cout << "Order 17: " << sour->getName() << "  $" << sour->getPrice() << std::endl;
								std::cout << "Order 18: " << chocolate->getName() << "  $" << chocolate->getPrice() << std::endl;
								std::cout << "Enter what you want to order:\n";
								std::cin >> foodOption;
								
								if(foodOption == 1)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chicken->addQuantity();
									}
									cityplace.addOrder(chicken);
									
								}
								else if(foodOption == 2)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										burger->addQuantity();
									}
									cityplace.addOrder(burger);
									
								}
								else if(foodOption == 3)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										hotdog->addQuantity();
									}
									cityplace.addOrder(hotdog);
								}
								else if(foodOption == 4)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										nachoes->addQuantity();
									}
									cityplace.addOrder(nachoes);
									
								}
								else if(foodOption == 5)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cheesefries->addQuantity();
									}
									cityplace.addOrder(cheesefries);
									
								}
								else if(foodOption == 6)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										fries->addQuantity();
									}
									cityplace.addOrder(fries);
									
								}
								else if(foodOption == 7)
								{
							
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornS->addQuantity();
									
									}
									cityplace.addOrder(cornS);
								}
								else if(foodOption == 8)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornM->addQuantity();		
									}
									cityplace.addOrder(cornM);
								
								}
								else if(foodOption == 9)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										cornL->addQuantity();
										
									}
									cityplace.addOrder(cornL);
									
								}
								else if(foodOption == 10)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkS->addQuantity();
									}	
									cityplace.addOrder(drinkS);
									
									
								}
								else if(foodOption == 11)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkM->addQuantity();
									}
									cityplace.addOrder(drinkM);
									
								}
								else if(foodOption == 12)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										drinkL->addQuantity();
									}
									cityplace.addOrder(drinkS);
									
								}
								else if(foodOption == 13)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										lays->addQuantity();
									}
									cityplace.addOrder(lays);
									
								}
								else if(foodOption == 14)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										salt->addQuantity();
									}
									cityplace.addOrder(salt);
									
									
								}
								else if(foodOption == 15)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										barbecue->addQuantity();
										
									}
									barbecue->addQuantity();	
									
								}
								else if(foodOption == 16)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										skittles->addQuantity();
									}
									cityplace.addOrder(skittles);
									
								}
								else if(foodOption == 17)
								{
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										sour->addQuantity();
										
									}
									
									
								}
								else if(foodOption == 18)
								{
									
									std::cout << "Do you want to increase the quantity of this order?(Enter 'y' for yes and 'n' for no)\n";
									std::cin >> add;
									if(add == 'y')
									{
										chocolate->addQuantity();
									}
									cityplace.addOrder(chocolate);
									
								}
								else
								{
									std::cout << "The order that you asked for is not on the menu.\n";
								}
								
								
								std::cout << "Would you like to add anything else to your order?(Enter 'y' for yes and 'n' for no)\n";
								std::cin >> more;
								
								if(more == 'n')
								{
									option = 15;
									break;
								}
								
							}
							break;
					
				}
				
			}
			
			
		} while(option != 15);
		
		std::cout << "******************************Your order*************************\n";
		cityplace.printOrder();
		
		std::cout << "Your total would be $" << cityplace.totalFood() << std::endl;
		if(wallet < cityplace.totalFood())
		{
			std::cout << "Sorry, you don't have enough to purchase this food.\n";
		}
		else
		{
			wallet -= cityplace.totalFood();
			std::cout << "You have $" << wallet << " left in your wallet.\n"; 
		}
	}
	else
	{
		std::cout << "The movie theater you entered is not in the program.\n";
	}
	
	return 0;
}