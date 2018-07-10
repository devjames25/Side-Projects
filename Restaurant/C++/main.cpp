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
	food = chicken;
	pollo.addToOrder(food);
	food = NULL;
	
	food = icetea;
	pollo.addToOrder(food);
	food = NULL;
	
	food = potatoe;
	pollo.addToOrder(food);
	food = NULL;
	
	food = flan;
	pollo.addToOrder(food);
	
	std::cout << "*************Your order*******************\n";
	pollo.printOrder();
	
	std::cout << "Your order totals to $" << pollo.sumOrder() << std::endl;
	
	pollo.clearOrder();
	
	delete food;
	return 0;
}
