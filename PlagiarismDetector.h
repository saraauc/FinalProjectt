#include<iostream>
#include<vector>
#include<string>
#include"StringMatcher.h"
#include "PlaagiarismResult.h"
using namespace std; 
class PlagiarismDetector{
	private:
		Corpus corpus;
		StringMatcher* matcher; 
		public:
			PlagiarismDetector(); 
			PlagiarismDetector(const Corpus& corp, stringMatcher*m); 
			~PlagiarismDetector(); 
			void set_corpus(const Corpus& corp); 
			vector<PlagiarismResult>detect_plagiarism(const &doc)const;
};
