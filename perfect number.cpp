#include <bits/stdc++.h>
using namespace std;

class P
{
public:
    void divisior()
    {
        int n;
        cin>>n;

        int sum = 1;

        for( int i = 2; i<=sqrt(n); i++)
        {
            if(n%i == 0)
                sum = sum+i+n/i;
        }
        if(sum==n)
        {
            cout<< n << " is s perfect number"<<endl;
        }
        else{
            cout<< n <<" is not a perfect number"<<endl;
        }
    }

};
int main()
{
    P o; o.divisior();


    return 0;
}
