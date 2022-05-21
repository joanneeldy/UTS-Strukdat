#include <iostream>
using namespace std;

int main()  
{  
    int listofarray[] = {20, 15, 75, 25, 5, 4, 70};   
      
    int panjang = sizeof(listofarray)/sizeof(listofarray[0]);  
      
    cout << "Elemen dalam posisi ganjil: \n";  
    for (int i = 0; i < panjang; i = i+2) {   
        cout << listofarray[i] << "  ";   
    }   
    return 0;  
}  
