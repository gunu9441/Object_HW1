#include <iostream>

using namespace std;

int main()
{
	int input, nbr, inbr, total = 0, tmp;

	cout << "Max range value n: ";//Determine the Max range value.
	cin >> input;
	cout << endl;

	for (nbr= 2;nbr <= input;nbr++)//'nbr' is number that appear in cmd.
	{
		total = 0;
		for (inbr = 1;inbr < nbr;inbr++)//Determine the dividing number.
		{
			if (nbr%inbr == 0)//inbr is nbr's aliquot.
			{
				tmp = inbr;
				total += tmp;//total is aliquot numbers.
			}
		}
		if (total == nbr)
		{
			cout << nbr << "=";
			for (inbr = 1;inbr < nbr; inbr++)
			{
				if (nbr%inbr == 0)//Finding aliquot.
				{
					if (inbr != 1)
						cout << "+";
					cout << inbr;
				}
			}
			cout << endl;
		}
	
	}
	return 0;
}

