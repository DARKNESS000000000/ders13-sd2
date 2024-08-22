#include <iostream>
using namespace std;

int main()
{
    cout << "-------------------------------------------------1-----------------------------------------------------------\n";
    int main(); {
        const int rows = 5;
        char ch = 'A';

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < rows - i - 1; ++j) {
                cout << " ";
            }

            for (int j = 0; j <= i; ++j) {
                if (i % 2 == 0) {
                    cout << ch++;
                }
                else {
                    cout << (j + 1);
                }
            }
            cout << endl;
        }

        return 0;
    }
    cout << "\n------------------------------------------------2-----------------------------------------------------------";
}