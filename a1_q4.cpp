#include <iostream>
using namespace std;
int flag, counter = 2;
void chckprm(int n);
int main()
{
    int low, high;
    cin >> low;
    cin >> high;
    for (int i = low; i <= high; i++)
    {

        chckprm(i);
        if (flag == 0)
        {
            cout << i << endl;
        }
        else
        {
            continue;
        }
    }
    return 0;
}

void chckprm(int n)
{
    if (n == 2)
    {
        flag = 0;
    }
    else if (n % 2 == 0)
    {
        flag = 1; // not prime
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            int rem = n % i;

            if (rem == 0)
            {
                flag = 1; // not prime

                break;
            }
            if (counter == n - 1)
            {
                flag = 0; // prime
            }
            else
            {

                counter++;
            }
        }
    }
}
