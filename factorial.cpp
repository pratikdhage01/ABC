#include<iostream>
using namespace std;
int factorial (int n)
{ 
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"Enter any positive integer : ";
    cin>>n;
    if(n<0)
    cout<<"Please input positive integer ";
    else
    cout<<"The factorial of "<< n <<" is : "<<factorial(n);
    return 0;
}