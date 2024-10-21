#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int random = rand() % 100, guess;
    int x, c = 5;
    cout << "Enter 1 if you want to play or 0 if do not: ";
    cin >> x;
    if (x == 0 || x == 1)
    {
        cout << "You have total " << c << " chances\n";
        for (; x != 0;)
        {
            cout << "Enter your guessed number: ";
            cin >> guess;
            if (guess < random)
            {
                cout << "Too low\n";
                c--;
                if (c == 0)
                {
                    cout << "You reached the limit " << c << " chances left.\n";
                    break;
                }
                cout << c << " Chances left\n";
            }
            else if (guess > random)
            {
                cout << "Too High\n";
                c--;
                if (c == 0)
                {
                    cout << "You reached the limit " << c << " chances left.\n";
                    break;
                }
                cout << c << " Chances left\n";
            }
            else
            {
                cout << "Congratulations you won.";
                break;
            }
        }
    }
    else
        cout << "Invalid input";
    return 0;
}