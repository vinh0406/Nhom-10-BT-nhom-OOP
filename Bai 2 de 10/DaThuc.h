#pragma once
#include<iostream>
using namespace std;
class DaThuc
{
private:
    int n;
    int* arr;
public:
    DaThuc();
    friend istream& operator>>(std::istream&, DaThuc&);
    friend ostream& operator<<(std::ostream&, const DaThuc);
    DaThuc operator+(const DaThuc&);
};
