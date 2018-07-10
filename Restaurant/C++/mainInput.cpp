#include "Item.hpp"
#include "Drink.hpp"
#include "Entree.hpp"
#include "Side.hpp"
#include "Dessert.hpp"
#include "Restaurant.hpp"
#include <iostream>
#include <string>


int main(int argc, char**argv)
{
	Item* food = NULL;
	Item* beverage= NULL;
	Item* extra = NULL;
	Item* sweet = NULL;
	int input;
	int add;
	char more;
	
	//Restaurant
	Restaurant pollo("Pollo Tropical");
	
	//Drinks 
	Drink* coke = new Drink("Coca-Cola", 2.19);
	Drink* sprite = new Drink("Sprite", 2.19);
	Drink* lemonade = new Drink("Lemonade", 2.19);
	Drink* water = new Drink("Water", 1.99);
	Drink* fruitpunch = new Drink("Hi-C Fruit Punch", 2.49);
	Drink* icetea = new Drink("Mango Ice Tea", 2.25);
	
	//Entrees
	Entree* chicken = new Entree("1/4 Fire Grilled Chicken",3.49);
	Entree* pork = new Entree("Mojo Roast Pork", 5.79);
	Entree* ribs = new Entree("Caribbean Ribs", 8.49);
	Entree* shrimp = new Entree("Tropical Citrus Shrimp", 3.99);
	Entree* salad = new Entree("Chicken Caesar Salad", 6.69);
	Entree* wrap = new Entree("Chicken Quesadilla Wrap", 3.19);
	Entree* sandwiches = new Entree("Chipotle Chicken Sandwich", 3.69);

	//Sides
	Side* rice = new Side("White or Brown Rice", 1.99);
	Side* beans = new Side("Black Beans", 1.99);
	Side* riceYellow = new Side("Yellow Rice & Vegetables", 1.99);
	Side* fries = new Side("Waffle Fries", 1.99);
	Side* corn = new Side("Kernel Corn", 2.49);
	Side* potatoe = new Side("Mashed Potatoes with Gravy", 2.49);
	Side* cheese = new Side("Macaroni & Cheese", 2.49);
	
	//Desserts
	Dessert* flan = new Dessert("Flan", 1.99);
	Dessert* cake = new Dessert("Guava Cheesecake", 2.69);
	Dessert* bar = new Dessert("Guava Bar", 0.99);
	
	//Adding items to drink vector
	pollo.addDrinks(coke);
	pollo.addDrinks(sprite);
	pollo.addDrinks(lemonade);
	pollo.addDrinks(water);
	pollo.addDrinks(fruitpunch);
	pollo.addDrinks(icetea);
	
	//Adding items to entree vector
	pollo.addMeals(chicken);
	pollo.addMeals(pork);
	pollo.addMeals(ribs);
	pollo.addMeals(shrimp);
	pollo.addMeals(salad);
	pollo.addMeals(wrap);
	pollo.addMeals(sandwiches);

	//Adding items to sides vector
	pollo.addSides(rice);
	pollo.addSides(beans);
	pollo.addSides(riceYellow);
	pollo.addSides(fries);
	pollo.addSides(corn);
	pollo.addSides(potatoe);
	pollo.addSides(cheese);

	//Adding items to dessert vector
	pollo.addDesserts(flan);
	pollo.addDesserts(cake);
	pollo.addDesserts(bar);
	
	//Print menu
	pollo.printMenu();
	
	//Add items to order vector 
	do
	{
		std::cout << "Welcome to " << pollo.getName() << ". What would you like to eat today?\n";
		std::cout << "Order 1: " << chicken->getName() << " $" << chicken->getPrice() << std::endl;
		std::cout << "Order 2: " << pork->getName() << " $" << pork->getPrice() << std::endl;
		std::cout << "Order 3: " << ribs->getName() << " $" << ribs->getPrice() << std::endl;
		std::cout << "Order 4: " << shrimp->getName() << " $" << shrimp->getPrice() << std::endl;
		std::cout << "Order 5: " << salad->getName() << " $" << salad->getPrice() << std::endl;
		std::cout << "Order 6: " << wrap->getName() << " $" << wrap->getPrice() << std::endl;
		std::cout << "Order 7: " << sandwiches->getName() << " $" << sandwiches->getPrice() << std::endl;
		std::cout << "(Enter number matching the order you want or press 8 if you want to ring your order up)\n";
		std::cin >> input;
		
		/*while((input < 1) || (input > 8))
		{
			std::cout << "Order doesn't exist. Please try again.";
			std::cin >> input;
		}*/
		
		if(input != 8)
		{
			switch(input)
			{
				case 1: food = chicken;
						pollo.addToOrder(food);
						food = NULL;
						std::cout << "Would you like anything else with your order?(Enter 'y' for yes and 'n' for no)\n";
						std::cin >> more;
						
						while(more == 'y')
						{
							std::cout << "Drink 1: " << coke->getName() << " $" << coke->getPrice() << std::endl;
							std::cout << "Drink 2: " << sprite->getName() << " $" << sprite->getPrice() << std::endl;
							std::cout << "Drink 3: " << lemonade->getName() << " $" << lemonade->getPrice() << std::endl;
							std::cout << "Drink 4: " << water->getName() << " $" << water->getPrice() << std::endl;
							std::cout << "Drink 5: " << fruitpunch->getName() << " $" << fruitpunch->getPrice() << std::endl;
							std::cout << "Drink 6: " << icetea->getName() << " $" << icetea->getPrice() << std::endl;
							std::cout << "Side 7: " << rice->getName() << " $" << rice->getPrice() << std::endl;
							std::cout << "Side 8: " << beans->getName() << " $" << beans->getPrice() << std::endl;
							std::cout << "Side 9: " << riceYellow->getName() << " $" << riceYellow->getPrice() << std::endl;
							std::cout << "Side 10: " << fries->getName() << " $" << fries->getPrice() << std::endl;
							std::cout << "Side 11: " << corn->getName() << " $" << corn->getPrice() << std::endl;
							std::cout << "Side 12: " << potatoe->getName() << " $" << potatoe->getPrice() << std::endl;
							std::cout << "Side 13: " << cheese->getName() << " $" << cheese->getPrice() << std::endl;
							std::cout << "Dessert 14: " << flan->getName() << " $" << flan->getPrice() << std::endl;
							std::cout << "Dessert 15: " << cake->getName() << " $" << cake->getPrice() << std::endl;
							std::cout << "Dessert 16: " << bar->getName() << " $" << bar->getName() << std::endl;
							std::cout << "(Enter number matching the order you want)\n";
							std::cin >> add;
							if(add == 1)
							{
								beverage = coke;
								pollo.addToOrder(beverage);
								beverage = NULL;
							}
							else if(add == 2)
							{
								beverage = sprite;
								pollo.addToOrder(beverage);
								beverage = NULL;
							}
							else if(add == 3)
							{
								beverage = lemonade;
								pollo.addToOrder(beverage);
								beverage = NULL;
							}
							else if(add == 4)
							{
								beverage = water;
								pollo.addToOrder(beverage);
								beverage = NULL;
							}
							else if(add == 5)
							{
								beverage = fruitpunch;
								pollo.addToOrder(beverage);
								beverage = NULL;
							}
							else if(add == 6)
							{
								beverage = icetea;
								pollo.addToOrder(beverage);
								beverage = NULL;
							}
							else if(add == 7)
							{
								extra = rice;
								pollo.addToOrder(extra);
								extra = NULL;
							}
							else if(add == 8)
							{
								extra = beans;
								pollo.addToOrder(extra);
								extra = NULL;
							}
							else if(add == 9)
							{
								extra = riceYellow;
								pollo.addToOrder(extra);
								extra = NULL;
							}
							else if(add == 10)
							{
								extra = fries;
								pollo.addToOrder(extra);
								extra = NULL;
							}
							else if(add == 11)
							{
								extra = corn;
								pollo.addToOrder(extra);
								extra = NULL;
							}
							else if(add == 12)
							{
								extra = potatoe;
								pollo.addToOrder(potatoe);
								extra = NULL;
							}
							else if(add == 13)
							{
								extra = cheese;
								pollo.addToOrder(cheese);
								extra = NULL;
							}
							else if(add == 14)
							{
								sweet = flan;
								pollo.addToOrder(sweet);
								sweet = NULL;
							}
							else if(add == 15)
							{
								sweet = cake;
								pollo.addToOrder(sweet);
								sweet = NULL;
							}
							else if(add = 16)
							{
								sweet = bar;
								pollo.addToOrder(bar);
								sweet = NULL;
							}
							else
							{
								std::cout << "We're sorry, the item you requested is not on the menu.\n";
								
							}
							
							std::cout << "Would you like to add anything else to your order?('y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							if(more == 'n')
							{
								input = 8;
								break;
							}
						}
						break;
				case 2: food = pork;
						pollo.addToOrder(pork);
						food = NULL;
						std::cout << "Would you like anything else with your order?(Enter 'y' for yes and 'n' for no)\n";
						std::cin >> more;
						
						
						while(more == 'y')
						{
							std::cout << "Drink 1: " << coke->getName() << " $" << coke->getPrice() << std::endl;
							std::cout << "Drink 2: " << sprite->getName() << " $" << sprite->getPrice() << std::endl;
							std::cout << "Drink 3: " << lemonade->getName() << " $" << lemonade->getPrice() << std::endl;
							std::cout << "Drink 4: " << water->getName() << " $" << water->getPrice() << std::endl;
							std::cout << "Drink 5: " << fruitpunch->getName() << " $" << fruitpunch->getPrice() << std::endl;
							std::cout << "Drink 6: " << icetea->getName() << " $" << icetea->getPrice() << std::endl;
							std::cout << "Side 7: " << rice->getName() << " $" << rice->getPrice() << std::endl;
							std::cout << "Side 8: " << beans->getName() << " $" << beans->getPrice() << std::endl;
							std::cout << "Side 9: " << riceYellow->getName() << " $" << riceYellow->getPrice() << std::endl;
							std::cout << "Side 10: " << fries->getName() << " $" << fries->getPrice() << std::endl;
							std::cout << "Side 11: " << corn->getName() << " $" << corn->getPrice() << std::endl;
							std::cout << "Side 12: " << potatoe->getName() << " $" << potatoe->getPrice() << std::endl;
							std::cout << "Side 13: " << cheese->getName() << " $" << cheese->getPrice() << std::endl;
							std::cout << "Dessert 14: " << flan->getName() << " $" << flan->getPrice() << std::endl;
							std::cout << "Dessert 15: " << cake->getName() << " $" << cake->getPrice() << std::endl;
							std::cout << "Dessert 16: " << bar->getName() << " $" << bar->getName() << std::endl;
							std::cout << "(Enter number matching the order you want)\n";
							std::cin >> add;
							if(add == 1)
							{
								beverage = coke;
								pollo.addToOrder(beverage);
								beverage = NULL;
							}
							else if(add == 2)
							{
								beverage = sprite;
								pollo.addToOrder(beverage);
								beverage = NULL;
							}
							else if(add == 3)
							{
								beverage = lemonade;
								pollo.addToOrder(beverage);
								beverage = NULL;

							}
							else if(add == 4)
							{
								beverage = water;
								pollo.addToOrder(beverage);
								beverage = NULL;
					
							}
							else if(add == 5)
							{
								beverage = fruitpunch;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 6)
							{
								beverage = icetea;
								pollo.addToOrder(beverage);
								beverage = NULL;
							}
							else if(add == 7)
							{
								extra = rice;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 8)
							{
								extra = beans;
								pollo.addToOrder(extra);
								extra = NULL;

							}
							else if(add == 9)
							{
								extra = riceYellow;
								pollo.addToOrder(extra);
								extra = NULL;

							}
							else if(add == 10)
							{
								extra = fries;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 11)
							{
								extra = corn;
								pollo.addToOrder(extra);
								extra = NULL;

							}
							else if(add == 12)
							{
								extra = potatoe;
								pollo.addToOrder(potatoe);
								extra = NULL;
								
							}
							else if(add == 13)
							{
								extra = cheese;
								pollo.addToOrder(cheese);
								extra = NULL;

							}
							else if(add == 14)
							{
								sweet = flan;
								pollo.addToOrder(sweet);
								sweet = NULL;

							}
							else if(add == 15)
							{
								sweet = cake;
								pollo.addToOrder(sweet);
								sweet = NULL;

							}
							else if(add = 16)
							{
								sweet = bar;
								pollo.addToOrder(bar);
								sweet = NULL;
								
							}
							else
							{
								std::cout << "We're sorry, the item you requested is not on the menu.\n";
							
							}
							
							std::cout << "Would you like to add anything else to your order?('y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							if(more == 'n')
							{
								input = 8;
								break;
							}
						}
						break;
				case 3: food = pork;
						pollo.addToOrder(food);
						food = NULL;
						std::cout << "Would you like anything else with your order?(Enter 'y' for yes and 'n' for no)\n";
						std::cin >> more;
						
						
						while(more == 'y')
						{
							std::cout << "Drink 1: " << coke->getName() << " $" << coke->getPrice() << std::endl;
							std::cout << "Drink 2: " << sprite->getName() << " $" << sprite->getPrice() << std::endl;
							std::cout << "Drink 3: " << lemonade->getName() << " $" << lemonade->getPrice() << std::endl;
							std::cout << "Drink 4: " << water->getName() << " $" << water->getPrice() << std::endl;
							std::cout << "Drink 5: " << fruitpunch->getName() << " $" << fruitpunch->getPrice() << std::endl;
							std::cout << "Drink 6: " << icetea->getName() << " $" << icetea->getPrice() << std::endl;
							std::cout << "Side 7: " << rice->getName() << " $" << rice->getPrice() << std::endl;
							std::cout << "Side 8: " << beans->getName() << " $" << beans->getPrice() << std::endl;
							std::cout << "Side 9: " << riceYellow->getName() << " $" << riceYellow->getPrice() << std::endl;
							std::cout << "Side 10: " << fries->getName() << " $" << fries->getPrice() << std::endl;
							std::cout << "Side 11: " << corn->getName() << " $" << corn->getPrice() << std::endl;
							std::cout << "Side 12: " << potatoe->getName() << " $" << potatoe->getPrice() << std::endl;
							std::cout << "Side 13: " << cheese->getName() << " $" << cheese->getPrice() << std::endl;
							std::cout << "Dessert 14: " << flan->getName() << " $" << flan->getPrice() << std::endl;
							std::cout << "Dessert 15: " << cake->getName() << " $" << cake->getPrice() << std::endl;
							std::cout << "Dessert 16: " << bar->getName() << " $" << bar->getName() << std::endl;
							std::cout << "(Enter number matching the order you want)\n";
							std::cin >> add;
							if(add == 1)
							{
								beverage = coke;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 2)
							{
								beverage = sprite;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 3)
							{
								beverage = lemonade;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 4)
							{
								beverage = water;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 5)
							{
								beverage = fruitpunch;
								pollo.addToOrder(beverage);
								beverage = NULL;
							}
							else if(add == 6)
							{
								beverage = icetea;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 7)
							{
								extra = rice;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 8)
							{
								extra = beans;
								pollo.addToOrder(extra);
								extra = NULL;
							
							}
							else if(add == 9)
							{
								extra = riceYellow;
								pollo.addToOrder(extra);
								extra = NULL;

							}
							else if(add == 10)
							{
								extra = fries;
								pollo.addToOrder(extra);
								extra = NULL;

							}
							else if(add == 11)
							{
								extra = corn;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 12)
							{
								extra = potatoe;
								pollo.addToOrder(potatoe);
								extra = NULL;
								
							}
							else if(add == 13)
							{
								extra = cheese;
								pollo.addToOrder(cheese);
								extra = NULL;

							}
							else if(add == 14)
							{
								sweet = flan;
								pollo.addToOrder(sweet);
								sweet = NULL;

							}
							else if(add == 15)
							{
								sweet = cake;
								pollo.addToOrder(sweet);
								sweet = NULL;

							}
							else if(add = 16)
							{
								sweet = bar;
								pollo.addToOrder(bar);
								sweet = NULL;

							}
							else
							{
								std::cout << "We're sorry, the item you requested is not on the menu.\n";

							}
							
							std::cout << "Would you like to add anything else to your order?('y' for yes and 'n' for no)\n";
							std::cin >> more; 
							
							if(more == 'n')
							{
								input = 8;
								break;
							}
						}
						
						break;
				case 4: food = shrimp;
						pollo.addToOrder(food);
						food = NULL;
						std::cout << "Would you like anything else with your order?(Enter 'y' for yes and 'n' for no)\n";
						std::cin >> more;
						
						while(more == 'y')
						{
							std::cout << "Drink 1: " << coke->getName() << " $" << coke->getPrice() << std::endl;
							std::cout << "Drink 2: " << sprite->getName() << " $" << sprite->getPrice() << std::endl;
							std::cout << "Drink 3: " << lemonade->getName() << " $" << lemonade->getPrice() << std::endl;
							std::cout << "Drink 4: " << water->getName() << " $" << water->getPrice() << std::endl;
							std::cout << "Drink 5: " << fruitpunch->getName() << " $" << fruitpunch->getPrice() << std::endl;
							std::cout << "Drink 6: " << icetea->getName() << " $" << icetea->getPrice() << std::endl;
							std::cout << "Side 7: " << rice->getName() << " $" << rice->getPrice() << std::endl;
							std::cout << "Side 8: " << beans->getName() << " $" << beans->getPrice() << std::endl;
							std::cout << "Side 9: " << riceYellow->getName() << " $" << riceYellow->getPrice() << std::endl;
							std::cout << "Side 10: " << fries->getName() << " $" << fries->getPrice() << std::endl;
							std::cout << "Side 11: " << corn->getName() << " $" << corn->getPrice() << std::endl;
							std::cout << "Side 12: " << potatoe->getName() << " $" << potatoe->getPrice() << std::endl;
							std::cout << "Side 13: " << cheese->getName() << " $" << cheese->getPrice() << std::endl;
							std::cout << "Dessert 14: " << flan->getName() << " $" << flan->getPrice() << std::endl;
							std::cout << "Dessert 15: " << cake->getName() << " $" << cake->getPrice() << std::endl;
							std::cout << "Dessert 16: " << bar->getName() << " $" << bar->getName() << std::endl;
							std::cout << "(Enter number matching the order you want)\n";
							std::cin >> add;
							if(add == 1)
							{
								beverage = coke;
								pollo.addToOrder(beverage);
								beverage = NULL;

							}
							else if(add == 2)
							{
								beverage = sprite;
								pollo.addToOrder(beverage);
								beverage = NULL;

							}
							else if(add == 3)
							{
								beverage = lemonade;
								pollo.addToOrder(beverage);
								beverage = NULL;
							}
							else if(add == 4)
							{
								beverage = water;
								pollo.addToOrder(beverage);
								beverage = NULL;
							}
							else if(add == 5)
							{
								beverage = fruitpunch;
								pollo.addToOrder(beverage);
								beverage = NULL;
			
							}
							else if(add == 6)
							{
								beverage = icetea;
								pollo.addToOrder(beverage);
								beverage = NULL;

							}
							else if(add == 7)
							{
								extra = rice;
								pollo.addToOrder(extra);
								extra = NULL;

							}
							else if(add == 8)
							{
								extra = beans;
								pollo.addToOrder(extra);
								extra = NULL;
							}
							else if(add == 9)
							{
								extra = riceYellow;
								pollo.addToOrder(extra);
								extra = NULL;
							}
							else if(add == 10)
							{
								extra = fries;
								pollo.addToOrder(extra);
								extra = NULL;

							}
							else if(add == 11)
							{
								extra = corn;
								pollo.addToOrder(extra);
								extra = NULL;

							}
							else if(add == 12)
							{
								extra = potatoe;
								pollo.addToOrder(potatoe);
								extra = NULL;

							}
							else if(add == 13)
							{
								extra = cheese;
								pollo.addToOrder(cheese);
								extra = NULL;

							}
							else if(add == 14)
							{
								sweet = flan;
								pollo.addToOrder(sweet);
								sweet = NULL;

							}
							else if(add == 15)
							{
								sweet = cake;
								pollo.addToOrder(sweet);
								sweet = NULL;

							}
							else if(add = 16)
							{
								sweet = bar;
								pollo.addToOrder(bar);
								sweet = NULL;
								
							}
							else
							{
								std::cout << "We're sorry, the item you requested is not on the menu.\n";

							}
							
							std::cout << "Would you like to add anything else to your order?('y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							if(more == 'n')
							{
								input = 8;
								break;
							}
						}
						break;
				case 5: food = salad;
						pollo.addToOrder(food);
						food = NULL;
						std::cout << "Would you like anything else with your order?(Enter 'y' for yes and 'n' for no)\n";
						std::cin >> more;
						
						while(more == 'y')
						{
							std::cout << "Drink 1: " << coke->getName() << " $" << coke->getPrice() << std::endl;
							std::cout << "Drink 2: " << sprite->getName() << " $" << sprite->getPrice() << std::endl;
							std::cout << "Drink 3: " << lemonade->getName() << " $" << lemonade->getPrice() << std::endl;
							std::cout << "Drink 4: " << water->getName() << " $" << water->getPrice() << std::endl;
							std::cout << "Drink 5: " << fruitpunch->getName() << " $" << fruitpunch->getPrice() << std::endl;
							std::cout << "Drink 6: " << icetea->getName() << " $" << icetea->getPrice() << std::endl;
							std::cout << "Side 7: " << rice->getName() << " $" << rice->getPrice() << std::endl;
							std::cout << "Side 8: " << beans->getName() << " $" << beans->getPrice() << std::endl;
							std::cout << "Side 9: " << riceYellow->getName() << " $" << riceYellow->getPrice() << std::endl;
							std::cout << "Side 10: " << fries->getName() << " $" << fries->getPrice() << std::endl;
							std::cout << "Side 11: " << corn->getName() << " $" << corn->getPrice() << std::endl;
							std::cout << "Side 12: " << potatoe->getName() << " $" << potatoe->getPrice() << std::endl;
							std::cout << "Side 13: " << cheese->getName() << " $" << cheese->getPrice() << std::endl;
							std::cout << "Dessert 14: " << flan->getName() << " $" << flan->getPrice() << std::endl;
							std::cout << "Dessert 15: " << cake->getName() << " $" << cake->getPrice() << std::endl;
							std::cout << "Dessert 16: " << bar->getName() << " $" << bar->getName() << std::endl;
							std::cout << "(Enter number matching the order you want)\n";
							std::cin >> add;
							if(add == 1)
							{
								beverage = coke;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 2)
							{
								beverage = sprite;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 3)
							{
								beverage = lemonade;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 4)
							{
								beverage = water;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 5)
							{
								beverage = fruitpunch;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 6)
							{
								beverage = icetea;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 7)
							{
								extra = rice;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 8)
							{
								extra = beans;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 9)
							{
								extra = riceYellow;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 10)
							{
								extra = fries;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 11)
							{
								extra = corn;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 12)
							{
								extra = potatoe;
								pollo.addToOrder(potatoe);
								extra = NULL;
							}
							else if(add == 13)
							{
								extra = cheese;
								pollo.addToOrder(cheese);
								extra = NULL;
								
							}
							else if(add == 14)
							{
								sweet = flan;
								pollo.addToOrder(sweet);
								sweet = NULL;
								
							}
							else if(add == 15)
							{
								sweet = cake;
								pollo.addToOrder(sweet);
								sweet = NULL;
								
							}
							else if(add = 16)
							{
								sweet = bar;
								pollo.addToOrder(bar);
								sweet = NULL;
								
							}
							else
							{
								std::cout << "We're sorry, the item you requested is not on the menu.\n";
							}
							
							std::cout << "Would you like to add anything else to your order?('y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							if(more == 'n')
							{
								input = 8;
								break;
							}
						}
						break;
				case 6: food = wrap;
						pollo.addToOrder(food);
						food = NULL;
						std::cout << "Would you like anything else with your order?(Enter 'y' for yes and 'n' for no)\n";
						std::cin >> more;
						
						while(more == 'y')
						{
							std::cout << "Drink 1: " << coke->getName() << " $" << coke->getPrice() << std::endl;
							std::cout << "Drink 2: " << sprite->getName() << " $" << sprite->getPrice() << std::endl;
							std::cout << "Drink 3: " << lemonade->getName() << " $" << lemonade->getPrice() << std::endl;
							std::cout << "Drink 4: " << water->getName() << " $" << water->getPrice() << std::endl;
							std::cout << "Drink 5: " << fruitpunch->getName() << " $" << fruitpunch->getPrice() << std::endl;
							std::cout << "Drink 6: " << icetea->getName() << " $" << icetea->getPrice() << std::endl;
							std::cout << "Side 7: " << rice->getName() << " $" << rice->getPrice() << std::endl;
							std::cout << "Side 8: " << beans->getName() << " $" << beans->getPrice() << std::endl;
							std::cout << "Side 9: " << riceYellow->getName() << " $" << riceYellow->getPrice() << std::endl;
							std::cout << "Side 10: " << fries->getName() << " $" << fries->getPrice() << std::endl;
							std::cout << "Side 11: " << corn->getName() << " $" << corn->getPrice() << std::endl;
							std::cout << "Side 12: " << potatoe->getName() << " $" << potatoe->getPrice() << std::endl;
							std::cout << "Side 13: " << cheese->getName() << " $" << cheese->getPrice() << std::endl;
							std::cout << "Dessert 14: " << flan->getName() << " $" << flan->getPrice() << std::endl;
							std::cout << "Dessert 15: " << cake->getName() << " $" << cake->getPrice() << std::endl;
							std::cout << "Dessert 16: " << bar->getName() << " $" << bar->getName() << std::endl;
							std::cout << "(Enter number matching the order you want)\n";
							std::cin >> add;
							if(add == 1)
							{
								beverage = coke;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
			
							}
							else if(add == 2)
							{
								beverage = sprite;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 3)
							{
								beverage = lemonade;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 4)
							{
								beverage = water;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 5)
							{
								beverage = fruitpunch;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 6)
							{
								beverage = icetea;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 7)
							{
								extra = rice;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 8)
							{
								extra = beans;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 9)
							{
								extra = riceYellow;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 10)
							{
								extra = fries;
								pollo.addToOrder(extra);
								extra = NULL;
								
								
							}
							else if(add == 11)
							{
								extra = corn;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 12)
							{
								extra = potatoe;
								pollo.addToOrder(potatoe);
								extra = NULL;
								
							}
							else if(add == 13)
							{
								extra = cheese;
								pollo.addToOrder(cheese);
								extra = NULL;
								
							}
							else if(add == 14)
							{
								sweet = flan;
								pollo.addToOrder(sweet);
								sweet = NULL;
								
							}
							else if(add == 15)
							{
								sweet = cake;
								pollo.addToOrder(sweet);
								sweet = NULL;
								
							}
							else if(add = 16)
							{
								sweet = bar;
								pollo.addToOrder(bar);
								sweet = NULL;
								
							}
							else
							{
								std::cout << "We're sorry, the item you requested is not on the menu.\n";
							}
							
							std::cout << "Would you like to add anything else to your order?('y' for yes and 'n' for no)\n";
							std::cin >> more;
							
							if(more == 'n')
							{
								input = 8;
								break;
							}
						}
						break;
				case 7: food = sandwiches;
						pollo.addToOrder(food);
						food = NULL;
						std::cout << "Would you like anything else with your order?(Enter 'y' for yes and 'n' for no)\n";
						std::cin >> more;
						
						while(more == 'y')
						{
							std::cout << "Drink 1: " << coke->getName() << " $" << coke->getPrice() << std::endl;
							std::cout << "Drink 2: " << sprite->getName() << " $" << sprite->getPrice() << std::endl;
							std::cout << "Drink 3: " << lemonade->getName() << " $" << lemonade->getPrice() << std::endl;
							std::cout << "Drink 4: " << water->getName() << " $" << water->getPrice() << std::endl;
							std::cout << "Drink 5: " << fruitpunch->getName() << " $" << fruitpunch->getPrice() << std::endl;
							std::cout << "Drink 6: " << icetea->getName() << " $" << icetea->getPrice() << std::endl;
							std::cout << "Side 7: " << rice->getName() << " $" << rice->getPrice() << std::endl;
							std::cout << "Side 8: " << beans->getName() << " $" << beans->getPrice() << std::endl;
							std::cout << "Side 9: " << riceYellow->getName() << " $" << riceYellow->getPrice() << std::endl;
							std::cout << "Side 10: " << fries->getName() << " $" << fries->getPrice() << std::endl;
							std::cout << "Side 11: " << corn->getName() << " $" << corn->getPrice() << std::endl;
							std::cout << "Side 12: " << potatoe->getName() << " $" << potatoe->getPrice() << std::endl;
							std::cout << "Side 13: " << cheese->getName() << " $" << cheese->getPrice() << std::endl;
							std::cout << "Dessert 14: " << flan->getName() << " $" << flan->getPrice() << std::endl;
							std::cout << "Dessert 15: " << cake->getName() << " $" << cake->getPrice() << std::endl;
							std::cout << "Dessert 16: " << bar->getName() << " $" << bar->getName() << std::endl;
							std::cout << "(Enter number matching the order you want)\n";
							std::cin >> add;
							if(add == 1)
							{
								beverage = coke;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 2)
							{
								beverage = sprite;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 3)
							{
								beverage = lemonade;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 4)
							{
								beverage = water;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 5)
							{
								beverage = fruitpunch;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 6)
							{
								beverage = icetea;
								pollo.addToOrder(beverage);
								beverage = NULL;
								
							}
							else if(add == 7)
							{
								extra = rice;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 8)
							{
								extra = beans;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 9)
							{
								extra = riceYellow;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 10)
							{
								extra = fries;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 11)
							{
								extra = corn;
								pollo.addToOrder(extra);
								extra = NULL;
								
							}
							else if(add == 12)
							{
								extra = potatoe;
								pollo.addToOrder(potatoe);
								extra = NULL;
								
							}
							else if(add == 13)
							{
								extra = cheese;
								pollo.addToOrder(cheese);
								extra = NULL;
								
							}
							else if(add == 14)
							{
								sweet = flan;
								pollo.addToOrder(sweet);
								sweet = NULL;
								
							}
							else if(add == 15)
							{
								sweet = cake;
								pollo.addToOrder(sweet);
								sweet = NULL;
								
							}
							else if(add = 16)
							{
								sweet = bar;
								pollo.addToOrder(bar);
								sweet = NULL;
								
							}
							else
							{
								std::cout << "We're sorry, the item you requested is not on the menu.\n";
							}
							
							std::cout << "Would you like to add anything else to your order?('y' for yes and 'n' for no)\n";
							std::cin >> more;
						}
						
						if(more == 'n')
						{
							input = 8;
							break;
						}
						break;
				
			}	
			
		}	
		
	} while(input != 8);
	
	std::cout << "*************Your order*******************\n";
	pollo.printOrder();
	
	std::cout << "Your order totals to $" << pollo.sumOrder() << std::endl;
	
	pollo.clearOrder();
	return 0;
}
