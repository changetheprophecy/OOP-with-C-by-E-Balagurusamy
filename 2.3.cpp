//use of class
#include<bits/stdc++.h>
using namespace std;
class Person
{
    char name[30];
    int age;
public:
    void getdata();
    void display();
};
void Person :: getdata()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
}
void Person :: display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

int main()
{
    Person p;
    p.getdata();
    p.display();

    return 0;
}
