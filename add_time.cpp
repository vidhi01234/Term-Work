#include<iostream>
using namespace std;

class time
{
    int h,m,s;
public:
    time(int hr,int min,int sec)
    {
        h=hr;
        m=min;
        s=sec;
    }
    void getdata()
    {
        cout<<"Enter hr,min,sec:";
        cin>>h>>m>>s;
    }

    void display()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }

    time add (time &ob)
    {
        time temp;
        temp.s=s+ob.s;
        temp.m=m+ob.m+temp.s/60;
        temp.h=h+ob.h+temp.m/60;
        temp.s=temp.s%60;
        temp.m=temp.m%60;
        temp.h=temp.h%24;
        return temp;
    }
    time(){}
};

int main()
{
    time t1,t2,t3;
    cout<<"Enter time 1:"<<endl;
    t1.getdata();
    cout<<"Enter time 2:"<<endl;
    t2.getdata();
    cout<<"Time 1:";
    t1.display();
    cout<<"Time 2:";
    t2.display();
    t3=t1.add(t2);
    cout<<"Total time:";
    t3.display();
    return 0;
}
