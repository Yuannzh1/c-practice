switch (expression) {
    case value1:
        // 如果 expression 的值等於 value1，執行這裡的程式碼
        break;
    case value2:
        // 如果 expression 的值等於 value2，執行這裡的程式碼
        break;
    // 可以有更多的 case
    default:
        // 如果 expression 的值不等於任何 case 中的值，執行這裡的程式碼
}
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "Not bad!" << endl;
            break;
        case 'D':
            cout << "You passed, but you need to improve." << endl;
            break;
        case 'F':
            cout << "You failed. Please study harder." << endl;
            break;
        default:
            cout << "Invalid grade entered." << endl;
    }
