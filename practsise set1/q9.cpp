#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n:";
cin>>n;
int fact=1;

for (int i = 1; i <=n;++i)
{

    fact*=i;
    
}


cout<<"the factorail of the entrened number is:"<<fact;

return 0;


}