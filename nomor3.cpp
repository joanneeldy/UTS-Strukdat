#include <iostream>
using namespace std;

int main()
{
    int data[12] = {10, 6, 2, 9, 15, 7, 20, 1, 5, -8, 3, 25};
    int find;
    int flag=0;
    char repeat;
    
    a:
    cout << "Search data: ";
    cin >> find;
    
    for(int i=0;i<12;i++) {
        if (data[i] == find) 
            flag=1;    
    }
    
    cout << endl;
    
    if (flag==1){
        cout << "Data is inside" << endl;
    }
    else{
        cout << "Data isn't inside" << endl;
    }
        
    cout << "\nDo you want to use this program again? Y/N" << endl;
    cin >> repeat;
    cout << endl;
    
    if(repeat == 'Y' || repeat == 'y'){
        goto a;
    }
    else{
        goto end;
    }
        
    end:
    cout << "\nThanks for using this program :)";
    
    return 0;
}