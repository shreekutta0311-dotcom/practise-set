/*Find the sum of the first N natural numbers (input N) using a for
loop.*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n :"<<endl;
cin>>n;
int sum;
for (int i = 0; i <=n; i++)
{
    sum=n*(n+1)/2;
}

cout<<"the sum of of the natural numbers is:"<<sum<<endl;

return 0;


}