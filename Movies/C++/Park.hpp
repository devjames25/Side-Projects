#ifndef PARK_HPP
#define PARK_HPP
#include "Movie.hpp"
#include <string>

class Park:public Movie
{
	public:
		Park();
		~Park();
		Park(std::string, double, std::string, std::string);
		std::string getTitle(); 
		double getPrice();
		std::string getType();
		std::string getTime();
	
};
#endif
