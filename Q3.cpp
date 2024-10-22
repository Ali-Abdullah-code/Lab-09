#include<iostream>
using namespace std;
int main()
{
    int num,c;
    for(c = 1; c <= 5; c++)
    {
        cout << "Enter a number: ";
        cin >> num;
        if(num < 0)
            break;
        if(num % 2 == 0)
            cout <<num<< " is even.\n";
        else
            cout <<num<< " is odd.\n";
    }
}