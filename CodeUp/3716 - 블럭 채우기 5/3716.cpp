#include <iostream>
using namespace std;

int main() {
    int arr[11111] = {0, 1, 2, 6};
    for(int i = 4; i <= 10000; i++) arr[i] = (arr[i-1]+arr[i-2]+arr[i-3]*3)%1000;

    int n;
    cin >> n;
    cout << arr[n];
}