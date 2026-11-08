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

    n--;

    cout << "After deletion: ";
    for(i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}