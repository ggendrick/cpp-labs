#include <string>
#include <iostream>
using namespace std;
class taxi_station {
public:
    void getstat() {
        for (int i = 0; i < LENGTH; i++) {
            cout << mobilcars[i].getstat() << endl;
        }
    }
private:
    class stat {

    private:
        int fuel, number;
        bool engine, brakes, transmission;
    public:
        stat(int number, bool engine, bool brakes, bool transmission, int fuel) {
            this->number = number;
            this->engine = engine;
            this->brakes = brakes;
            this->transmission = transmission;
            this->fuel = fuel;
        }

        string getstat() {
            string stattemp = to_string(number) + " ";
            if (!engine) { stattemp += "check engine,\t"; }
            if (!brakes) { stattemp += "brake system error,\t"; }
            if (!transmission) { stattemp += "transmission error,\t"; }
            if (fuel < 10) { stattemp += "low fuel,\t"; }
            return stattemp;
        }

    };
    static const int LENGTH = 5;
    stat mobilcars[LENGTH]{
        stat(1,true,true,true,9),
        stat(2,true,false,true,100),
       stat(3,true,true,false,100),
        stat(4,false,true,true,0),
        stat(5,true,true,true,100)
    };
};

int main() {
    taxi_station mobil;
    mobil.getstat();
    return 0;
}