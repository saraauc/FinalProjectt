#include<iostream>
#include<vector>
#include<string>
#include"Match.h"
#include "PlagiarismResult.h"
using namespace std; 
class PlagiarismDetector{
	private:
		Corpus corpus;
		Match* matcher; 
	public:
		PlagiarismDetector(); 
		PlagiarismDetector(const Corpus& corp, stringMatcher*m); 
		~PlagiarismDetector(); 
		void setCorpus(const Corpus& corp); 
		vector<PlagiarismResult>findMatches(string document);
};
