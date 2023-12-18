// 1
infinite loop


// 2
Hello
Hello
Hello


// 3
In for loop
In for loop
In for loop


// 4
9 1
8 2
7 3
6 4
5 5
4 6



// 5
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, sum = 0, lastDigit;
    cout << "Enter a number : ";
    cin >> n;
    while (n != 0)
    {
        lastDigit = n % 10;
        if (lastDigit % 2 == 0)
        {
            sum += lastDigit;
        }
        n /= 10;
    }

    cout << abs(sum);
    return 0;
}



// 6
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, lastDigit, rev = 0, temp;
    cout << "Enter a number : ";
    cin >> n;
    temp = n;
    while (n != 0)
    {
        lastDigit = n % 10;
        rev = lastDigit + rev * 10;
        n /= 10;
    }

    sum = temp + rev;
    cout << sum << " [ " << temp << " + " << rev << " ]";
    return 0;
}



// 7
#include <iostream>
using namespace std;

int main()
{
    int n, fac = 1;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            fac *= j;
        }
        cout << fac << endl;
        fac = 1;
    }
    return 0;
}



// 8
#include <iostream>
using namespace std;

int main()
{
    int n, f0 = 1, f1 = 1, f2 = 0;
    cout << "Enter a number : ";
    cin >> n;

    cout << f0 << " " << f1 << " ";
    for (int i = 3; i <= n; i++)
    {
        f2 = f0 + f1;
        cout << f2 << " ";
        f0 = f1;
        f1 = f2;
    }

    return 0;
}


// 9
#include <iostream>
using namespace std;

int main()
{
    int temp, rem, sum;
    for (int i = 1; i <= 500; i++)
    {
        temp = i;
        sum = rem = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }
        if (i == sum)
            cout << i << endl;
    }

    return 0;
}