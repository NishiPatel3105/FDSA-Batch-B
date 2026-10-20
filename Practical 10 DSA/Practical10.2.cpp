#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> shelf[10];

    int n;
    cout << "Enter number of books: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int book;
        cout << "Enter book code: ";
        cin >> book;

        int slot = book % 10;
        shelf[slot].push_back(book);
    }

    cout << "\nFinal Shelves:\n";

    for (int i = 0; i < 10; i++)
    {
        cout << "Shelf " << i << ": ";

        for (int book : shelf[i])
            cout << book << " ";

        cout << endl;
    }

    return 0;
}
