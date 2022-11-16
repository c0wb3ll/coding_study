#include <iostream>
#include <string>

using namespace std;

void input_string() {
    string c;

    cin >> c;

    cout << c << endl;
}

int main( int argc, char *argv[], char *env[] ) {
    cout << "Hello World!" << endl;
    
    input_string();

    return 0;
}