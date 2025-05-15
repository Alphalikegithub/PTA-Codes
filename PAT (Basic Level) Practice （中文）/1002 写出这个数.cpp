/*
  @pintia psid=994805260223102976 pid=994805324509200384 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 写出这个数
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805324509200384
*/
// @pintia code=start
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string n;
    cin >> n;
    int sum = 0;
    for (char c : n) {
        sum += c - '0';
    }
    string sum_str = to_string(sum);
    vector<string> pinyin = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    for (int i = 0; i < sum_str.size(); ++i) {
        if (i != 0) {
            cout << " ";
        }
        cout << pinyin[sum_str[i] - '0'];
    }
    cout << endl;
    return 0;
}
// @pintia code=end