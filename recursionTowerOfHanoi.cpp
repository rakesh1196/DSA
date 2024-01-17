#include <bits/stdc++.h>
using namespace std;

int TowerOfHanoi(int n, string src, string helper, string desc){

	if (n == 0){
		return 0;
	}
    
	int steps = TowerOfHanoi(n - 1, src, desc, helper);
	cout << "Move " << n << "th disc from " << src << " to " << helper << endl;
	steps += 1;
	steps += TowerOfHanoi(n - 1, desc, helper, src);
	return steps;
}

int main(){

	int n;
	cin >> n;

	cout << TowerOfHanoi(n, "T1", "T2", "T3");
    return 0;
}
