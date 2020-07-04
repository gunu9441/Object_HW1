#include <iostream>

using namespace std;

bool InsertString(char * str1, char*str2, int n)
{
	int M_cnt, S_cnt;
	for (M_cnt = 0;str1[M_cnt] != 0;M_cnt++)
	{
	}//Count Main string's alphabet numbers.

	for (S_cnt = 0;str2[S_cnt] != 0;S_cnt++)
	{
	}//Count sub string's alphabet numbers.
	if (M_cnt < n)
		return 0;
	else
	{
		for (int i = M_cnt;i >= n;i--)
		{
			str1[i + S_cnt] = str1[i];
		}//Move main string's part from n to last.
		for (int i = 0;i < S_cnt;i++)
		{
			str1[n + i] = str2[i];
		}//Input sub string's part in Mainstring.

		return 1;
	}
}
int main()
{
	char M_str[512], S_str[512];
	int n;

	while (1)
	{
		cout << "str1 : ";
		cin.getline(M_str, 512);
		cout << "str2 : ";
		cin.getline(S_str, 512);
		cout << "n : ";
		cin >> n;
		getchar();
		cout << "--------------------------------------" << endl;
		if (InsertString(M_str, S_str, n) == 0)//Exception handling(error)
		{
			cout << "Please input the correct n!" << endl << "Return to first!" << endl;
			cout << "--------------------------------------" << endl;
			continue;
		}
		else//Complete!
		{
			cout << "str1 : " << M_str << endl;
			break;
		}
	}

	return 0;
}


