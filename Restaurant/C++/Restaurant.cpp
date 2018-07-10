#include "Restaurant.hpp"
#include <string>
#include <vector>
#include <iostream>

Restaurant::Restaurant()
{}

Restaurant::~Restaurant()
{}

Restaurant::Restaurant(std::string name)
{
	this->name = name;
	this->sum = 0;
}

std::string Restaurant::getName()
{
	return this->name;
}

void Restaurant::addDrinks(Drink* beverage)
{
	drinks.push_back(beverage);
}

void Restaurant::addMeals(Entree* main)
{
	meals.push_back(main);
}

void Restaurant::addSides(Side* extra)
{
	sides.push_back(extra);
}

void Restaurant::addDesserts(Dessert* sweet)
{
	desserts.push_back(sweet);
}

void Restaurant::addToOrder(Item* food)
{
	order.push_back(food);
}

void Restaurant::printMenu()
{
	std::cout << "***********" << getName() << " Menu********************\n";
	std::cout << "\n";
	
	std::cout << "*************Drinks*******************\n";
	for(int i = 0; i < drinks.size(); i++)
	{
		std::cout << drinks.at(i)->getName() << "   $" << drinks.at(i)->getPrice() << std::endl;
	}
	std::cout << "\n";
	
	std::cout << "*************Entrees******************\n";
	for(int i = 0; i < meals.size(); i++)
	{
		std::cout << meals.at(i)->getName() << "   $" << meals.at(i)->getPrice() << std::endl;
	}
	std::cout << "\n";
	
	std::cout << "*************Sides******************\n";
	for(int i = 0; i < sides.size(); i++)
	{
		std::cout << sides.at(i)->getName()<< "   $" << sides.at(i)->getPrice() << std::endl;
	}
	std::cout << "\n";
	
	std::cout << "*************Desserts******************\n";
	for(int i = 0; i < desserts.size(); i++)
	{
		std::cout << desserts.at(i)->getName() << "   $" << desserts.at(i)->getPrice() << std::endl;
	}
	std::cout << "\n";
}

void Restaurant::printOrder()
{
		for(int i = 0; i < order.size(); i++)
		{
			std::cout << order.at(i)->getName() << "  $" << order.at(i)->getPrice() << std::endl; 
		}
	
}

double Restaurant::sumOrder()
{
	for(int i = 0; i < order.size(); i++)
	{
		sum += order.at(i)->getPrice();
	}
	
	return sum;
}

void Restaurant::clearOrder()
{
		while(!order.empty())
		{
			order.pop_back();
		}
		
		sum = 0;
}

