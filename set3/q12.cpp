/*Use if-else with a loop: Print “Fizz” if a number is divisible by
3, “Buzz” if divisible by 5, and “FizzBuzz” if divisible by both (for
numbers 1 to 50).*/
#include<iostream>
using namespace std;
int main(){
        for (int n = 0; n < 51; n++)
    {if (n%3==0)
{
    cout<<"fizz";
}
else if (n%5==0)
{
    cout<<"buzz";
}
else if (n%3==0)
{
    cout<<"fizz";
}
else if (n%3==0 && n%5==0)
{
    cout<<"fizzbuzz";
}
else {
            cout << n << "\n";
        }
    }
    return 0;
}