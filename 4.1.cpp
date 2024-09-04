//inline functions
#include<bits/stdc++.h>
using namespace std;

inline float mul(float x, float y)
{
    return(x*y);
}

inline double div(double x, double y)
{
    return (x/y);
}

int main()
{
    float x = 12.345;
    float y = 9.82;

    cout<<mul(x,y)<<endl;
    cout<<div(x,y)<<endl;

    return 0;
}

