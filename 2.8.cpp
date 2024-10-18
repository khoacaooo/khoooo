#include <iostream>
using namespace std;
	int main(){
		int a,nam,thang,ngay;
		cout <<"nhap vao 1 ngay =";
		cin >>a;
		nam =a/365;
		thang=(a%365)/30;
		ngay =(a%365)%30;
		cout <<"Expected ouput "<<endl;
		cout <<"years  "<<nam<<endl; 
		cout <<"months  "<<thang<<endl;
		cout <<"days  "<<ngay<<endl;
	return 0;
		
		
	}
