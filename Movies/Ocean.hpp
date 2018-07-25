#ifndef OCEAN_HPP
#define OCEAN_HPP
#include "Movie.hpp"
#include <string>

class Ocean:public Movie
{
	public:
		Ocean();
		~Ocean();
		Ocean(std::string, double, std::string, std::string);
		std::string getTitle(); 
		double getPrice();
		std::string getType();
		std::string getTime();
	
	
	
};
#endif
