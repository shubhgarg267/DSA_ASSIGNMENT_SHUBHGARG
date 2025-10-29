#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout << "Enter number of elements (n): ";
    cin >> n;
    cout << "Enter upper limit (m): ";
    cin >> m;
    // Ensure m > n
    if (m <= n) {
        cout << "Error: m must be greater than n." << endl;
        return 0;
    }
    int arr[100];
    cout << "Enter " << n << " sorted elements (in range 0 to " << m - 1 << "):\n";
    for (int i = 0; i < n; i++)
    {
        while (true)
        {
            cin >> arr[i];
            if (arr[i] >= 0 && arr[i] < m)
                break; // valid input
            else
                cout << "Invalid input! Element must be between 0 and " << m - 1 << ". Re-enter: ";
        }
    }
    int missing = -1;
    int j = 0;
    // Find smallest missing number
    for (int i = 0; i < m; i++)
    {
        if (j < n && arr[j] == i)
            j++;
        else
        {
            missing = i;
            break;
        }
    }
    if (missing == -1)
        cout << "All numbers from 0 to " << m - 1 << " are present!" << endl;
    else
        cout << "Smallest missing number: " << missing << endl;
    return 0;
}
