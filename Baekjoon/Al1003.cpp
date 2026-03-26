#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int fibonacci(int n);

int main()
{
    int n;
    if (!(cin >> n)) return 0;

    cout << "결과: " << fibonacci(n) << endl;

    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    }
    else if (n == 1) {
        printf("1");
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}