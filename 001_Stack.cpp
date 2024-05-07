//stack可用於DFS

1. 包含標頭檔
//在 C++ 中使用 stack 前，你需要包含 <stack> 標頭檔：
#include <stack>

2. 宣告 stack  
//你可以使用 std::stack 來宣告一個 stack，它是一個模板類：
std::stack<int> myStack;

3. 插入元素
//你可以使用 push() 函數將元素壓入 stack：
myStack.push(5);
myStack.push(10);
myStack.push(15);

4. 存取頂端元素
//使用 top() 函數可以獲取 stack 頂端的元素，但不會將其從 stack 中刪除：
int topElement = myStack.top();

5. 刪除頂端元素
//如果你想要刪除 stack 頂端的元素，可以使用 pop() 函數：
myStack.pop();

6. 檢查 stack 是否為空
//你可以使用 empty() 函數來檢查 stack 是否為空：
if (myStack.empty()) {
    // stack 為空
} else {
    // stack 不為空
}

7. 獲取 stack 的大小
//你可以使用 size() 函數來獲取 stack 中的元素數量：
int stackSize = myStack.size();

8. 迭代 stack
//你可以使用迭代器來訪問 stack 中的元素，但要注意 stack 的結構是先進後出 (LIFO)，所以迭代器會從 stack 的頂端開始：
while (!myStack.empty()) {
    int topElement = myStack.top();
    // 對 topElement 做一些操作
    myStack.pop();
}










