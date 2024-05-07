//struct 儲存多筆資料 example
#include <bits/stdc++.h>
using namespace std;
	struct user {
		int age;
		string name;
	};
	int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<user> example;
	// 輸入資料
	while (true) {
	user newUser;
	cin >> newUser.age;
	if (newUser.age == -1) break; // 結束輸入
		cin >> newUser.name;
		example.push_back(newUser);
	}
	// 輸出資料
	cout << "User Data:" << endl;
	for (size_t i = 0; i < example.size(); ++i) {
		cout << "User " << i + 1 << ": ";
		cout << "Name: " << example[i].name << ", Age: " << example[i].age << endl;
	}
	return 0;
}
