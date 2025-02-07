#include<iostream>
using namespace std;

class EvenOdd
{
public:
    void check();
};
void EvenOdd::check()
{
    int x;
    cin>>x;
    if(x%2==0)
    {
        cout<<"Even"<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }
}
int main()
{
    EvenOdd obj;
    obj.check();

    return 0;
}
