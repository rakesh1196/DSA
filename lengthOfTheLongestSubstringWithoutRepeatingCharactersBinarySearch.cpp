#include <bits/stdc++.h>
using namespace std;


// Function to check if any substring of length mid contains
// all unique characters 
bool isValid(string& s, int mid)
{
    // Count the frequency of each character in the pattern
    int count[256] = { 0 };


    bool found = false;


    // Stores the number of distict charcters in a substring of size
    // mid 
    int distinct = 0;
  
    for (int i = 0; i < s.size(); i++) {
        count[s[i]]++;
        if (count[s[i]] == 1) {
            distinct++;
        }
        if (i >= mid) {
            count[s[i - mid]]--;
            if (count[s[i - mid]] == 0) {
                distinct--;
            }
        }
        if (i >= mid - 1) {

            // Substring of length mid found which contains
            // all the unique characters 
            if (distinct == mid) {
                found = true;
            }
        }
    }

    return found;
}


int longestUniqueSubsttr(string& s)
{
    int len = s.length();

    int ans = INT_MAX;

    // Lower bound and Upper Bound for Binary Serach
    int low_bound = 1, high_bound = len;


    // Applying Binary Search on answer
    while (low_bound <= high_bound) {
        int mid = (low_bound + high_bound) / 2;
        

        // If a substring of length mid is found which
        // contains all unique characters then
        // update low_bound otherwise update
        // high_bound
        if (isValid(s,mid)) {
              ans=mid;
            low_bound = mid + 1;
        }
    
        else {
            high_bound = mid - 1;
        }
    }

    return ans;
}



int main()
{
    string str = "geeksforgeeks";
    cout << "The input string is " << str << endl;
    int len = longestUniqueSubsttr(str);
    cout << "The length of the longest non-repeating "
            "character substring is "
         << len;
    return 0;
}
