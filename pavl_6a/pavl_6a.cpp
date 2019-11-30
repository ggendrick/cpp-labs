#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	bool zero = false;
	int n, k1 = 0, i, j, max1 = 0, max2 = 0, ns = 0, temp, max3 = 0;
	cin >> n;
	int** arr = new int* [n]; //массив указателей
	for (i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}


	for (i = 0; i < n; i++)//point 1

	{
		for (j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				zero = true;
			}

		}
		if (zero == true) {
			k1++;
			zero = false;
		}
	}

	cout << "количество строк содержащих 0: " << k1 << endl;

	for (j = 0; j < n; j++)//point 2
	{
		temp = arr[0][j];
		for (i = 1; i < n; i++)
		{
			if (arr[i][j] = temp)
			{
				max1++;
			}
			else if (max1 > max2)

			{
				max2 = max1; max1 = 0;
			}
			else { max1 = 0; }
			temp = arr[i][j];
		}
		if (max2 > max3) {
			max3 = max2;
			ns = j;
		}

	}

	cout << "максимально длинная серия элементов в строке:  " << ns << endl;





	for (i = 0; i < n; i++) //delete 
	{
		delete[]arr[i];
	}

	delete[]arr;

}
