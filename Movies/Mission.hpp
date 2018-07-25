#ifndef MISSION_HPP
#define MISSION_HPP
#include "Movie.hpp"
#include <string>

class Mission:public Movie
{
	public:
		Mission();
		~Mission();
		Mission(std::string, double, std::string, std::string);
		std::string getTitle(); 
		double getPrice();
		std::string getType();
		std::string getTime();
	
};
#endif
