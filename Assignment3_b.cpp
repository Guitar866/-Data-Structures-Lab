#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter array size: ";
    cin >> n;

    int a[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1, mid;
    int found = 0;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            found = 1;
            break;
        }
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if(found)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
