1. int 轉換成 string
stringstream ss;
    string int_to_str;
    int num = 12345;
    ss << num;
    ss >> int_to_str;
    cout << int_to_str << endl;

2. string 轉換成 int
stringstream ss;
    string int_to_str = "11804";
    int num;
    ss << int_to_str;
    ss >> num;
    cout << num << endl;

3. 清除stringstream
利用ss.str(""); ss.clear();

4.利用stringstream進行基本輸出
stringstream ss1("he");
    stringstream ss2,ss3,ss4;
    string str("max");
    ss2.str("hello");
    ss3.str(str);
    ss4 << "hey";
    cout << ss1.str() << endl;//output = he
    cout << ss2.str() << endl;//output = hello
    cout << ss3.str() << endl;//output = max
    cout << ss4.str() << endl;//output = hey

5. 分割stringstream
stringstream ss1("my name    is max  ");
    string str("");
    while(ss1 >> str)
        cout << str << endl;
//cout
my
name
is
max
