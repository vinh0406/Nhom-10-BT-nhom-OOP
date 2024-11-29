#include "CDate.h"
#include<iostream>
using namespace std;
CDate::CDate()
{
    ngay = 0;
    thang = 0;
    nam = 0;
}
std::istream& operator>>(std::istream& is, CDate& x)
{
    cout << "\nNhap ngay :";
    is >> x.ngay;
    cout << "\nNhap thang :";
    is >> x.thang;
    cout << "\nNhap nam :";
    is >> x.nam;
    return is;
}
std::ostream& operator<<(std::ostream& os, const CDate x)
{
    os << "\nNgay " << x.ngay << " thang " << x.thang << " nam " << x.nam;
    return os;
}
CDate& CDate::operator++()
{
    int k = ngay + 1;
    do
    {
        switch (thang)
        {
        case 1:case 3:case 5: case 7:case 8: case 10: case 12:
            if (k > 31)
            {
                thang++;
                if (thang == 13)
                {
                    thang = 1;
                    nam++;
                }
                k -= 31;
            }
            else
            {
                ngay = k;
                k = 0;
            }
            break;
        case 4:case 6: case 9: case 11:
            if (k > 30)
            {
                thang++;
                k -= 30;
            }
            else
            {
                ngay = k;
                k = 0;
            }
            break;
        case 2:
            if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
            {
                if (k > 29)
                {
                    thang++;
                    k -= 29;
                }
                else
                {
                    ngay = k;
                    k = 0;
                }
            }
            else
            {
                if (k > 28)
                {
                    thang++;
                    k -= 28;
                }
                else
                {
                    ngay = k;
                    k = 0;
                }
            }
            break;
        }
    } while (k > 0);
    return *this;
}
CDate CDate::operator++(int y)
{
    CDate temp;
    temp.nam = this->nam;
    temp.thang = this->thang;
    temp.ngay = this->ngay;
    int k = ngay + 1;
    do
    {
        switch (thang)
        {
        case 1:case 3:case 5: case 7:case 8: case 10: case 12:
            if (k > 31)
            {
                thang++;
                if (thang == 13)
                {
                    thang = 1;
                    nam++;
                }
                k -= 31;
            }
            else
            {
                ngay = k;
                k = 0;
            }
            break;
        case 4:case 6: case 9: case 11:
            if (k > 30)
            {
                thang++;
                k -= 30;
            }
            else
            {
                ngay = k;
                k = 0;
            }
            break;
        case 2:
            if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
            {
                if (k > 29)
                {
                    thang++;
                    k -= 29;
                }
                else
                {
                    ngay = k;
                    k = 0;
                }
            }
            else
            {
                if (k > 28)
                {
                    thang++;
                    k -= 28;
                }
                else
                {
                    ngay = k;
                    k = 0;
                }
            }
            break;
        }
    } while (k > 0);
    return temp;
}