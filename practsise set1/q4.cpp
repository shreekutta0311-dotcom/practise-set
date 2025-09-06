#include<iostream>
using namespace std;
int main(){
int n1,n2,n3;

cout<<"enter 3 intergers:";
cin>>n1;
cin>>n2;
cin>>n3;
if (n1>n2 && n1>n3)
{
    cout<<"the first number is the greater number:" <<n1<< endl;
}
else if (n2>n1 && n2>n3)
{
    cout<<"the second number is the greater number:" <<n2<< endl;
}
else if (n1==n2 && n2==n3)
{
    cout<<"the numbers are equal.";
}
else{
    cout<<"the 3rd number " <<n3<< " is the greatest";
}

return 0;

    
}