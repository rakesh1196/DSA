#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int N, int M){
	for(int i=0; i<N; i++){
		if (arr[i] == M){
			return i;
		}
	}
	return -1;
}
int main() {

	int N;
	cin >> N;

	int arr[N];
	for (int i=0; i<N; i++){
		cin >> arr[i];
	}
	int M;
	cin >> M;

	cout << linearSearch(arr,N,M) << endl;
	return 0;
}
