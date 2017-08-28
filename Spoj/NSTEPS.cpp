#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	while(n--){
		int a, b;
		cin >> a >> b;
		if(b == a || b == a-2){
			if(a % 2 == 0){
				cout << a + b << endl;
			}
			else{
				cout << a + b + - 1 << endl;
			}
		}
		else{
			cout << "No Number" << endl;
 		}
	}
}