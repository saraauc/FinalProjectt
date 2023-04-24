#include<iostream>
#include<string>
using namespace std;
class PlagiarismResult{
	private:
		string originalDoc; 
		vector<string> plagiarizedDocs;
	public:
		string getDocument(); 
		void addPlagiarizedDoc(string docPath); 
		string getOriginalDocl(); 
		vector<string>getPlagiarizedDocs(); 
		}; 
