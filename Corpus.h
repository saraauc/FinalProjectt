#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Corpus{
	private:
		vector<string>documents;
		public:
			Corpus();
			Corpus(const vector<string>&docs);
			void add_documents(const string& doc); 
			const vector<string>&get_documents()const;
};
