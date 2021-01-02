// -----------------------------------------------------
// Assignment: 2
// Question: 2
// File name: A2Q2.cpp
// Written by: Ajwad Hossain 
// For Comp 218 Section EC/Fall 2019
// -----------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
	//Title
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "       Welcome to Chinese Zodiac Animals Program!\n";
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

	while (1)
	{
		//Waiting user input
		int date;
		cout << endl << "Please enter your born year between 1900 and 2019: ";

		// Collect chosen date
		cin >> date;                                                          
		cout << "\n";

		// If wrong date is chosen
		if (date < 1900 || date > 2031)                                       
		{
			cout << "This is a wrong input. Please try again!\n";
		}
		else 
		{
		// If correct date is chosen
			int dateType = date % 12; 
			switch (dateType)
			{
			case 0: 
				cout << "Your lucky chinese zodiac animal is Monkey.\n";
				cout << "Your personality could be smart, smart and curiosity.\n\n";
				break;
			case 1: 
				cout << "Your lucky chinese zodiac animal is Rooster.\n";
				cout << "Your personality could be observant, hardworking and courageous.\n\n";
				break;
			case 2: 
				cout << "Your lucky chinese zodiac animal is Dog.\n";
				cout << "Your personality could be lovely, honest and prudent.\n\n";
				break;
			case 3: 
				cout << "Your lucky chinese zodiac animal is Pig.\n";
				cout << "Your personality could be compassionate, generous and diligent.\n\n";
				break;
			case 4: 
				cout << "Your lucky chinese zodiac animal is Rat.\n";
				cout << "Your personality could be quick-witted, resourceful, versatile and kind.\n\n";
				break;
			case 5: 
				cout << "Your lucky chinese zodiac animal is Ox.\n";
				cout << "Your personality could be diligent, dependable, strong, determined.\n\n";
				break;
			case 6: 
				cout << "Your lucky chinese zodiac animal is Tiger.\n";
				cout <<"Your personality could be brave, confident, competitive.\n\n";
				break;
			case 7: 
				cout << "Your lucky chinese zodiac animal is Rabbit.\n";
				cout<< "Your personality could be quiet, elegant, kind, responsible.\n\n";
				break;
			case 8: 
				cout << "Your lucky chinese zodiac animal is Dragon.\n";
				cout <<"Your personality could be confident, intelligent, enthusiatic.\n\n";
				break;
			case 9: 
				cout << "Your lucky chinese zodiac animal is Snake.\n";
				cout <<"Your personality could be enigmatic, intelligent and wise.\n\n";
				break;
			case 10: 
				cout << "Your lucky chinese zodiac animal is Horse.\n";
				cout <<"Your personality could be animated, active and energetic.\n\n";
				break;
			case 11: 
				cout << "Your lucky chinese zodiac animal is Goat.\n";
				cout <<"Your personality could be calm, gentle and sympathetic.\n\n";
				break;
			}
			break;
		}
	}
	//Farewell message
	cout << "Thank you for using chinese Zodiac Animal Program!\n";

	return 0;
}