#include <iostream>
using namespace std;
#define n 4 //размер массива
int point1( int arr[n][n])
{
	int k1 = 0,i,j;
	bool zero = false;
		for (i = 0; i < n; i++)//point 1

		{
			for (j = 0; j < n; j++)
			{
				if (arr[i][j] == 0) 
				{
					zero = true;
				}

			}
			if (zero == true) 
			{
				k1++;
				zero = false;
			}
		}
		return k1;

}
int point2(int arr[n][n])
{
	int i, j, max1 = 0, max2 = 0, ns = 0, temp, max3 = 0;
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
	return ++ns;



}


int main()
{
	setlocale(LC_ALL, "Ru");
	bool zero = false;
	int  i, j;
	int arr[n][n];
	cout << "введите матрицу" << endl;

	for (i = 0; i < n; i++)//считывание массива
	{
		for (j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "количество строк содержащих 0: " << point1(arr) << endl;
	cout << "максимально длинная серия элементов в строке:  " << point2(arr) << endl;

}


