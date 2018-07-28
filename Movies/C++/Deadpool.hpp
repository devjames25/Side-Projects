#ifndef DEADPOOL_HPP
#define DEADPOOL_HPP
#include "Movie.hpp"
#include <string>

class Deadpool:public Movie
{
	public:
		Deadpool();
		~Deadpool();
		Deadpool(std::string, double, std::string, std::string);
		std::string getTitle(); 
		double getPrice();
		std::string getType();
		std::string getTime();

};
#endif
