// Greetings masses !
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Prime number definition: 
// a number is prime if it can be divided by itself
// or by the number 1 without any remainder ! (The result of the division is 1)

bool check_prime(int number, vector<int> primes)
{
	bool is_prime = {true};

	for (size_t i = 0; i < primes.size(); ++i)
	{
		// PRIME NUMBER LOGIC
		// The if clause condition checks if the division of the number
		// by a smaller prime number gives a remainder equal to zero!
		// If this is not the case then the number is prime because
		// it is not divisble by the smaller prime number without remainder.
		// If there is no remainder (the if condition evaluates to true)
		// then the number is NOT prime because it can be divided by another smaller
		// prime number. :-)
		if (number % primes[i] == 0)
		{
			is_prime = false;
		}
		else
		{

		}
	}
	return is_prime;
}


int main(void)
{
	vector<int> primes;
	primes.push_back(2);

	int max = 10000;
	cout << "hello" << endl;

	// Wee start at number three because we already have two in our primes list.
	for (int i = 3; i <= max; ++i)
	{
		if (check_prime(i, primes) == true)
		{
			primes.push_back(i);
		}
	}

	cout << "The prime numbers in the primes vector are: " << endl;
	for (size_t i = 0; i < primes.size(); i++)
	{
		cout << primes[i] << endl;
	}

	return 0;
}
