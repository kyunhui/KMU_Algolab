#include "MyRational.h"
using namespace std;

myRational::myRational(long num, long den):_num(num), _den(den){
    reduce();
}
myRational::myRational(const myRational& rat){
    _num = rat._num;
    _den = rat._den;
}
long myRational::getNumerator() const{
    return _num;
}
long myRational::getDenominator() const{
    return _den;
}
myRational myRational::reciprocal() const{
    return myRational(_den, _num);
}
myRational myRational::operator +(const myRational& rat) const{
    long newNum = (_num * rat._den) + (_den * rat._num);
    long newDen = _den * rat._den;
    return myRational(newNum, newDen);
}
myRational myRational::operator +(long value) const{
    return (*this) + myRational(value, 1);
}
myRational myRational::operator -(const myRational& rat) const{
    long newNum = (_num * rat._den) - (_den * rat._num);
    long newDen = _den * rat._den;
    return myRational(newNum, newDen);
}
myRational myRational::operator -(long value) const{
    return (*this) - myRational(value, 1);
}
myRational myRational::operator* (const myRational& rat) const{
    long newNum = _num * rat._num;
    long newDen = _den * rat._den;
    return myRational(newNum, newDen);
}
myRational myRational::operator* (long value) const{
    return *this * myRational(value, 1);
}
myRational myRational::operator /(const myRational& rat) const{
    if (rat._num == 0) return myRational();
    myRational r = rat.reciprocal();
    long newNum = _num * r._num;
    long newDen = _den * r._den;
    return myRational(newNum, newDen);
}
myRational myRational::operator /(long value) const{
    return *this / myRational(value, 1);
}
myRational myRational::operator++(){
    _num += _den;
    myRational ret(_num, _den);
    return ret;
}
myRational myRational::operator++(int){
    myRational ret(_num, _den);
    _num += _den;
    return ret;
}
myRational myRational::operator--(){
    _num -= _den;
    myRational ret(_num, _den);
    return ret;
}
myRational myRational::operator--(int){
    myRational ret(_num, _den);
    _num -= _den;
    return ret;
}
myRational myRational::operator -(){
    return myRational(-_num, _den);
}
bool myRational::operator >(const myRational& rat) const{
    return (_num * rat._den) > (rat._num * _den);
}
bool myRational::operator >=(const myRational& rat) const{
    return (_num * rat._den) >= (rat._num * _den);
}
bool myRational::operator <(const myRational& rat) const{
    return (_num * rat._den) < (rat._num * _den);
}
bool myRational::operator <=(const myRational& rat) const{
    return (_num * rat._den) <= (rat._num * _den);
}
bool myRational::operator ==(const myRational& rat) const{
    return (_num == rat._num) && (_den == rat._den);
}
bool myRational::operator !=(const myRational& rat) const{
    return !operator==(rat);
}
myRational& myRational::operator =(const myRational& rat){
    this->_num = rat._num;
    this->_den = rat._den;
    return *this;
}
myRational& myRational::operator =(long value){
    _num = value;
    _den = 1;
    return *this;
}
myRational& myRational::operator +=(const myRational& rat){
    long num = this->_num;
    long den = this->_den;
    this->_num = (num * rat._den) + (rat._num * _den);
    this->_den = den * rat._den;
    reduce();
    return *this;
}
myRational& myRational::operator +=(long value){
    *this += myRational(value, 1);
    return *this;
}
myRational& myRational::operator -=(const myRational& rat){
    long num = this->_num;
    long den = this->_den;
    this->_num = (num * rat._den) - (rat._num * _den);
    this->_den = den * rat._den;
    reduce();
    return *this;
}
myRational& myRational::operator -=(long value){
    *this -= myRational(value, 1);
    return *this;
}
myRational& myRational::operator *=(const myRational& rat){
    long num = this->_num;
    long den = this->_den;
    this->_num = num * rat._num;
    this->_den = den * rat._den;
    reduce();
    return *this;
}
myRational& myRational::operator *=(long value){
    *this *= myRational(value, 1);
    return *this;
}
myRational& myRational::operator /=(const myRational& rat){
    if (rat._num == 0){
        this->_num = 0;
        this->_den = 1;
        return *this;
    }
    long num = this->_num;
    long den = this->_den;
    myRational r(rat.reciprocal());
    this->_num = num * r._num;
    this->_den = den * r._den;
    reduce();
    return *this;
}
myRational& myRational::operator /=(long value){
    *this /= myRational(value, 1);
    return *this;
}
ostream &operator <<(ostream &outStream, const myRational& r)
{
        if (r._num == 0)
                outStream << 0;
        else if (r._den == 1)
                outStream << r._num;
        else
                outStream << r._num << "/" << r._den;
        return outStream;
}
istream &operator >>(istream &inStream, myRational& r)
{
        inStream >> r._num >> r._den;
        if (r._den == 0)
        { r._num = 0;
          r._den = 1;}
        r.reduce();
        return inStream;
}
myRational operator+(long value, const myRational& rat){
    return rat + value;
}
myRational operator-(long value, const myRational& rat){
    myRational r(rat);
    return -r + value;
}
myRational operator*(long value, const myRational& rat){
    return rat * value;
}
myRational operator/(long value, const myRational& rat){
    myRational r(rat.reciprocal());
    return r * value;
}
long myRational::gcd(long m, long n)
{
        if (m == n)
                return n;
        else if (m < n)
                return gcd(m, n-m);
        else return gcd(m-n, n);
}
void myRational::reduce()
{
        if (_num == 0 || _den == 0)
        { _num = 0;
          _den = 1;
          return;}
        if (_den < 0)
        { _den *= -1;
          _num *= -1;}
        if (_num == 1)
                return;
        int sgn = (_num < 0 ? -1 : 1);
        long g = gcd(sgn * _num, _den);
        _num /= g;
        _den /= g;
}
