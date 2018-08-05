#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution{
	public:
		string findsmall(vector<string>& str){
			string s;
			if(str.empty())
			  return s;
			sort(str.begin(),str.end(),cmp);
			for(int i = 0;i<str.size();i++){
				s+=str[i];
			}
			return s;
		}
		static bool cmp(string s1,string s2){
			return (s1+s2)<(s2+s1);
		}
		void Print(vector<string> str)
		{
				vector<string>::iterator it = str.begin();
				while(it!=str.end()){
					cout<<*it<<endl;
					it++;
				}
		}
};


int main()
{
	Solution s;
	vector<string> v;
	v.push_back("abc");
	v.push_back("xy");
	v.push_back("oo");
	string tmp = s.findsmall(v);
	//s.Print(v);
	cout<<tmp<<endl;
	return 0;

}
