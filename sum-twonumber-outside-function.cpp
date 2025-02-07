#include<iostream>
using namespace std;

class sum
{
public:
    void add(int a, int b);
};
void sum::add(int a, int b)
{
    int r = a+b;
    cout<<r<<endl;
}
int main()
{
    sum obj;
    obj.add(100,200);
    return 0;
}
