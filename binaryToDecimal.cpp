#include <bits/stdc++.h>
using namespace std;

int func(int n){
	int num = n;
	int decimal = 0;
	int i = 1;
	int temp = num;
	
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		decimal += last_digit * i;

		i = i * 2;
	}

	return decimal;
}

int main()
{
	int num = 101010;

	cout << func(num) << endl;
}

