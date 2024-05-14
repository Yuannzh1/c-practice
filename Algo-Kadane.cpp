//Kadane's演算法是一個非常實用的工具，用於處理各種與最大（或最小）子數組相關的問題，並且在許多應用中具有高效的效能。

#include <iostream>
#include <vector>

using namespace std;

int kadaneAlgorithm(vector<int>& nums) {
    int maxSum = nums[0];  // 初始化全局最大和為第一個元素
    int currentSum = nums[0];  // 初始化當前子數組的和為第一個元素

    // 從第二個元素開始遍歷
    for (int i = 1; i < nums.size(); ++i) {
        // 更新當前子數組的和，如果加上這個元素會使得和增大，否則重新開始計算
        currentSum = max(nums[i], currentSum + nums[i]);

        // 更新全局最大和
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums = {1, -3, 2, 1, -1, 4, -2, 3};

    cout << "最大子數組的和為: " << kadaneAlgorithm(nums) << endl;

    return 0;
}
