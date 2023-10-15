#include<bits/stdc++.h>
using namespace std;
int main() {
	long long no;
	cin >> no;
	long long ans = 0;
	long long powerOfTen = 1;

	while (no > 9){
		int last_digit = no % 10;
		if (last_digit >= 5){
			last_digit = 9 - last_digit;

		}
		ans = (last_digit * powerOfTen) + ans;
		no = no / 10;
		powerOfTen = powerOfTen * 10;
	}
	if (no == 9){
		ans = (9 * powerOfTen) + ans;
	} else if (no >= 5){
		ans = ((9 - no) * powerOfTen) + ans;
	}	else {
		ans = (no * powerOfTen) + ans;
	}
	cout << ans << endl;
	return 0;
}
