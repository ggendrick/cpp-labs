

#include <iostream>
#include<string>
using namespace std;
class computer;

class user {
public:
    void check(computer& computer);

};

class computer {
public:
    computer(int capacity, int energy_consumption, string os, bool status)
    {
        this->capacity = capacity;
        this->energy_consumption = energy_consumption;
        this->os = os;
        this->status = status;
    }
    friend void user::check(computer& computer);
private:
    int capacity;
    int energy_consumption;
    string os;
    bool status;
};

int main()
{
    computer first(1500, 450, "windows", true);
    user user1;
    user1.check(first);



}
void user::check(computer& computer)
{
    cout << computer.capacity << endl;
    cout << computer.energy_consumption << endl;
    cout << computer.os << endl;

}