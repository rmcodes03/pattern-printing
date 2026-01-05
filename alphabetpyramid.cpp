#include <iostream>
using namespace std;

int main(){
    char c;
    cout << "Enter a capital alphabet: ";
    cin >> c;
    int n = int(c);
    for(int i=65; i<=n; i++){
        for(int j=65; j<=i; j++){
            cout << char(i) << " ";
        }
        cout << endl;
    }
    return 0;
}