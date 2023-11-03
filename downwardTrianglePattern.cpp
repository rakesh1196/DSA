#include<bits/stdc++.h>
using namespace std;
int main () {

	int N;
	cin >> N;

	for(int row = 1; row <= N; row++){
        for(int space = 1; space < row; space++){
			cout<<" ";
		}    
        for(int star = row; star <= N; star++){
            cout<<"* ";
        }
        cout << endl;
    }
    cout << endl;
	return 0;
}
