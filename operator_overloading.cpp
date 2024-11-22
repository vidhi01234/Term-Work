#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<"+("<<b<<"i)"<<endl;
    }
    complex(){}

    complex operator+(complex &o)
    {
        complex temp;
        temp.a=a+o.a;
        temp.b=b+o.b;
        return temp;
    }
     complex operator-(complex &o)
    {
        complex temp;
        temp.a=a-o.a;
        temp.b=b-o.b;
        return temp;
    }

};
int main()
{
    complex c1(5,6),c2(3,19),c3,c4;
    c3=c1+c2;
    c4=c1-c2;
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    return 0;
}
