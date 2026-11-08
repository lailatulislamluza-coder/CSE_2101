#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, pos, value;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter position: ";
    cin >> pos;

    cout << "Enter value: ";
    cin >> value;

    for(i = n; i >= pos; i--)
    {
        a[i] = a[i-1];
    }

    a[pos-1] = value;
    n++;

    cout << "After insertion: ";

    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}