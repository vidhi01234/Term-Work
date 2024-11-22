#include<iostream>
using namespace std;
class UserTwo;
class UserOne
{
    string name,fname,mname,gender;
public:
    UserOne(string n,string fn,string mn,string gen)
    {
        name=n;
        fname=fn;
        mname=mn;
        gender=gen;
    }
    void inputinfo()
    {
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter father name: ";
        getline(cin,fname);
        cout<<"Enter mother name: ";
        getline(cin,mname);
        cout<<"Enter gender: ";
        getline(cin,gender);
    }
    UserOne(){}
    friend void compare_data(UserOne &,UserTwo &);

};
class UserTwo
{
    string name,fname,mname,gender;
public:
    UserTwo(string n,string fn,string mn,string gen)
    {
        name=n;
        fname=fn;
        mname=mn;
        gender=gen;
    }
    void inputinfo()
    {
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter father name: ";
        getline(cin,fname);
        cout<<"Enter mother name: ";
        getline(cin,mname);
        cout<<"Enter gender: ";
        getline(cin,gender);
    }
    UserTwo(){};
    friend void compare_data(UserOne &,UserTwo &);
};
void compare_data(UserOne &ob1,UserTwo &ob2)
{
    if(ob1.fname==ob2.fname && ob1.mname==ob2.mname)
    {
        cout<<"we belong the same family"<<endl;
        if(ob1.gender=="Male" && ob2.gender=="Male")
        {
            cout<<"We are brothers\n";
        }
        else if(ob1.gender=="female" && ob2.gender=="female")
        {
            cout<<"We are Sisters\n";
        }
        else
        {
            cout<<"We are brother and sister";
        }
    }
    else
    {
        cout<<"We belong to different family";
    }
}
int main ()
{
    UserOne ob1;
    UserTwo ob2;
    cout<<"Enter details for UserOne:"<<endl;;
    ob1.inputinfo();
    cout<<"Enter details for UserTwo:"<<endl;
    ob2.inputinfo();
    compare_data(ob1,ob2);
    return 0;

}
