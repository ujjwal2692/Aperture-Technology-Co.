#include<iostream>
using namespace std;
int addition(int a, int b)
{
    int result =a+b;
    return result;
}

int main()
{
    int a,b;
    cout<<"give the values of A and B="<<endl;
    cin>>a>>b;
    cout<<addition(a,b);

}
