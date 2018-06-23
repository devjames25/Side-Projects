#include <iostream>
#include <fstream>
#include <string>

int main(){
	
	
	std::string line;
	std::string word;
	int wordStart;
	int wordCounter = 0;
	
	std::cout << "Enter word/phrase that you want to search for:\n";
	std::cin >> word;
	
	std::ifstream txtfile;
	txtfile.open("notepad.txt");
	if(txtfile.is_open())
	{
		while(!txtfile.eof())
		{
			getline(txtfile, line);
			if((wordStart = line.find(word, 0)) != std::string::npos)
			{
				wordCounter++;
				std::cout << "The word '" << word << "' has been found " << wordCounter << " times.\n";
			}
		}
		txtfile.close();
	}
	else
	{
		std::cout << "Could not open file.\n";
	}
	
	return 0;
}
