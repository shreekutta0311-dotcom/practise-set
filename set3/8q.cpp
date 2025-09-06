/*Print all odd numbers between 1 and 50 using a while loop.*/
#include<iostream>
using namespace std;
int main(){
for (int i = 1; i < 51; i++)
{
   if (i%2!=0)
   {
    cout<<i<<endl;
   }
   
}

return 0;
}