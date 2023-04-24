#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Corpus{
	private:
		vector<string>sentence;
	public:
		Corpus();
		~Corpus();
		Corpus(const vector<string>&docs);
		void removeDocument(const string& doc); 
		void addDocument(const string& doc);
		void clearDocuments();
		vector<string>getDocuments();
};
