#include <iostream>
using namespace std;

int main() {
        int batas;
    cout << "Masukan angka: ";
    cin >> batas;

    cout << endl;
    
    for (int i = batas; i > 0; i=i-2) {
        {
            for(int j = i; j >= 1; --j)
        {
            if(j % 2 != 0)
            cout << j << " ";
        }
        cout << endl;
        }
    }

    return 0;
}