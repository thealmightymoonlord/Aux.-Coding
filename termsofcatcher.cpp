#include <iostream>
using namespace std;

int main() {
    int X;
    int Y;
    cin >> X;
    cin >> Y;
    for(int i = X; i <= Y; i += 60){
        cout << "All positions change in year " << i << endl;
    }
}