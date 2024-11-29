#include "CDate.h"
#include <iostream>
using namespace std;

int main() {
    // Khởi tạo đối tượng CDate
    CDate date;

    // Nhập dữ liệu ngày, tháng, năm
    cout << "Nhap thong tin ngay, thang, nam:" << endl;
    cin >> date;

    // Xuất thông tin ngày, tháng, năm
    cout << "\nNgay thang nam ban vua nhap:" << endl;
    cout << date << endl;

    // Tăng ngày (prefix ++)
    cout << "\nTang ngay (prefix ++):" << endl;
    ++date;
    cout << date << endl;

    // Tăng ngày (postfix ++)
    cout << "\nTang ngay (postfix ++):" << endl;
    date++;
    cout << date << endl;

   