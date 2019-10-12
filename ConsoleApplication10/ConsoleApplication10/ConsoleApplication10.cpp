

#include "stdafx.h"
#include <iostream>
using namespace std;

struct candybar {

	char name[20];
	double weight;
	int energy;
};

int main()
{
	int i;

	const int N = 3;

	candybar snack[N];

	for (i = 0; i < N;i++)
	{
		cin>>snack[i].name;
		cin >> snack[i].weight >> snack[i].energy;
		cout << i;

	}

	for (i = 0; i < N; i++)
	{
		cout << "Proizvoditel: " << (snack[i].name) << " Weight: " << snack[i].weight << " energy: " << snack[i].energy << endl;

		

	}



	


}


