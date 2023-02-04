#include<iostream>
using namespace std;
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {   cout<<"1s  not prime";
            break;
        }
        else
        {
            cout<<"the pprime number"<<endl;
            break;
        }
    }
    return 0;

}
int main()
{
    int a;
    cout<<"enter the number whose prime cycle you want to find"<<endl;
    cin>>a;
    int result;
   result= prime(a);
    return 0;
}