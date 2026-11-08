#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    for(i = 0; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    cout << "After deletion: ";
    for(i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}