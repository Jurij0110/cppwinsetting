#include<iostream>

using namespace std;

int ucln(int a, int b){
    while (b!=0)
    {
        return(ucln(b,a%b));
    }
    return a;
    
}
class PhanSo{
    private:
    int x, y;
    public:
    PhanSo(int, int);
    void rutgon();
    friend ostream &operator<<(ostream&, const PhanSo);
    friend istream &operator>>(istream&,PhanSo &);
    friend PhanSo operator+(PhanSo &, PhanSo &);
};
PhanSo operator+ (PhanSo &a, PhanSo &b){
    return (PhanSo(a.x+b.x,a.y+b.y));
}
ostream &operator<<(ostream& out, const PhanSo a){
    out<< a.x <<"/"<<a.y;
}
istream &operator>>(istream& in, PhanSo &a){
    cout<<"Nhap a";
    in>>a.x;
    in>>a.y;
}
void PhanSo::rutgon(){
    int temp = ucln(this->x,this->y);

    this->x = this->x/temp;
    this->y = this->y/temp;
}
PhanSo::PhanSo(int a, int b){
    this->x = a;
    this->y = b;
}
int main() {
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}


