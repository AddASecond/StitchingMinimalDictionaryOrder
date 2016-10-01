#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Prior {
public:
	string findSmallest(vector<string> strs, int n) {
		// write code here
		string str;
		sort(strs.begin(), strs.end(), compare);
		for (int i = 0; i<strs.size(); i++) {
			str += strs[i];
		}
		return str;
	}
	static bool compare(string s1, string s2) {
		return s1 + s2<s2 + s1;
	}
};

int main() {
	Prior Pr;
	vector<string> input;
	cout << "Please input numbers of word you want to input(any value less than 10): \n";
	int n;
	cin >> n;
	string record[10],output;
	cout << "Please input string: \n";
	for (int i = 0; i < n; i++) {
		cin >> record[i];
		input.push_back(record[i]);
	}
	output = Pr.findSmallest(input,input.size());
	cout << output<<'\n';
}