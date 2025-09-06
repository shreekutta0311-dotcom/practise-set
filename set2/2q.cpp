/*Print the first 10 even numbers using a while loop.*/
#include<iostream>
using namespace std;
int main(){
    int i;
    while (i<11)
    {
       if(i%2==0)
       {
        cout<<i<<endl;
       }
       i++;
    }
    return 0;
}