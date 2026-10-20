#include <iostream>
using namespace std;

int main()
{
    int table[10];

    // Make all slots empty
    for (int i = 0; i < 10; i++)
        table[i] = -1;

    int n;
    cout << "Enter number of vehicles: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;
        cout << "Enter vehicle number: ";
        cin >> number;

        int slot = number % 10;
        int start = slot;

        // Find empty slot
        while (table[slot] != -1)
        {
            slot = (slot + 1) % 10;

            // Table is full
            if (slot == start)
            {
                cout << "Parking lot is full!" << endl;
                break;
            }
        }

        if (table[slot] == -1)
            table[slot] = number;
    }

    // Print parking lot
    cout << "\nFinal Parking Slots:\n";

    for (int i = 0; i < 10; i++)
    {
        cout << "Slot " << i << ": ";

        if (table[i] == -1)
            cout << "Empty";
        else
            cout << table[i];

        cout << endl;
    }

    return 0;
}
