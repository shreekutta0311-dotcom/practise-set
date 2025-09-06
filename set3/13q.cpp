/*Take a number as input and check if it is an Armstrong number using
a while loop.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,originalnum,remainder;
    n=0;
    int result=0;
    cout<<"enter n:"<<endl;
    cin>>n;
    originalnum=n;
    int tempnum=n;
    while (tempnum!=0)
    {
        tempnum=tempnum/10;
        ++n;
    }
    tempnum=n;
    while (tempnum!=0)
    {
    //getting last digit 
    remainder=tempnum%10;
    result=result+pow(remainder,n);//adding it to the power of the digits
    //to remove the last digits 
    tempnum=tempnum/10;
    }
    if (result==originalnum)
    {
    cout<<"it is an armstrong number"<<originalnum<<endl;
    }
    else{
        cout<<"not an armstrong number.";
    }
    return 0;
}