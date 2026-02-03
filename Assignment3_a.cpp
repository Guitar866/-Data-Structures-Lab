#include <iostream>
using namespace std;

int main()
{
    int n, e;
    cout << "Enter array size: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];   
    }

    cout << "Enter element you want to search: ";
    cin >> e;

    int found = 0;

    for(int i = 0; i < n; i++)
    {
        if(e == a[i])   
        {
            found = 1;
            break;
        }
    }

    if(found)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
