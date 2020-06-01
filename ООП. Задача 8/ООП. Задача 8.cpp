
#include <iostream>
using namespace std;

class Wehicle
{
public:
    virtual void moove() = 0;

};
class terrstiral : public Wehicle
{
    void moove() override
    {
        cout << "drive";
    }
};
class water : public Wehicle
{
    void moove() override
    {
        cout << "sail";
    }
};

class air : public Wehicle
{
    void moove() override
    {
        cout << "fly";
    }
};
class pilot
{   public:
    void moove(Wehicle *wehicle)
    {
        wehicle->moove();

    }


};
int main()
{
    terrstiral car;
    pilot human;
    human.moove(&car);
}

