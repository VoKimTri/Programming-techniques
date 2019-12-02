#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int x, y;
	cin>>x>>y;
	if (x==0 && y==0){
		cout<<"The coordinate point ("<<x<<","<<y<<")lies at theorigin.";
	}
	else {
		if (x>0){
			if (y>0){
				cout<<"The coordinate point ("<<x<<","<<y<<") lies in the I quandrant.";
			}
			else{
				cout<<"The coordinate point ("<<x<<","<<y<<") lies in the IV quandrant.";
			}
		}
		else{
			if (y>0){
				cout<<"The coordinate point ("<<x<<","<<y<<") lies in the II quandrant.";
			}
			else{
				cout<<"The coordinate point ("<<x<<","<<y<<") lies in the III quandrant.";
			}
		}
	}
}
