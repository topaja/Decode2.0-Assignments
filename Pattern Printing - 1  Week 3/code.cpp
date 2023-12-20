// 1
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of row : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}



// 2
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of row : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}



// 3
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of row : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }
    return 0;
}



// 4
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of row : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // even line print alphabet
            if (i % 2 == 0)
            {
                cout << (char)(j + 64) << " ";
            }
            // odd line print digit
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}



// 5
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of row : ";
    cin >> n;

    // upper half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // lower half
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


// 6
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter no of row : ";
    cin >> m;
    cout << "Enter no of col : ";
    cin >> n;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == m || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}



// 7
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        // for space
        for (int j = 1; j <= n - i; ++j)
        {
            cout << " ";
        }

        // for *
        for (int j = 1; j <= n; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}



// 8
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; ++j)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}


// 9
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j)
        {
            cout << (char)(j + 64);
        }
        cout << endl;
    }
    return 0;
}



// 10
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j >= 1; --j)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}


// 11
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // upper half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    n -= 1;

    // lower half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
