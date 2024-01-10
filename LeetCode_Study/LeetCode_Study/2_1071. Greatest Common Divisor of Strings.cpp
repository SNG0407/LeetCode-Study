#include <iostream>
#include <string>
using namespace std;

//My code
string gcdOfStrings(string str1, string str2);
int main() {
    gcdOfStrings("ABCABCABCABCABCABCABC", "ABCABC");
}
string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1) {
        return "";
    }
    // Euclidean algorithm to find the greatest common divisor
    int len1 = str1.length();
    int len2 = str2.length();
    cout << "__len1: " << len1 << endl;
    cout << "__len2: " << len2 << endl;

    while (len2 != 0) {
        int temp = len2;
        len2 = len1 % len2;
        len1 = temp;
        cout << "len1: " << len1 << endl;
        cout << "len2: " << len2 << endl;

    }

    // The length of the greatest common divisor is len1
    return str1.substr(0, len1);
}
