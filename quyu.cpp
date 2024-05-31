#include <bits/stdc++.h>
using namespace std;
int main()
{
    double d=1.6666667;
    d=(int)(d*1000+d/fabs(d)*-.5);
    cout<<d;
}