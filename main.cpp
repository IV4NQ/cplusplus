#include <iostream>

using namespace std;

void palindrom(string slowo) {
    int dl = slowo.length();

    for (int i = 0; i < dl; i++)
    {
        if (i < dl / 2)
        {
            if (slowo[i] != slowo[dl - i - 1])
            {
                cout << "Nie, to nie palindrom";
                break;
            }
        }
        else
        {
            cout << "Tak, to palindrom";
            break;
        }
    }
}

int main() {
    cout << "Podaj slowo:";
    string s;
    cin >> s;
    palindrom(s);

    return 0;
}
