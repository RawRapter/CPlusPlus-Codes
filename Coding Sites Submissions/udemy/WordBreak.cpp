/*
Given a string which a valid sentence without any spaces between the words and
a dictionary of valid engligh words, find all possible number of ways to break the sentence in 
individual dictionary words.

Input Format:
In the function a strin str and vector of string representing dictionary is passed

Output format:
return an integer representing total number of ways.

*/
#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
vector<string> v;
void help(string s, int n, string res, vector<string> &word)
{
	for (int i = 1; i <= n; i++)
	{
		string ss = s.substr(0, i);
		int l = word.size();
		bool flag = false;

		for (int j = 0; j < l; j++)
			if (word[j] == ss)
				flag = true;

		if (flag)
		{
			if (i == n)
			{
				res += ss;
				// v.push_back(res);
				cnt++;
				return;
			}
			help(s.substr(i, n - i), n - i, res + ss + " ", word);
		}
	}
}

int wordBreak(string s, vector<string> &dictionary)
{
	cnt = 0;
	help(s, s.size(), "", dictionary);
	// for (auto x : v) cout << x << '\n';
	return cnt;
}