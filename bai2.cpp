#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
#define a() a
class SinhVien
{
private:
    std::string masv;
    std::string email;
    std::string name;
    std::string lop;
    


public:
    SinhVien(/* args */);
    ~SinhVien();

    friend ostream& operator<<(ostream& ,SinhVien const);
    friend istream& operator>>(istream& ,SinhVien &);
};

SinhVien::SinhVien(/* args */){
    this->lop = "";
    this->masv = "";
    this->name = "";
    this->email = "";
    
}

SinhVien::~SinhVien(){

}

istream& operator>>(istream& in,SinhVien &a){
    a.masv = "B20DCCN001";
    getline(in, a.name);
    in >> a.lop >> a.ns >> a.gpa;
    return in;
}


ostream& operator<<(ostream& out,SinhVien const a){
    cout<<a.masv<<" "<<a.name<<" "<<a.lop<<" "<<a.ns<<" "
    << fixed << setprecision(2)<< a.gpa<<endl;
}
int main(){
	int n; cin >> n;
	SinhVien a[100];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for(SinhVien x : a[n]) cout << x;
	return 0;
}
