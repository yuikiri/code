#include <limits> 
#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int number;

    // Yêu cầu nhập số nguyên hợp lệ
    while (true) {
        cout << "Nhap mot so nguyen: ";
        cin >> number;

        if (cin.fail()) { // Kiểm tra nhập sai (không phải số nguyên)
            cin.clear();  // Xóa trạng thái lỗi
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Bỏ qua phần nhập sai
            cout << "Ban nhap sai, vui long thu lai!" << endl;
        } else {
            break; // Thoát khỏi vòng lặp nếu nhập đúng
        }
    }

    // Kiểm tra số nguyên tố
    if (isPrime(number)) {
        cout << number << " la so nguyen to." << endl;
    } else {
        cout << number << " khong phai la so nguyen to." << endl;
    }

    return 0;
}