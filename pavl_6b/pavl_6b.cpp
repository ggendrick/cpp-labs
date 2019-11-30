#include<iostream>
#include<cstring>
using namespace std;

struct price { //только английский

	char name[20];
	char shop[20];
	int cost;
};
int main()
{
	setlocale(LC_ALL, "Ru");
	int size;
	cout << "введите размер массива: ";
	cin >> size;	
	int i, k, itemp = 0;
	char* min, tovar[20];
	price *arr = new price[size];
	price temp;
	bool find = false;
	for (i = 0; i < size; i++)
	{
		cout << "введите название товара: ";
		cin >> arr[i].name;
		cout << "введите название магазина: ";
		cin >> arr[i].shop;
		cout << "введите стоимость товара: ";
		cin >> arr[i].cost;
	}

	for (i = 0; i < size - 1; i++)		//сортировка
	{
		min = arr[i].name;
		for (k = i + 1; k < size; k++)
		{
			if (strcmp(arr[k].name, min) == -1)
			{
				min = arr[k].name;
				itemp = k;

			}
		}
		temp = arr[i];
		arr[i] = arr[itemp];
		arr[itemp] = temp;
	}

	cout << "Сортировка: " << endl;
	for (i = 0; i < size; i++)
	{
		cout << arr[i].name << endl;
		cout << arr[i].shop << endl;
		cout << arr[i].cost << endl;
	}
	cout << "введите название товара: "; //поиск товара

	cin >> tovar;
	for (i = 0; i < size; i++)
	{
		if (arr[i].name == tovar)
		{
			find = true;
			cout << "информация о товаре:" << endl;
			cout << arr[i].name << endl;
			cout << arr[i].shop << endl;
			cout << arr[i].cost << endl;
		}

	}
	if (find == false) { cout << "товар не найден"; }
}