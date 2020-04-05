

#include <iostream>
using namespace std;

class zombie {
public:
    void eatpeople() {
        cout << "съел человека"<<endl;
    }


};
class dog {
public:
    void bring_ball() {

        cout << "принес мяч"<<endl;
    }
};
class zombie_dog :public zombie, public dog
{
};



int main()
{
    setlocale(LC_ALL, "ru");
    zombie_dog Vasiliy;
    Vasiliy.bring_ball();
    Vasiliy.eatpeople();
}

