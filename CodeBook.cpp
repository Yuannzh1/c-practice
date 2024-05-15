#1 Stack
Stack<int> s
1. 插入元素
s.push(num);
2.存取頂端元素
int topElement = myStack.top();

#2 Switch
switch (expression) {
    case value1:
        break;
    case value2: 
        break;
    default:
}

#3 Queue
queue<int> myQueue;
1.添加元素到佇列尾部：
myQueue.push(10);
2.獲取佇列頭部元素：
int frontElement = myQueue.front();

#4 string
1.存取字串中的字元：
char ch = str[0]; // 存取第一個字元
2.取得字串長度：
int len = str.length(); // 取得字串長度
3.字串相加：
string result = str1 + str2; // 將兩個字串相加
4.字串比較：
if (str1 == str2) 
5.使用 getline() 讀取一整行字串：
getline(cin, str); // 讀取一整行字串，包括空白字元

#5 Vector
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
