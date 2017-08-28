#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int block;
	cin >> block;
	int inp[10005];
	while(block != -1){

		int sum = 0;
		int ans = 0;
		int avg = 0;
		for(int i = 0; i < block ; i++){
			cin >> inp[i];
			sum += inp[i];
		}

		if(sum % block != 0){
			cout << -1 << "\n";
		}
		else{
			avg = sum / block;
			for(int j = 0; j < block; j++){
				if(inp[j] < avg){
					ans += avg - inp[j];
				}
			}
			cout << ans << "\n";
		}
		cin >> block;
	}
}
