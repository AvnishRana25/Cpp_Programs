#include <iostream>
using namespace std;
int frac(int n){        //factorial
    if (n == 1 || n == 0) return 1;
    return n * frac(n -1);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << frac(n) << endl;
    return 0;
}