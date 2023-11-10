#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
	cin >> N;

    // Upeer star printing

	for(int i = 1; i < 2*N; i++){
		cout << "*";
	}
	cout << endl;

        for(int row = 2;row <= N; row++){
		// Star
            for(int star1 = 1; star1 <= N-row+1; star1++){
                cout << "*";
            }
            // Space
            for(int sp1 = 1;sp1 <= row-1; sp1++){
                cout << " ";
		}
            // Space
            for(int sp2 = 1; sp2 <= row-2; sp2++){
                cout << " ";
	}
            // Star
            for(int star2 = N-row+1; star2 >= 1; star2--){
                cout << "*";
}
		cout << endl;
	}

    // Lower star printing
	    for(int row = 1; row < N-1; row++){
            //  Star
            for(int star1 = 1; star1 <= row+1; star1++){
                cout << "*";
            }
            // Space
            for(int sp1 = 1; sp1<=N-row-1; sp1++){
                cout << " ";
        }
            //Space
            for(int sp2 = N-row-2; sp2 >= 1; sp2--){
                cout << " ";
	}
            //Star
            for(int star2 = 1; star2 <= row+1; star2++){
                cout << "*";
}
		        cout << endl;
}
            for(int i = 1; i < 2*N; i++){
                cout << "*";
            }
	        return 0;
}
