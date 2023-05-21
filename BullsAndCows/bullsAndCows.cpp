#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstVar, secondVar;
	int countCows = 0, countBulls = 0;

	cout << "This game is called \"Bulls and cows\". " << endl;
	cout << "To exit from game, enter the X. " << endl << endl;

	while (true)
	{
		countCows = 0;
		countBulls = 0;

		cout << "Enter the first number: ";
		cin >> firstVar;

		if (firstVar[0] == 'X' || firstVar[0] == 'x') break;

		if (firstVar.length() != 4)
		{
			cout << "Error! " << " You should have enter four number and without -. Try again! " << endl;
			cout << "To exit from game, enter the X. " << endl;
			continue;
		}
		else
		{
			for (int i = 0; i < firstVar.length(); i++)
			{
				if (firstVar[i] < '0' || firstVar[i] > '9')
				{
					cout << "Error! " << " You should have enter four number and without -. Try again! " << endl;
					cout << "To exit from game, enter the X. " << endl;
					continue;
				}
			}
		}

		cout << "Enter the second number: ";
		cin >> secondVar;

		if (secondVar[0] == 'X' || secondVar[0] == 'x') break;

		if (secondVar.length() != 4)
		{
			cout << "Error! " << " You should have enter four number and without -. Try again! " << endl;
			cout << "To exit from game, enter the X. " << endl;
			continue;
		}
		else
		{
			for (int i = 0; i < secondVar.length(); i++)
			{
				if (secondVar[i] < '0' || secondVar[i] > '9')
				{
					cout << "Error! " << " You should have enter four number. Try again! " << endl;
					cout << "To exit from game, enter the X. " << endl;
					continue;
				}
			}
		}

		for (int i = 0; i < firstVar.length(); i++)
		{
			for (int j = 0; j < secondVar.length(); j++)
			{
				if (firstVar[i] == secondVar[i])
				{
					countBulls++;
					break;
				}
				else if (firstVar[i] == secondVar[j] && secondVar[j] != firstVar[j])
				{
					countCows++;
					for (int k = 0; k < i; k++)
					{
						if (firstVar[k] == firstVar[i] && secondVar[k] != firstVar[k])
						{
							countCows--;
							break;
						}
					}
					break;
				}
			}
		}

		cout << "Bulls: " << countBulls << "\tCows: " << countCows << endl;
	}

	return 0;
}