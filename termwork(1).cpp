#include<iostream>
using namespace std;
int main()
{
    string name;
    int units,n,i;
    float prize;
    cout<<"Enter number of records:";
    cin>>n;
    cin.ignore();
    for(i=0;i<n;i++)
    {
        prize=0;
        cout<<"\nEnter name:";
        getline(cin,name);
        cout<<"Enter units:";
        cin>>units;
        if(units<=100)
        {
            prize=units*0.6;
        }
        else if(101<=units && units<=300)
        {
            prize=(100*0.6)+(units-100)*0.8;
        }
        else
        {
            prize=(100*0.6)+(200*0.8)+(units-300)*0.9;
        }
        if(prize<50)
        {
             prize=50;
        }
        else if(prize>300)
        {
            prize=prize+(0.15*prize);
        }
        cout<<"Name and total bill of coustmor is :"<<name<<" "<<prize;
        cin.ignore();
    }
    return 0;
}

