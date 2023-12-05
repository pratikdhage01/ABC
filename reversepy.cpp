#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows you want in reverse pyramid : ";
    cin>>n;
    for(int i=n;i>0;i--)
    {
        for (int j=0;j<i;j++)
        cout<<"*";
        cout<<"\n";
    }
    return 0;
}