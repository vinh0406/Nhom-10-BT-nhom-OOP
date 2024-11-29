#include "DaThuc.h"
DaThuc::DaThuc()
{
    int n = 0;
    arr = new int[1];
    arr[0] = 1;
}
istream& operator>>(std::istream& is, DaThuc& y)
{
    cout << "\nNhap bac cua da thuc :";
    int m;
    is >> m;
    y.n = m;
    y.arr = new int[y.n + 1];
    for (int i = y.n; i >= 0; i--)
    {
        cout << "\nNhap he bac " << i << " :";
        cin >> y.arr[i];
    }
    return is;
}
ostream& operator<<(std::ostream& os, const DaThuc y)
{
    os << "\nHe so cua bac giam dan la:";
    for (int i = y.n; i >= 0; i--)
    {
        os << y.arr[i] << " ";
    }
    return os;
}
DaThuc DaThuc::operator+(const DaThuc& y)
{
    DaThuc z;
    if (this->n > y.n)
    {
        z.n = this->n;
        z.arr = new int[z.n + 1];
        for (int i = y.n; i >= 0; i--)
        {
            z.arr[i] = this->arr[i] + y.arr[i];
        }
        int j = this->n;
        while (j > y.n)
        {
            z.arr[j] = this->arr[j];
            j--;
        }
        return z;
    }
    if (this->n < y.n)
    {
        DaThuc z;
        z.n = y.n;
        z.arr = new int[y.n + 1];
        for (int i = this->n; i >= 0; i--)
        {
            z.arr[i] = this->arr[i] + y.arr[i];
        }
        int j = z.n;
        while (j > this->n)
        {
            z.arr[j] = y.arr[j];
            j--;
        }
        return z;
    }
    if (this->n == y.n)
    {
        DaThuc z;
        z.n = this->n;
        z.arr = new int[this->n + 1];
        for (int i = y.n; i >= 0; i--)
        {
            z.arr[i] = this->arr[i] + y.arr[i];
        }
        return z;
    }
}