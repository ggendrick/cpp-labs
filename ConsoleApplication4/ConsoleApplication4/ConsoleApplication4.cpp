

#include <iostream>
using namespace std;

int one(double y)
{
	y = y * 1.8 + 32;
	return y;
}




int main()
{
	double x;
	cout << "Please enter a Celsius value: ";
	cin >> x;
	cout<<x<<"degres Celsius is " <<one(x)<<" Fahrenheit";

}

