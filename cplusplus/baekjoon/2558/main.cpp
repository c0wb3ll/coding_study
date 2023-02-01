#include <iostream>

using namespace std;

int sum(int a, int b) {

    return a + b;

}

int main(int argc, char *argv[], char *envp[]) {

    int a, b = 0;

    cin >> a >> b;
    cout << sum(a, b) << endl;

    return 0;

}