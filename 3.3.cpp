//use of bad_alloc exception
#include<bits/stdc++.h>
using namespace std;

class sample
{
    int a;
    char b;
public:
    void set(int i, char c)
    {
        a = i;
        b = c;
    }
    void display()
    {
        cout<<"Data1 = "<<a<<endl;
        cout<<"Data2 = "<<b<<endl;
    }
};
int main()
{
    sample *s_ptr;
    try
    {
        s_ptr = new sample;
    }
    catch(bad_alloc ba)
    {
        cout<<"Bad allocation occured..the program will terminate now.."<<endl;
        return 1;
    }

    s_ptr->set(25,'A');
    s_ptr->display();

    delete s_ptr;
}
