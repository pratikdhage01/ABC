#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    int total=0;
    for(int i=0;i<5;i++)
    {
    cout<<"ENter Marks Of Subject "<< i+1<< " ";
    cin>>marks[i];
    total = total+marks[i];
    }
    float per = total/500.0*100.0;
    cout<<" Your Total Marks is : "<<total<<endl;
    cout<<" Your percentage is : "<<per<<endl;
    if(per==100.0)
    cout<<"GOLD MEDALIST";
    else if (per>75)
    cout<<"Distinction";
    else if(per>60)
    cout<<"First Class";
    else if(per>45)
    cout<<"Second Class";
    else
    cout<<"Fail !";
    return 0;
}