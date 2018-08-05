#include<iostream>
using namespace std;

class Solution{
	public:
	string Replacespace(string iniString,int length)
	{
		int count = 0;
		string s;
		if(iniString.empty())
		  return s;
		int i = 0;
		int size = iniString.size()-1;
		for(;i<=size;i++){

			if(iniString[i]==' ')
			  count++;
		}
		int n = length+(count*2);
		s.resize(n);
		i = n-1;
		while(i>=0){

			if(iniString[size]!=' ')
			{

				s[i] = iniString[size];
			}
			else{

				s[i--] = '0';
				s[i--] = '2';
				s[i] = '%';
			}
			size--;
			i--;
		}
		return s;
		}
};

int main()
{
	Solution s;
	string str;
	str = "hello world";
	string tmp = s.Replacespace(str,str.size());
	cout<<tmp<<endl;
	return 0;
}
