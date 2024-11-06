#include <iostream>
using namespace std;


int ReadPositiveNumber()
{
	int N;
	do
	{
		cout << "Please enter a number: ";
		cin >> N;
	} while (N < 0);

	return N;
}

void ReversedDigits(int N)
{
	int i = 0;
	int Sum = 0;
	while (N > 0)
	{

		i = N % 10;
		N = N / 10;
		Sum += i;

		

	};
	cout << "Sum Of Digits is =" << Sum << endl;
}




int main()
{
	ReversedDigits(ReadPositiveNumber());

	return 0;
}