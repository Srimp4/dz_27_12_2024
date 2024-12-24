#include <iostream>
using namespace std;
int main()
{
	long double USD, euro, yuan, yen, ruble;
	char choise;
	double comission;
	std::cout << "enter the amount of *insert Eugene Crabs voice here* money you have (in rubles)\n";
	std::cin >> ruble;
	while (true)
	{
		std::cout << "pick the currency\nU (USD)\ne (euro)\nu (yuan)\ny (yen)\n";
		std::cin >> choise;
		if (choise == 'U')
		{
			USD = ((ruble / 99.42) * 100) / 5;
			comission = ruble / 5;
			std::cout << "cool, you can convert it in\n" << USD << " U.S. dollars\n";
			std::cout << "(we take " << comission << " (5%) (from your initial money) 'cause we like *insert Eugene Crabs voice here* MONEY)\n";
		}
		else if (choise == 'e')
		{
			euro = ((ruble / 106.3) * 100) / 5;\
				comission = ruble / 5;
			std::cout << "cool, you can convert it in\n" << euro << " euro\n";
			std::cout << "(we take " << comission << " (5%) (from your initial money) 'cause we like *insert Eugene Crabs voice here* MONEY)\n";
		}
		else if (choise == 'u')
		{
			yuan = ((ruble / 13.6) * 100) / 5;
			comission = ruble / 5;
			std::cout << "cool, you can convert it in\n" << yuan << " yuan\n";
			std::cout << "(we take " << comission << " (5%) (from your initial money) 'cause we like *insert Eugene Crabs voice here* MONEY)\n";
		}
		else if (choise == 'y')
		{
			yen = ((ruble / 0.662898) * 100) / 5;
			comission = ruble / 5;
			std::cout << "cool, you can convert it in\n" << yen << " yen\n";
			std::cout << "(we take " << comission << " (5%) (from your initial money) 'cause we like *insert Eugene Crabs voice here* MONEY)\n";
		}
		else
		{
			std::cout << "u stoopid\n";
		}
		cout << "if you wanna continue input 1, if not input whatever, i'm a line of code and can't realy make you do somthing\n";
		int choise2;
		std::cin >> choise2;
		if (choise2 == 1)
		{
			continue;
		}
		else
		{
			break;
		}
	}
	return 0;
}
