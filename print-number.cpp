#include<iostream>
using namespace std;

class even
{
public:
    void check()
    {
        int x;
        cin>>x;
        for(int i=1; i<=x;i++)
        {
           cout<<i<<endl;
        }

    }
};
int main()
{
    even obj;
    obj.check();

    return 0;
}


