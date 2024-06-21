#include <iostream>
#include <string>
using namespace std;

int longestUniqueSubsttr(string str)
{
    // if string length is 0
    if (str.length() == 0)
        return 0;

    // if string length 1
    if (str.length() == 1)
        return 1;

    // if string length is more than 2
    int maxLength = 0;
    bool visited[256] = { false };

    // left and right pointer of sliding window
    int left = 0, right = 0;
    while (right < str.length()) {

        // if character is visited
        if (visited[str[right]] == true) {

            // The left pointer moves to the right while
            // marking visited characters as false until the
            // repeating character is no longer part of the
            // current window.
            while (visited[str[right]] == true) {

                visited[str[left]] = false;
                left++;
            }
        }

        visited[str[right]] = true;

        // The length of the current window (right - left +
        // 1) is calculated and answer is updated
        // accordingly.
        maxLength = max(maxLength, (right - left + 1));
        right++;
    }
    return maxLength;
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
