/*Write a program to calculate the power of a number (a
b
) using a while
loop.*/
#include<iostream>
using namespace std;
int main(){
    int result=1;
    int base;
    int count;
    int expo;
    cout<<"enter the base and expo:"<<endl;
    cin>>base>>expo;
    count=expo;
    while (count>0)
    {
        result*=base;
        count--;
    }
    cout<<"the ans is:"<<result;
    return 0;
}