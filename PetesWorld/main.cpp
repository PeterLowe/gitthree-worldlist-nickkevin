// program to find countries in Pete's World
// date 8th November 2024
// author Pete Lowe
// + Kevin Michael (c00313609)
// + Nicholas McDonald (C00308788)
// estimated time 120 minutes
// actual time ??
// version 2.0  (Updated Name)


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to B or Y to Z" << std::endl; // change this line each iteration

	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}

	}
	if (letter == 'b' || letter == 'B')
	{
		if (region == 1)
		{
			std::cout << "Bahamas, Barbados, Belize, Brazil, Bermuda, Bolivia" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belarus, Boznia and Herzegovnia, Belgium, Bulgaria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bhutan, Bangladesh, Brunei Darusslam, Bahrain" << std::endl;

		}
		if (region == 5)
		{
			std::cout << "There are no other B countries in the rest of the world" << std::endl;
		}
	}

	if (letter == 'y' || letter == 'Y') // Written by Kevin
	{
		if (region == 1)
		{
			std::cout << "There are no Ys in the Americas." << std::endl;
		}
		else if (region == 2)
		{
			std::cout << "There are no Ys in Europe." << std::endl;
		}
		else if (region == 3)
		{
			std::cout << "There are no Ys in Africa." << std::endl;
		}
		else if (region == 4)
		{
			std::cout << "There are no Ys in Asia." << std::endl;
		}
		else if (region == 5)
		{
			std::cout << "Yemen" << std::endl;
		}
	}

	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	
	
	
	return 1;
}