#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Match{
	private:
		int prime;
		int base;
		string text;
		vector<int>hashValues;
		public:
			RabinKarp(int prime, int base);
			void setText(string text);
			void precomputeHashes(string pattern);
			bool checkEquality(string pattern, int start);
			vector<int>match(string pattern, string text);
};
