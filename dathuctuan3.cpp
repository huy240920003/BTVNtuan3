//Nguyen Ngo Huy DHTI15A5HN
#include<iostream>
using namespace std;
class DaThuc3
{
	private:
		int a,b,c,d;
	public:
		DaThuc3()
		{
			(a,b,c,d)=0; 
		}		
		~DaThuc3()
		{
			;
		} 
		friend ostream& operator << (ostream&,DaThuc3);
		friend istream& operator >> (istream&,DaThuc3&);
		void tong(DaThuc3 a,DaThuc3 b); 
		DaThuc3 operator + (DaThuc3 u)
		{
			DaThuc3 tong;
			tong.a=this->a+u.a;
			tong.b=this->b+u.b;
			tong.c=this->c+u.c;
			tong.d=this->d+u.d;
			return tong;
		}
		DaThuc3 operator - (DaThuc3 u)
		{
			DaThuc3 hieu;
			hieu.a=this->a-u.a;
			hieu.b=this->b-u.b;
			hieu.c=this->c-u.c;
			hieu.d=this->d-u.d;
			return hieu;
		}
}; 
ostream& operator << (ostream& out,DaThuc3 x)
{
	out<<"\n\t\t\tDA THUC CO DANG: "<<x.a<<"x3 + "<<x.b<<"x2 + "<<x.c<<"x + "<<x.d<<endl; 
}
istream& operator >> (istream& in,DaThuc3 &x)
{
	cout<<"nhap bac 3: ";
	in>>x.a;
	cout<<"nhap bac 2: ";
	in>>x.b;
	cout<<"nhap bac 1: ";
	in>>x.c;
	cout<<"nhap ba 0: ";
	cin>>x.d;
	cout<<endl; 
}
int main()
{
	DaThuc3 a,b;
	cout<<"\n\t\tNHAP DA THUC THU NHAT\n";
	cin>>a;
	cout<<"\n\t\tNHAP DA THUC THU HAI\n";
	cin>>b;
	cout<<"\n\t\tXUAT DA THUC THU NHAT\n";
	cout<<a;
	cout<<"\n\t\tXUAT DA THUC THU HAI\n"; 
	cout<<b;
	cout<<"\n\t\tTONG CUA HAI DA THUC BAC 3 LA: "<<a+b<<endl;
	cout<<"\n\t\tHIEU CUA HAI DA THUC BAC 3 LA: "<<a-b<<endl;
	return 0;
}
