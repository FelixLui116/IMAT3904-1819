// Lab01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "Hello World" << std::endl;

	int nunber;
	int playerGuess = 5;
	int playerGuessNunber;

	nunber = rand() % 100 + 1;

	while (playerGuess >0)
	{
		std::cin >> playerGuessNunber;
		playerGuess - 1;
			if (playerGuessNunber > nunber)
			{
				
				std::cout << "lower, guesses = " << playerGuess << std::endl;

			}

			if (playerGuessNunber < nunber)
			{
				playerGuess - 1;
				std::cout << "higher, gusesses = " << playerGuess << std::endl;

			}

			if (playerGuessNunber == nunber)
			{
				std::cout << "guess is correct" << std::endl;

				system("pause");
				
				
				return 0;
			}

	}
}

/*if ((playerGuess != 0))
		{
			if (playerGuessNunber > nunber)
			{
				std::cout << "lower" << std::endl;
				playerGuess - 1;
			}

			if (playerGuessNunber < nunber)
			{
				std::cout << "higher" << std::endl;
				playerGuess - 1;
			}


			if (playerGuessNunber == nunber)
			{
				std::cout << "guess is correct" << std::endl;

				system("pause");
			}
		}
		*/




		//std::cin >> playerGuessNunber;

		//std::cout << "" << std::endl;



		//system("pause");