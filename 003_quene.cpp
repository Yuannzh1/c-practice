//排隊，先進先出
//quene
1.包含標頭檔案：
#include <queue>

2.創建優先佇列：
queue<int> myQueue;

3.添加元素到佇列尾部：
myQueue.push(10);
myQueue.push(20);
myQueue.push(30);

4.從佇列頭部刪除元素：
myQueue.pop();

5.獲取佇列頭部元素：
int frontElement = myQueue.front();

6.檢查佇列是否為空：
if (myQueue.empty()) {
    // 佇列為空
}

7.獲取佇列的大小：
int queueSize = myQueue.size();


//priorty quene
1.創建優先佇列：
priority_queue<int> myPriorityQueue;

2.添加元素到優先佇列：
myPriorityQueue.push(30);
myPriorityQueue.push(10);
myPriorityQueue.push(20);

3.從優先佇列頂部刪除元素：
myPriorityQueue.pop();

4.獲取優先佇列頂部元素：
int topElement = myPriorityQueue.top();

5.自定義比較函數進行排序：
// 自定義比較函數，元素由小到大排序
struct Compare {
    bool operator()(int a, int b) {
        return a > b;
    }
};
priority_queue<int, vector<int>, Compare> myPriorityQueue;





  
