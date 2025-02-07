#include<iostream>
using namespace std;

class even
{
public:
    void check()
    {
        int x;
        int even = 0;
        int odd =0;
        cin>>x;
        for(int i=1; i<=x;i++)
        {
            if(i%2==0)
            {
                even=even+i;
            }
            else
            {
               odd=odd+i;
            }
        }
        cout<<"Total even: "<<even<<" "<<endl;
        cout<<"Total odd: "<<odd<<" ";

    }
};
int main()
{
    even obj;
    obj.check();

    return 0;
}
