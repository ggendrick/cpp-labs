

#include "stdafx.h"
#include <iostream>
using namespace std;

struct candybar {

	char name[20];
	double weight;
	int energy;
};

int main(){
candybar * snack = new candybar;
	cin.getline((*snack).name, 20);
	cin >> (*snack).weight;
	cin >> (*snack).energy;




	cout << "Proizvoditel: " << (*snack).name << endl << "Weight: " << (*snack).weight << endl << "cal: " << (*snack).energy << endl;


}