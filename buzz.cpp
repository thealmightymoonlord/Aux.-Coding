#include <iostream>
#include <string>

using namespace std;

int main() {
    for(int i = 1; i <= 30 ; i++){
        if(((i % 10) + (i / 10) % 10) % 3 == 0)
        cout << i << " " << "buzz" << endl;
        else{
            cout << i << endl;
        }
    
    }

    return 0;
}