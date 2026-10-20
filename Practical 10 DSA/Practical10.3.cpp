#include <iostream>
using namespace std;

int main()
{
    int table[10];

    for (int i = 0; i < 10; i++)
        table[i] = -1;

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int id;
        cout << "Enter student ID: ";
        cin >> id;

        int slot = id % 10;

        // Second hash always gives 0
        int jump = 0;

        while (table[slot] != -1)
        {
            slot = (slot + jump) % 10;

            // Cannot move
            if (jump == 0)
            {
                cout << "Cannot insert " << id << endl;
                break;
            }
        }

        if (table[slot] == -1)
            table[slot] = id;
    }

    cout << "\nFinal Table:\n";

    for (int i = 0; i < 10; i++)
    {
        cout << i << ": ";

        if (table[i] == -1)
            cout << "Empty";
        else
            cout << table[i];

        cout << endl;
    }

    return 0;
}
