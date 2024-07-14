//DM::OJ
#include <bits/stdc++.h>
using namespace std;

void bubble_Sort(int a[], int n)
{

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);

                for (int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
    }
}

int main()
{
    // write your code here

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    bubble_Sort(a, n);
    // return with 0
    return 0;
}
