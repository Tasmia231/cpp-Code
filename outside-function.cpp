#include<iostream>
using namespace std;

class state
{
    public:
    string name;
    int id;
    double result;
    void printFunc();

};
void state::printFunc()
{
    cout<<"state university"<<endl;
}
int main()
{
    state obj;
    obj.printFunc();

    return 0;
}
