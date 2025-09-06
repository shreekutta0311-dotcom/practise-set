/*5. Write a program to find the factorial of a number using a while loop.*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n:";
cin>>n;
int fact=1;
int i=1;
while (i <=n)
{
    fact*=i;
    i++;
}

cout<<"the factorail of the entrened number is:"<<fact;

return 0;

}