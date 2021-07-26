#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
    int x;
    while (cin >> x ){
        if(x < 100){
            cout << x << endl;
        }else{
            break;
        }
    }
    return 0;
}