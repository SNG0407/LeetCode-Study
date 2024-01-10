#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	string reverseWords(string s) {
		string result;
		vector<string> words;
		int wordPtn1 = 0;
		int wordPtn2 = 0;
		for (int i = 0; i < s.length(); i++) {
			wordPtn1 = s.find_first_not_of(' ', wordPtn2);
			if (wordPtn1 == string::npos) {
				cout << "11111" << endl;
				break;
			}
			wordPtn2 = s.find_first_of(' ', wordPtn1 + 1);

			cout << "wordPtn1: " << wordPtn1 << endl;
			cout << "wordPtn2: " << wordPtn2 << endl;
			if (wordPtn2 == -1) {
				words.push_back(s.substr(wordPtn1, s.length() - wordPtn1));
				cout << "22222" << endl;
				break;
			}
			else {
				words.push_back(s.substr(wordPtn1, wordPtn2 - wordPtn1));

			}
			//if (wordPtn2 == -1) break;

		}

		while (!words.empty()) {
			result = result + words.back() + " ";
			words.pop_back();
		}
		result.pop_back();
		return result;
	}
};

int main() {
	Solution myCode;

	string s = "the sky is blue";
	cout << myCode.reverseWords(s) << endl;

}