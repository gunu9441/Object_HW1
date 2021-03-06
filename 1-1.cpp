#include <iostream>

using namespace std;

int main()
{
	int input, num = 1;
	int max = 0, count = 0, total = 0, min = 0;

	while (1)//Exception handling (if input number is under 1, input correct number.)
	{
		cout << "input: ";
		cin >> input;
		if (input <= 1)
		{
			cout << "Please input a correct number!" << endl;
			continue;
		}
		break;//Escape the loop if input is correct.
	}
	cout << endl;
	cout << "Collatz conjecture: ";

	max = input;
	min = input;

	while (input >= 1)
	{
		if (input % 2 == 1)//if input is odd number
		{
			if (input == 1)//if input is 1, escape the loop.
			{
				total = total + input;//Calculate total
				cout << input;
				break;
			}
			cout << input << " → ";
			total = total + input;
			input = 3 * input + 1;//Calculate input
			if (min > input)
				min = input;
			if (max < input)
				max = input;
			count++;//Count all numbers
			continue;
		}
		else//if input is even number
		{
			cout << input << " → ";
			total = total + input;//Calculate total
			input = input / 2;//Calculate input
			if (min > input)//if input is smaller than min, put input in min.
				min = input;
			if (max < input)//if input bigger than max, put input in max.
				max = input;
			count++;//Count all numbers
			continue;
		}
	}
	cout << endl << endl;

	cout << "Count:" << count << endl;
	cout << endl;
	cout << "Max: " << max << endl;
	cout << endl;
	cout << "Min: " << min << endl;
	cout << endl;
	cout << "Sum: " << total << endl;
	cout << endl;
	cout << "Average: " << total / (count + 1) << endl;//Average is equal to total divided by Count of all numbers.
	cout << endl;

	return 0;
}

