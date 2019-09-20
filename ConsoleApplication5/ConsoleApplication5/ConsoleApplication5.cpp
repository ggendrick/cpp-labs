
#include <iostream>
using namespace std;
int main()
{
	const int k = 12;
	int x;
	setlocale(LC_ALL, "Ru");
    cout << "введите значение в дюймах: ";
	cin >> x;
	cout << "ваш рост " << x / k << " футов, " << x % k << " дюймов\n";
}

