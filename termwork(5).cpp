#include<iostream>
using namespace std;

class student
{
    int marks[5];
public:
    void getmarks()
    {
        int i;
        cout<<"Enter marks in 5 subjects: ";
        for(i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    int calculate()
    {
        int i,total=0;
        for(i=0;i<5;i++)
        {
            total+=marks[i];
        }
        return total;
    }
};
int main()
{
    student ob[10];
    int i,n,anna=0,temp=0,c=0;
    cout<<"Enter total no of student: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter marks of student"<<i+1<<endl;
        ob[i].getmarks();
    }
    anna=ob[0].calculate();
    for(i=1;i<n;i++)
    {
        temp=ob[i].calculate();
        if(temp>anna)
        {
            c++;
        }
    }
    cout<<"student score greater than anna is: "<<c<<endl;
    return 0;
}
