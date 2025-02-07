#include<iostream>
using namespace std;

class odd
{
public:
    void check()
    {
        int x;
        cin>>x;

        for(int i = 1; i<=x; i=i+2)
        {
            cout<<i<<endl;
        }
    }
};
int main()
{
    odd obj;
    obj.check();

    return 0;
}

