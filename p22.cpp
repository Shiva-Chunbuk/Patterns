// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    for(int i = 0; i < 2*n-1; i++) {
        for(int j = 0; j < 2*n-1; j++) {
            int min = i < j ? i : j;
            min = min < 2*n-1-i ? min : 2*n-1-i-1;
            min = min < 2*n-1-j-1 ? min : 2*n-1-j-1;
            cout << n-min << " ";
        }
        cout << endl;
    }
    return 0;
}

