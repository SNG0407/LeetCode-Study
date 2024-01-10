#include <iostream>
#include <string>
#include <vector>
using namespace std;

//My code
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies);
vector<bool> kidsWithCandies_Best(vector<int>& candies, int extraCandies);
int main() {
    vector<int> candies = { 2,3,5,1,3 };
    kidsWithCandies(candies, 3);

}
vector<bool> kidsWithCandies_Best(vector<int>& candies, int extraCandies) {
    vector<bool> result;

    int Biggest = candies[0];
    for (int candy : candies) {
        Biggest = max(Biggest, candy);
    }
    for (int candy : candies) {
        candy + extraCandies >= Biggest ? result.push_back(true) : result.push_back(false);
    }

    return result;
}

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result;

    int size_vector = candies.size();
    int Biggest = candies[0];
    for (int i = 0; i < size_vector; i++) {
        if (Biggest < candies[i]) {
            Biggest = candies[i];
        }
    }
    cout << "Output: ";
    for (int i = 0; i < size_vector; i++) {
        if (Biggest <= candies[i] + extraCandies) {
            result.push_back(true);
        }
        else
            result.push_back(false);
        cout << result[i];
    }

    return result;
}
