#include<iostream>
using namespace std;
int main()
{
int num,a,b,c,d,e,f = 0;
cout<<"Enter your number with max 6 digits"<<endl;
cin>>num;
if(num<=999999)
{	
a = num/100000;                     //123456>>1
b = (num/10000)-((num/100000)*10);  //123456>>12-10>>2
c = (num/1000)-((num/10000)*10);    //123456>>123-120>>3
d = (num/100)-((num/1000)*10);      //123456>>1234-1230>>4
e = (num/10)-((num/100)*10);        //123456>>12345-12340>>5
f = (num/1)-((num/10)*10);          //123456>>123456-123450>>6

//for a
	if(a == 0)
	{cout<<" ";}
	else if(a == 1)
	{cout<<"one ";}
	else if(a == 2)
	{cout<<"two ";}
	else if(a == 3)
	{cout<<"three ";}
	else if(a == 4)
	{cout<<"four ";}
	else if(a == 5)
	{cout<<"five ";}
	else if(a == 6)
	{cout<<"six ";}
	else if(a == 7)
	{cout<<"seven ";}
	else if(a == 8)
	{cout<<"eight ";}
	else if(a == 9)
	{cout<<"nine ";}
//for b
	if(b == 0 && a == 0)
	{cout<<" ";}
	else if(b == 0 && a != 0)
	{cout<<"zero ";}
	else if(b == 1)
	{cout<<"one ";}
	else if(b == 2)
	{cout<<"two ";}
	else if(b == 3)
	{cout<<"three ";}
	else if(b == 4)
	{cout<<"four ";}
	else if(b == 5)
	{cout<<"five ";}
	else if(b == 6)
	{cout<<"six ";}
	else if(b == 7)
	{cout<<"seven ";}
	else if(b == 8)
	{cout<<"eight ";}
	else if(b == 9)
	{cout<<"nine ";}
//for c		
	if(c == 0 && b == 0 && a == 0)
	{cout<<" ";}
	else if(c == 0 && (b != 0 || a != 0))
	{cout<<"zero ";}
	else if(c == 1)
	{cout<<"one ";}
	else if(c == 2)
	{cout<<"two ";}
	else if(c == 3)
	{cout<<"three ";}
	else if(c == 4)
	{cout<<"four ";}
	else if(c == 5)
	{cout<<"five ";}
	else if(c == 6)
	{cout<<"six ";}
	else if(c == 7)
	{cout<<"seven ";}
	else if(c == 8)
	{cout<<"eight ";}
	else if(c == 9)
	{cout<<"nine ";}
//for d
	if(d == 0 && c == 0 && b == 0 && a == 0)
	{cout<<" ";}
	else if(d == 0 && (c != 0 || b != 0 || a != 0))
	{cout<<"zero ";}
	else if(d == 1)
	{cout<<"one ";}
	else if(d == 2)
	{cout<<"two ";}
	else if(d == 3)
	{cout<<"three ";}
	else if(d == 4)
	{cout<<"four ";}
	else if(d == 5)
	{cout<<"five ";}
	else if(d == 6)
	{cout<<"six ";}
	else if(d == 7)
	{cout<<"seven ";}
	else if(d == 8)
	{cout<<"eight ";}
	else if(d == 9)
	{cout<<"nine ";}
//for e	
	if(e == 0 && d == 0 && c == 0 && b == 0 && a == 0)
	{cout<<" ";}
	else if(e == 0 && (d != 0 || c != 0 || b != 0 || a != 0))
	{cout<<"zero ";}
	else if(e == 1)
	{cout<<"one ";}
	else if(e == 2)
	{cout<<"two ";}
	else if(e == 3)
	{cout<<"three ";}
	else if(e == 4)
	{cout<<"four ";}
	else if(e == 5)
	{cout<<"five ";}
	else if(e == 6)
	{cout<<"six ";}
	else if(e == 7)
	{cout<<"seven ";}
	else if(e == 8)
	{cout<<"eight ";}
	else if(e == 9)
	{cout<<"nine ";}
//for f
	if(f == 0 && e == 0 && d == 0 && c == 0 && b == 0 && a == 0)
	{cout<<" ";}
	else if(f == 0 && (e != 0 || d != 0 || c != 0 || b != 0 || a != 0))
	{cout<<"zero ";}
	else if(f == 1)
	{cout<<"one ";}
	else if(f == 2)
	{cout<<"two ";}
	else if(f == 3)
	{cout<<"three ";}
	else if(f == 4)
	{cout<<"four ";}
	else if(f == 5)
	{cout<<"five ";}
	else if(f == 6)
	{cout<<"six ";}
	else if(f == 7)
	{cout<<"seven ";}
	else if(f == 8)
	{cout<<"eight ";}
	else if(f == 9)
	{cout<<"nine ";}
	
}
else
{cout<<"Please enter a number with max 6 digits"<<endl;}
system("pause");
return 0;
}