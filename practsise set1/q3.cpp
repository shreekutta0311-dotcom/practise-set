#include<iostream>
using namespace std;
int main(){
int n1,n2;

cout<<"enter two intergers:";
cin>>n1;
cin>>n2;
if (n1>n2)
{
    cout<<"the first number is the greater number:" <<n1<< endl;
}
else if (n1==n2)
{
    cout<<"the numbers are equal.";
}

else{
    cout<<"the second number " <<n2<< " is the greatest";
}

return 0;

    
}