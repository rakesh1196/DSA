#include <bits/stdc++.h>
#include <strings.h>
using namespace std;

void createDuplicateArray(
	vector<pair<string, int> >& dupArray,
	vector<string>& wordAr, int size)
{
	for (int i = 0; i < size; i++) {
		dupArray.push_back(make_pair(wordAr[i], i));
		// pair.first contains the input words and
		// pair.second contains its index
	}
}

void printAnagramsTogether(vector<string>& wordArr,
						int size)
{

	vector<pair<string, int> >
		dupArray; // dupArray to store the word-index pair
	createDuplicateArray(
		dupArray, wordArr,
		size); // making copy of all the words and their
			// respective index

	// Iterate through all words in dupArray and sort
	// characters in each word.
	int i;
	for (i = 0; i < size; ++i) {
		sort(dupArray[i].first.begin(),
			dupArray[i].first.end());
	}

	// now sort the whole vector to get the identical words
	// together
	sort(dupArray.begin(), dupArray.end());

	// now all the identical words are together but we have
	// lost the original form of string
	// so through index stored in the word-index pair fetch
	// the original word from main input
	for (i = 0; i < size; ++i)
		cout << wordArr[dupArray[i].second] << " ";
}

int main()
{
	vector<string> wordArr
		= { "cat", "dog", "tac", "god", "act" };
	printAnagramsTogether(wordArr, wordArr.size());
	return 0;
}
