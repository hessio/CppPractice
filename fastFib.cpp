#include <iostream>

const int MAX = 2000;

int f[MAX] = { 0 };

int fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return (f[n] = 1);
	if (f[n])
		return f[n];

	int first_half = (n & 1) ? (n + 1) / 2 : n / 2;

	// Applying the above formula [Note value n&1 is 1 if n is odd, else 0]. 
	f[n] = (n & 1) ? (fib(first_half)*fib(first_half) + fib(first_half - 1)*fib(first_half - 1)) : (2 * fib(first_half - 1) + fib(first_half))*fib(first_half);
	return f[n];
}

int main()
{
	int n = fib(25);
	std::cout << n;

	int input = 0;
	std::cin >> input;
}