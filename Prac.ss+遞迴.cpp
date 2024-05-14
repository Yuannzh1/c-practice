#include <iostream>
#include <sstream>

using namespace std;

int sumDigits(string s) {
    int sum = 0;
    stringstream ss;
    for (char c : s) {
        sum += c - '0'; // 將字符轉換為整數並相加
    }
    return sum;
}

bool isSingleDigit(int num) {
    return num < 10;
}

int main() {
    string s;
    while (true) {
        cin >> s;
        if (s == "0") {
            break;
        }
        
        int result = sumDigits(s);
        while (!isSingleDigit(result)) {
            stringstream ss;
            ss << result; // 將結果轉換為字符串
            ss >> s; // 字符串格式的結果
            result = sumDigits(s); // 再次計算數字和
        }
        
        cout << result << endl;
    }
    
    return 0;
}
