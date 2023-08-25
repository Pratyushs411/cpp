#include<iostream>
#include<string.h>
using namespace std;
class complex
{
	int real;
	int img;
	public:
		void set()
		{
			cout<<"enter real part-";
			cin>>real;
			cout<<"enter img part-";
			cin>>img;
		}
		void display()
		{
			if(img>=0)
			{
				cout<<real<<"+"<<img<<"i"<<endl;
			}
			else
			{
				cout<<real<<img<<"i"<<endl;
			}
		}
		int realpart()
		{
			return real;
		}
		int imgpart()
		{
			return img;
		}
		void add(int a,int b,int c , int d)
		{
			complex s;
			int e = a+b;
			int f = c+d;
			s.real = e;
			s.img = f;
			s.display();
		}
};
int main()
{
	complex noa;
	complex nob;
	complex ans;
	noa.set();
	nob.set();
	ans.add(noa.realpart(),nob.realpart(),noa.imgpart(),nob.imgpart());
	return 0;
}
