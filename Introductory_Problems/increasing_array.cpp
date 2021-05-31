#include <iostream>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    long int arr[n];
    long int moves = 0;
    for (int i = 0; i != n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 1; i != n; ++i)
    {
        if (arr[i - 1] > arr[i])
        {
            moves += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }
    cout << moves;
    return 0;
}