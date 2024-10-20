#include<iostream>
using namespace std;
int main()
{
    int bal = 5000,op,add,out;
    int x = 1;
    cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
    // cout << "Enter 1 if you want to perform an operation or 0 if you do not.";
    // cin >> x;
    for( ; x != 0; )
    {
        cout << "Enter operation you want to perform: ";
        cin >> op;
        switch(op)
        {
            case 1:
                cout << "Available balance is "<< bal<<endl;
                cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
                break;
            case 2:
                cout << "Enter money you want to deposit: ";
                cin >> add;
                bal = bal + add;
                cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
                break;
            case 3:
                cout << "Enter money you want to withdraw: ";
                cin >> out;
                bal = bal - out;
                cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
                break;
            case 4:
                x = 0;
                break;
            default:
                cout << "Invalid input"<<endl;
                cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        }
    }
}