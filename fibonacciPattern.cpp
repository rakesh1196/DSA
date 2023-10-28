#include <bits/stdc++.h>
using namespace std;

int main(){   
	int N;
	cin >> N;
	    
	int fst = 0, sec = 1, thd = 0;
   			
		for(int row = 1; row <= N; row++){
			for (int col = 1; col <= row; col++){
        
        fst = sec;
        sec = thd;
		cout << thd << " ";		
		thd = fst + sec;
        }
		cout << endl;
		}
	return 0;			
}
		
 
    


