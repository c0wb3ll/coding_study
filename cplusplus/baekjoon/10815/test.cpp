#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> v = { 1, 2, 3, 4 };

    for_each(v.begin(), v.end(), [](int& n){
        cout << n << endl;        //output : 1 2 3 4
    });

    for_each(v.rbegin(), v.rend(), [](int& n) {
        cout << n << endl;        //output : 4 3 2 1
    });


////////////////////////////////////////////////////

    vector<int>::iterator itor = v.begin();

    for (; itor != v.end(); itor++)
        cout << *itor << endl;        //output : 1 2 3 4


    vector<int>::reverse_iterator itor2 = v.rbegin();

    for (; itor2 != v.rend(); itor2++)
        cout << *itor2 << endl;        //output : 4 3 2 1

}