// Ask the user for a sequence of numbers until the user inputs 0 (zero)
// and then the program should print the sum of even numbers that the user input
// Example:
// Input sequence of integers (zero to stop):  -4 3 -20 10 45 100 -1 0
// The sum of even numbers is : 86
// David Tinley
// 09/13/2022

#include <iostream>

using namespace std;

int main() {

	int number_entered;
	int even_numbers_sum = 0;

	do {
		cout << "Enter a number: \n";
		cin >> number_entered;
		int even_numbers = number_entered % 2;
		if (even_numbers == 0) {
			even_numbers_sum += number_entered;
		}
	} while (number_entered != 0);

	cout << "The sum is " << even_numbers_sum << "\n";
}