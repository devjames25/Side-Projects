#ifndef SKY_HPP
#define SKY_HPP
#include "Movie.hpp"
#include <string>


class Sky:public Movie
{
	public:
		Sky();
		~Sky();
		Sky(std::string, double, std::string, std::string);
		std::string getTitle(); 
		double getPrice();
		std::string getType();
		std::string getTime();
	
};
#endif
