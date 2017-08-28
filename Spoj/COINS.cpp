#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<int, long> data;
long rec(long n){
	if(n == 0){
		return 0;
	}
	if(data[n] == 0){
		data[n] =  max(n, rec(n/2) + rec(n/3) + rec(n/4));
	}
	else{
		return data[n];
	}
	//return max(n, rec(n/2) + rec(n/3) + rec(n/4));
}

int main(){
	int n;
	 while(cin >> n){
	 	cout << rec(n) << "\n";
	 }
}