#include<iostream>
#include<string>
using namespace std;
int main()
{
    int year,flag;
    cout<<"Enter the year to be checked "<<endl;
    cin>>year;
    flag = (year%400==0)?((year%4==0)?flag=1:flag=0):((year%100==0)?flag=0:flag=1);
    if (flag)
    cout<<year<<" was a leap year "<<endl;
    else
    cout<<year<<" was not a leap year "<<endl;
    return 0;
}
