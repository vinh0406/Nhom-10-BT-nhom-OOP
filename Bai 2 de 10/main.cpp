#include "DaThuc.h"

int main() {
    // Tạo ba đối tượng đa thức
    DaThuc a, b, c;

    // Nhập đa thức thứ nhất
    cout << "Nhap da thuc thu nhat:" << endl;
    cin >> a;

    // Nhập đa thức thứ hai
    cout << "Nhap da thuc thu hai:" << endl;
    cin >> b;

    // Xuất hai đa thức đã nhập
    cout << "Da thuc thu nhat:" << a << endl;
    cout << "Da thuc thu hai:" << b << endl;

    // Tính tổng hai đa thức
    c = a + b;

    // Xuất kết quả tổng
    cout << "Tong cua hai da thuc:" << c << endl;

    return 0;
}
