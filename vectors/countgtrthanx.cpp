#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the vector : " ;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i ++){
        cout << "Enter the element at position " << i << " : ";
        cin >> v[i];
    }

    cout << "The vector is : ";
    for ( int ele:v ){
        cout << ele << " ";
    }

    cout << endl;
    
    int z;
    cout << "Enter the element to refer to  : " ;
    cin >> z;
    cout << endl;

    int count = 0;
    for ( int ele:v ){
        if ( ele > z ){
            count ++;
        }
    }

    cout << "There are " << count << " numbers greater than " << z  << endl;

    return 0;
}