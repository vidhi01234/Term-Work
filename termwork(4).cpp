#include<iostream>
using namespace std;

class bank
{
    string name,type;
    int acc,bal;
public:
    void assign()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter account no.: ";
        cin>>acc;
        cout<<"Enter type of acc.: ";
        cin>>type;
        cout<<"Enter balance: ";
        cin>>bal;
    }
    void deposite()
    {
        int amt;
        cout<<"Enter amount to deposite:";
        cin>>amt;
        bal=bal+amt;
    }
    int withdraw()
    {
        int temp;
        cout<<"Enter amount to withdraw: ";
        cin>>temp;
        if(temp>bal)
        {
            cout<<"limit exceed";
        }
        else
        {
            bal=bal-temp;
        }
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Total amount: "<<bal<<endl;
    }
};
int main()
{
    bank ob;
    ob.assign();
    ob.deposite();
    ob.withdraw();
    ob.display();
    return 0;
}
