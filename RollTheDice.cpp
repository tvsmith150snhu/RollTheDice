/*
Troy Smith
IT-312-J4007
2022.03.27
4-3 Final Project Building Block One: Programming (Rolling Dice)
*/

/*Roll The Dice Program

This program prompts the user to enter a number between 2 and 12.
It will then roll two dice until the sum of the dice equals the
user's number and the number of rolls it took to get that number*/

/*Challenges
It was challenging to have the program ask the user for another input
when they enter a number less than 2 or greater than 12.*/

#include <iostream>
#include<cstdlib>

using namespace std;

int main()
{//main function

	// Declare variables and assignments
	int input;
	int	firstDie;
	int secondDie;
	int	total;
	int	count = 0;

	// Construct die faces
	const int LOW = 1;
	const int HIGH = 6;
	
	// Prompt user for input
	cout << "Please enter a number between 2 to 12 : ";
	cin >> input;
		if (input < 2 || input>12) 
		{
			cout << "Please enter the number between 2 to 12 ONLY : ";
			cin >> input;
			
		}
		// Produces random roll of die
		do {//do while lop
			firstDie = rand() % (HIGH - LOW + 1) + LOW;
			secondDie = rand() % (HIGH - LOW + 1) + LOW;
			cout << "First die face shows " << firstDie << endl;
			cout << "second die face shows " << secondDie << endl;
			total = firstDie + secondDie;// The sum of the dice

			// Display the Total of both dice
			cout << "total is " << total << endl;
			count++;
		} while (total != input);
	
		// Final statement of how many rolls it took to show the user input
	cout << endl << "The number of rolls to equal your choice was " << count << endl;
	return 0;
}