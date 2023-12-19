#include <bits/stdc++.h>
using namespace std;

int maximumPerfectness(int k, string s) {
    int n = s.size();
    int count1 = 0, count2 = 0; 
    int l = 0, r = 0; 
    int maxLen = 0; 

    while (r < n) {
        if (s[r] == 'a') count1++;
        else count2++;

        if (min(count1, count2) > k) { 
            if (s[l] == 'a'){
				count1--;
			} 
            else{
				count2--;
			} 
            l++;
        }

        maxLen = max(maxLen, r-l+1);
        r++;
    }

    return maxLen;
}

int main() {
    int k;
    string s;
    cin >> k >> s;
    cout << maximumPerfectness(k, s) << endl;
    return 0;
}
