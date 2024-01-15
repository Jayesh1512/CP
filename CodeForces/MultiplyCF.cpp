#include <iostream>
 
using namespace std;
 
int count_operations(int n) {
    int count = 0;
    while (n % 6 == 0) {
        n /= 6;
        count++;
    }
    int power_of_two = 0;
    while (n % 2 == 0) {
        n /= 2;
        power_of_two++;
    }
    if (n == 1) {
        return count + power_of_two;
    } else {
        return -1; 
    }
}
 
int main() {
    int t;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int result = count_operations(n);
        cout << result << endl;
    }
 
    return 0;
}