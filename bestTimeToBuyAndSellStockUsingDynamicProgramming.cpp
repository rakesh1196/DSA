#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum
// profit with atmost 1 transaction
int maxProfit(vector<int>& prices)
{
	int n = prices.size();

	// 2D DP array to store max profit with 0 and 1 stocks
	vector<vector<int> > dp(n, vector<int>(2));

	dp[0][0] = -prices[0];
	dp[0][1] = 0;

	// Loop through prices to calculate max profit at each
	// day
	for (int i = 1; i < n; i++) {
		// choice 1: Buy the stock at i, in which case the
		// profit we get is the maximum profit we could have
		// made till i-1 minus the price at i.
		dp[i][0] = max(dp[i - 1][0], -prices[i]);

		// choice 2:Sell the stock at i, in which case the
		// profit we get is the maximum profit we could have
		// made till i-1 by buying the stock earlier plus
		// the price at i.
		dp[i][1]
			= max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
	}

	// Return the maximum profit calculated from the last
	// day
	return max(dp.back()[0], dp.back()[1]);
}

// Driver's code
int main()
{
	// Given prices
	vector<int> prices = { 7, 1, 5, 3, 6, 4 };

	// Function Call
	int ans = maxProfit(prices);

	// Print answer
	cout << ans << endl;
	return 0;
}
