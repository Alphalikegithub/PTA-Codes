/*
  @pintia psid=994805260223102976 pid=994805323154440192 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 我要通过！
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805323154440192
*/
// @pintia code=start
#include <iostream>
#include <string>
using namespace std;

// 检查字符串是否合法
bool isValid(const string& str) {
    // 统计 P 和 T 的出现次数及其位置
    int countP = 0, countT = 0, posP = -1, posT = -1;
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        // 检查是否只包含 P, A, T
        if (c != 'P' && c != 'A' && c != 'T') {
            return false;
        }
        if (c == 'P') {
            countP++;
            posP = i;
        }
        if (c == 'T') {
            countT++;
            posT = i;
        }
    }
    
    // 确保 P 和 T 各出现一次
    if (countP != 1 || countT != 1) {
        return false;
    }
    
    // 确保 P 在 T 之前
    if (posP >= posT) {
        return false;
    }
    
    // 计算三段的 A 的个数
    int x = posP; // P 前的 A 个数
    int y = posT - posP - 1; // P 和 T 之间的 A 个数
    int z = str.length() - posT - 1; // T 后的 A 个数
    
    // 确保 P 和 T 之间至少有一个 A
    if (y <= 0) {
        return false;
    }
    
    // 检查递归规则：x * y == z
    if (x * y != z) {
        return false;
    }
    
    return true;
}

int main() {
    int n;
    cin >> n; // 读取测试用例数量
    string str;
    for (int i = 0; i < n; i++) {
        cin >> str; // 读取每个字符串
        if (isValid(str)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
// @pintia code=end