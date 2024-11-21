#include<iostream>
using namespace std;

class hotel
{
        int rno,tariff,nod;
        string name;
    public:
        void checkin()
        {
            cout<<"Enter storeroom number:";
            cin>>rno;
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter store per day charges:";
            cin>>tariff;
            cout<<"Enter no of days:";
            cin>>nod;
        }
        void checkout()
        {
            cout<<"Rno: "<<rno<<endl;
            cout<<"name: "<<name<<endl;
            cout<<"Tariff(Per day): "<<tariff<<endl;
            cout<<"Number of days: "<<nod<<endl;
            cout<<"total amount: "<<calc()<<endl;
        }
        float calc()
        {
            int amt;
            amt=nod*tariff;
            if(amt>10000)
            {
                amt=nod*tariff*1.05;
            }
            return amt;
        }
};

int main()
{
    hotel h;
    h.checkin();
    h.checkout();
    h.calc();
    return 0;
}
