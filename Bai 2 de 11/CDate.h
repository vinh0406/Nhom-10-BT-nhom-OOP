#pragma once
#include<iostream>
using namespace std;
#pragma once
class CDate
{
private:
    int ngay, thang, nam;
public:
    CDate();
    friend std::istream& operator>>(std::istream&, CDate&);
    friend std::ostream& operator<<(std::ostream&, const CDate);
    friend CDate operator+(const CDate, const int);
    CDate& operator++();
    CDate operator++(int);
    bool ktNamNhuan();
    long long TongNgay();
    long operator-(CDate& y);
};