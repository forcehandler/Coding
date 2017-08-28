#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	int a,b,c;
	cin >> a >> b >> c;
	while(a != 0 || b != 0 || c!= 0){
		if(2*b == a + c){
			cout << "AP" << " ";
			int next = c + (c - b);
			cout << next << endl;
		}
		else{
			cout << "GP" << " ";		// input guaranteed to be 
									// either ap or gp
			int next = c*c/b;	// non zero r value so b != 0
			cout << next << endl;
		}
		cin >> a >> b >> c;
	}
}