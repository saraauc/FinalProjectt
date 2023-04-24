#include<iostream>
#include<string>
using namespace std;
class PlagiarismResult{
	private:
		string original_doc;
		string matched_doc;
		int similarity;
		public:
			PlagiarismResult();
			PlagiarismResult(const string& orig, const string& match, int sim); 
			~PlagiarismResult();
			const string& get_original_doc()const; 
			const string &get_matched_doc()const; 
			int get_similarity()const;
			};
