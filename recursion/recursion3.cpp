#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int sum(int n){        //sum of numbers
    if (n == 1) return 1;
    return n + sum(n -1);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}