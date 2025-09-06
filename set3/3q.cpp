/*3. Print the multiplication table of a given number using a do-while loop.*/
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"enter the number for the desired the multiplication table:";
    cin>>n;
    do{
        cout<<n<< " x "<<i<< "=" <<n*i<<endl;
        i++;

    }
    while(i <=20);

    
   
 return 0;
}
