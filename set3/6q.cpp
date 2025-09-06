/*Print the digits of a number in reverse order using a do-while loop.*/
#include<iostream>
using namespace std;
int main(){
   
int n;
cout<<"enter n :"<<endl;
cin>>n;
do{
    int digit;
    digit=n%10;
    cout<<digit;
    n=n/10;

}
while (n>0);
return 0;
}