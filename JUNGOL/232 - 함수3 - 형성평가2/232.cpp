#include <iostream>
using namespace std;

void print(int num) {
    if(num <= 0) return;
    print(num-2);
    cout << num << " ";
}

int main() {
    int n;
    cin >> n;
    print(n);
}