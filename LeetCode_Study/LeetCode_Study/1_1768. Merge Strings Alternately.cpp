#include <iostream>
#include <string>
using namespace std;

//My code
string mergeAlternately(string word1, string word2);
int main() {
    mergeAlternately("abcd", "123456");
}

string mergeAlternately(string word1, string word2) {
    string Merged = "";
    int index1 = 0;
    int index2 = 0;
    int size1 = 0;
    int size2 = 0;

    size1 = word1.length();
    size2 = word2.length();
    if (size1 >= size2)
    {
        for (int i = 0; i < size1; i++) {
            Merged = Merged + word1[index1];
            index1++;
            if (index2 < size2) {
                Merged = Merged + word2[index2];
                index2++;
            }
        }
    }
    else {
        for (int i = 0; i < size2; i++) {
            if (index1 < size1) {
                Merged = Merged + word1[index1];
                index1++;
            }
            Merged = Merged + word2[index2];
            index2++;
        }
    }
    cout << Merged;
    return Merged;
}

//Great soludion
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0;
        while (i < word1.length() || i < word2.length()) {
            if (i < word1.length()) {
                result += word1[i];
            }
            if (i < word2.length()) {
                result += word2[i];
            }
            i++;
        }
        return result;
    }
};