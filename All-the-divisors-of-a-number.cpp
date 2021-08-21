#include<iostream>

using namespace std;

int main()
{
	int num, divisor=1;
	cout << "Enter an integer: ";
	cin >> num;
	cout << "\nDivisors of " << num << " are : ";

	while (divisor <= num)
	{
		if (num % divisor == 0)
		{
			cout << divisor << " ";
		}
		divisor++;
	}


	return 0;
}