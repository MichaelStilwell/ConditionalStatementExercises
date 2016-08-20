#include <iostream>
int main()
{
	 Question1
	int y = 0;

	if (y == 0)
	{
		printf("x = 100");
	}



	system("pause");




	 question2

	int w = 100;
	int o = 50;

	if (w > o)
	{
		printf("%i", w);
	}
	else
	{
		printf("%i", o);
	}

	system("pause");



	Question4

	int choice = 1;
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		std::cout << "1";
		break;
	case 2:
		std::cout << "2 or 3";
		break;
	case 3:
		std::cout << "2 or 3";
		break;
	case 4:
		std::cout << "4";
		break;
	default:
		std::cout << "invalid";

		
	}
	system("pause");



Question 5

 0 = x; 10 = y

	int x = 0;
 y = 10;


		int biggerNum = (x > y) ? x : y;

		std::cout << biggerNum;

	system("pause");



	Question6

	int g = 5;
	int h = 10;
	int k = 15;

	if (g + h == k)
	std::cout << k;

	system("pause");

	

	

	 Question7
	int month;
	std::cin >> month;
	switch (month)
	{
	case 1:
		std::cout << "January has 31 days in the month";
		break;
	case 2:
		std::cout << "February has 29 days in the month";
		break;
	case 3:
		std::cout << "March has 31 days in the month";
		break;
	case 4:
		std::cout << "April has 30 days in the month";
		break;
	case 5:
		std::cout << "May has 31 days in the month";
		break;
	case 6:
		std::cout << "June has 30 days in the month";
		break;
	case 7:
		std::cout << "July has 31 days in the month";
		break;
	case 8:
		std::cout << "August has 31 days in month";
		break;
	case 9:
		std::cout << "September has 30 days in the month";
		break;
	case 10:
		std::cout << "October has 31 days in the month";
		break;
	case 11:
		std::cout << "November has 30 days in the month";
		break;
	case 12:
		std::cout << "December has 31 days in the month";
		break;


	}
		system("pause");



		//practice with Dylan

		/*for (int i = 0; i <= 25; i++)
		{
			printf("%i", i);
		}
		

		system("pause");*/



	/*	int health = 20;
		while (health > 0)
		{
			health--;
		}
*/




		for (int snake = 0; snake <= 10; snake++)
		{
			printf("%i", snake);
		}

		system("pause");


		int mice = 50;
		while (mice > 0)
		{
			mice--;
		}

		system("pause");

		 //EXERCISE LOOPS

		for (int one = 100; one > 0; one--)
		{
			printf("%i", one);
		}

		system("pause");

}