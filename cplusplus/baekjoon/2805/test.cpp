#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<int> numbers) {
    int tmp;
    string answer = "";
    
    for (int i = 0; i < numbers.size(); i++) {
        tmp = numbers[i];
        while(tmp >= 10) {
            tmp /= 10;
        }
        cout << numbers[i] << " " << tmp << " ";
        if (answer.size() == 0) { answer.insert(answer.begin(), numbers[i]); }
        else if (answer[0] < tmp) { answer.insert(answer.begin(), numbers[i]); }
        else { answer.insert(answer.end(), numbers[i]); }
    }
    
    return answer;
}