#include<iostream>
#include<conio.h>
using namespace std;

class toolBooth
{
    unsigned int total_cars;
    double amt;
public:
    toolBooth():total_cars(0),amt(0.0){}
    void payingCar()
    {
        total_cars++;
        amt+=0.5;
    }
    void nonPayCar()
    {
        total_cars++;
    }
    void display()
    {
        cout<<"Total cars: "<<total_cars<<endl;
        cout<<"Total cash collected: "<<amt<<endl;
    }
};

int main()
{
    toolBooth ob;
    char key;
    cout<<"Press 'P' for paying cars,'N' for a non-paying car,'ESC' to exit."<<endl;
    while(true)
    {
        key=_getch();
        if(key==27)
        {
            cout<<"Exiting\n";
            ob.display();
            break;
        }
        else if (key=='P' || key=='p')
        {
            ob.payingCar();
            cout << "Paying car recorded.\n";
        }
        else if (key=='N' || key=='n')
        {
            ob.nonPayCar();
            cout << "Non-paying car recorded.\n";
        }
        else
        {
            cout << "Invalid input. Press 'P', 'N', or 'ESC'.\n";
        }
    }
    return 0;
}
