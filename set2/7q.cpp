#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n:";
cin>>n;
if (n==1)
{
    cout<<"is not prime";
    return 0;
}

for (int i = 2; i*i<=n; i++)
{
    if (n%i==0)
    {
       
    cout<<"is not prime";
       
    }
    
}
cout<<"it is prime";
return 0;

}