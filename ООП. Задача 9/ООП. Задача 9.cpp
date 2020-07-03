#include <iostream>
using namespace std;
class  vehicle
{
public:
    virtual void moove() { cout << "i am mooving\n"; } 
};

class car :public vehicle
{
public:
    void moove() { cout << "i ride on the ground\n"; }
};

class plane :public vehicle
{
public:
    void moove() { cout << "i am flying\n"; } 
};

class boat :public vehicle
{
public:
    void moove() { cout << "i am sailing\n"; } 
};
int main()
{
    setlocale(LC_ALL, "Ru");
    int i;
    vehicle* Array[5]; 
    vehicle* ptr;  
    int getn; 
    cout << "Выберите тип транспорта: \n";
    cout << "1 - наземный\n";
    cout << "2 - воздушный\n";
    cout << "3 - водный\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". "; 
        cin >> getn;  
        switch (getn)
        {
        case 1:
            ptr = new car; 
            break;
        case 2:
            ptr = new plane; 
            break;
        case 3:
            ptr = new boat; 
            break;
        default:
            ptr = new vehicle; 
            break;
        }

        Array[i] = ptr; 
    } 

    for (i = 0; i < 5; i++) Array[i]->moove(); 

    for (i = 0; i < 5; i++) delete Array[i]; 

 
}