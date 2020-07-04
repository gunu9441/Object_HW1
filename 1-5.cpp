#include <iostream>

using namespace std;

int main()
{
	int age=1, H_cdl=1, N_cdl, cmp = 0, count = 1;
	while (1)
	{
		cout << "<Input>" << endl;
		cout << "Messi's age: ";
		cin >> age;
		if (age < 1 || age>100000)//Exception handling
		{
			cout << "Please input Messi's age correctly!" << endl;
			continue;
		}
		cout << "Heights of candles: ";
		break;
	}
	for (N_cdl = 1; N_cdl <= age; N_cdl++)//Input Heights of candles.
	{
		cin >> H_cdl;
		if (H_cdl < 1 || H_cdl>1000)//Exception handling
		{
			cout << "Please input Messi's Candle height correctly!" << endl;
			N_cdl--;
			continue;
		}
		if (cmp < H_cdl)//Finding the longest candle.
		{
			count = 1;
			cmp = H_cdl;
		}
		else if (cmp == H_cdl)//Counting the number of longest candle.
		{
			count++;
		}
		else
			continue;
	}
	cout << "<Output>"<<endl;
	cout << "The number of candles that Messi blows out is " << count << endl;


	return 0;
}

