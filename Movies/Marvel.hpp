#ifndef MARVEL_HPP
#define MARVEL_HPP
#include "Movie.hpp"
#include <string>

class Marvel:public Movie
{
	public:
		Marvel();
		~Marvel();
		Marvel(std::string, double, std::string, std::string);
		std::string getTitle(); 
		double getPrice();
		std::string getType();
		std::string getTime();
	
};
#endif
