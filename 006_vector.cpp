1. 創建和初始化
#include <vector>
vector<int> vec1;
vector<int> vec2(5); // 包含5個預設初始化的整數，值為0
vector<int> vec3(5, 10); // 包含5個值為10的整數
vector<int> vec4 = {1, 2, 3, 4, 5};

2. 存取元素
vector<int> vec = {1, 2, 3, 4, 5};
int x = vec[2]; // x為3
int y = vec.at(3); // y為4
for (auto it = vec.begin(); it != vec.end(); ++it) {
    cout << *it << " ";
}

3. 添加和刪除元素
vector<int> vec = {1, 2, 3};
vec.push_back(4);
vec.pop_back();
vec.insert(vec.begin() + 2, 10); // 在位置2插入10
vec.erase(vec.begin() + 1); // 刪除位置1的元素
vec.clear();

4. 屬性和方法
vector<int> vec = {1, 2, 3, 4, 5};
int size = vec.size(); // size為5
bool empty = vec.empty(); // empty為false// 獲取第一個元素
int first = vec.front(); // first為1
int last = vec.back(); // last為5
sort(vec.begin(), vec.end());

