#include <iostream>

using namespace std;

int main()
{
	char mark;
	int count, b_count, m_paint;

	
	cout << "Input your mark : ";
	cin >> mark;
	while (1)
	{
		cout << "Input N : ";
		cin >> count;
		if (count >= 3 && count <= 11 && count % 2 == 1)//'Count' have to be odd number in range from 3 to 11.
			break;
		else
			cout << "Please input a correct number!" << endl;
	}
	cout << "Output : " << endl;

	//Dividing three part of star.

	for (int _count = 1;_count <= count;_count++)//Count the star of the side mark number.
	{
		for (b_count = 0; b_count< 40 - _count;b_count++)//To place the star in the middle of cmd, we use the 80 blanks that exist in cmd of a row.
		{
			cout << " ";
		}
		for (m_paint = 0;m_paint < 2 * _count - 1;m_paint++)//Fill the mark.
		{
			cout << mark;
		}
		cout << endl;
	}

	for (int _count = 1;_count <= count;_count++)
	{
		for (int j = 0;j < b_count - count + (_count - 1);j++)//Fill the blank.
		{
			cout << " ";
		}
		for (int k = 0;k < m_paint + 2 * count - 2 * (_count - 1);k++)//Fill the mark.
		{
			cout << mark;
		}
		cout << endl;

	}

	for (int _count = 1;_count <= count;_count++)
	{
		for (int j = 0;j < b_count - 1;j++)//Fill the blank.
		{
			cout << " ";
		}
		for (int j = 0;j < count - (_count - 1);j++)//Fill the mark.
		{
			cout << mark;
		}
		for (int j = 0;j < 2 * (_count - 1) + 1;j++)//Fill the blank.
		{
			cout << " ";
		}
		for (int j = 0;j < count - (_count - 1);j++)//Fill the mark.
		{
			cout << mark;
		}
		cout << endl;

	}
	return 0;
}

