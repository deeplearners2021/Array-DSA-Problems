#include <iostream>
using namespace std;

int main()
{
    // Declaring Array
    int arr[15];
    // Accessing Array Values
    cout << arr[5] << endl;
    cout << arr[9] << endl; // It will print random values of its choice

    // 2nd Way
    int brr[5] = {2, 4, 5, 7, 11};
    cout << brr[4] << endl;

    // 3rd Way
    int ar[5];
    ar[0] = 21;
    ar[1] = 31;
    ar[2] = 41;
    ar[3] = 51;
    ar[4] = 61;

    for (int i = 0; i <= 4; i++)
    {
        cout << ar[i] << " ";
    }

    cout << endl;

    int crr[20] = {2, 3, 4};

    int n = 20;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    // Initialising Array with Zero
    int zero[20] = {0};
    int size = 20;
    for (int i = 0; i <= size - 1; i++)
    {
        cout << zero[i] << " ";
    }

    cout << endl;

    // Initialising Array with One
    int one[20] = {1};
    int siz = 20;
    for (int i = 0; i <= siz - 1; i++)
    {
        cout << one[i] << " ";
    }

    cout << endl;
    cout << "This was all about creation of Arrays." << endl;
    return 0;
}