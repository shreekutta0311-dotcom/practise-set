/*Write a program that keeps asking the user for input until they enter
a negative number (do-while loop).*/
#include<iostream>
using namespace std;
int main(){
    int i=0,n=0;
   
    do{  
         int n;
        cout<<"n:";
        cin>>n;
        if (n>0)
        {
          cout<<"enter again:"; 
        }
        else{
            return 0;
        }
     
        
    }
    while (n>=0);
    return 0;
}