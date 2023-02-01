#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int BinarySearch(vector<int> &sg_card_num, int card_num) {
    int high = sg_card_num.size() - 1;
    int low = 0;
    int mid;

    while(low <= high) {
        mid = (low + high) / 2;

        if (sg_card_num[mid] == card_num) return 1;
        else if (sg_card_num[mid] > card_num) high = mid - 1;
        else low = mid + 1;
    }

    return 0;
}

int main(int argc, char *argv[], char *envp[]) {
    int tmp;

    int count;
    int sg_count;
    vector<int> card_num;
    vector<int> sg_card_num;
    vector<int> result;

    cin >> sg_count;

    for (int i = 0; i < sg_count; i++) {
        cin >> tmp;
        sg_card_num.push_back(tmp);
    }

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> tmp;
        card_num.push_back(tmp);
    }

    sort(sg_card_num.begin(), sg_card_num.end());

    for (int i = 0; i < card_num.size(); i++) {
        result.push_back(BinarySearch(sg_card_num, card_num[i]));
    }

    for_each(result.begin(), result.end(), [](int &n) {
        cout << n << "\n";
    });

    return 0;
}