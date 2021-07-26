#include <iostream>
#include <string>

using namespace std;

int main() {
    int input;
    cin >> input;
    for(int i = 2; i < input; i ++){
        if( input % i == 0 ){
            cout << "COMPOSITE" << endl;
        break;   
        }else{
            cout << "PRIME" << endl;
        break;
        }
    }

    return 0;
}