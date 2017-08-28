#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	int input;
	cin >> input;
	while(input != 0){
		
		int output = input * (input + 1) * (2*input + 1) / 6;
		cout << output << endl;

		cin >> input;
	}
}