#ifndef THEATER_HPP
#define THEATER_HPP
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
#include <string>
#include <vector>

class Theater
{
	private:
		std::string name;
		std::string city;
		std::string state;
		double sumFilm;
		double sumFood;
		std::vector<Movie*> films;
		std::vector<Food*> menu;
		std::vector<Food*> orders;
		
	public:
		Theater();
		~Theater();
		Theater(std::string, std::string, std::string);
		std::string getName();
		std::string getCity();
		std::string getState();
		void addFilm(Movie*);
		void addMenu(Food*);
		void addOrder(Food*);
		void printFilms();
		void printMenu();
		void printOrder();
		double totalFilm();
		double totalFood();
};
#endif