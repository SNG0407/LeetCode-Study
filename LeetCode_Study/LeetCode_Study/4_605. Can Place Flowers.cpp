#include <iostream>
//#include <string>
#include <vector>
using namespace std;

//My code
class solution {
	//solution solution();
public:

	bool canPlaceFlowers(vector<int>& flowerbed, int n) {
		//cout << "asd";
		bool Check = false;
		int howManyZero = 1;
		int PossibleFlowerN = 0;
		// 10000010010001 100000001
		// 001
		// 1000100
		// 0 이 3개면 1개, 5개면 2개, 7개면 3개
		//연속되는 0이 몇개인지 체크
		for (int i = 0; i < flowerbed.size(); i++) {
			//flower == 0 ? howManyZero++ : 0;
			if (flowerbed[i] == 0) {
				howManyZero++;
				cout << "Zero: " << howManyZero << endl;
				if (i == flowerbed.size() - 1) {
					howManyZero++;
					if (howManyZero >= 3) {
						PossibleFlowerN = PossibleFlowerN + (howManyZero - 1) / 2;
					}
				}
			}
			else {
				/*if (i == flowered.size() - 1)
					howManyZero++;*/
				if (howManyZero >= 3) {
					//cout << "PossibleFlowerN: " << PossibleFlowerN << endl;
					//cout << "(howManyZero-1) / 2: " << (howManyZero - 1) / 2 << endl;
					PossibleFlowerN = PossibleFlowerN + (howManyZero - 1) / 2;
					//cout << "Possible Flower: " << PossibleFlowerN << endl;
				}
				howManyZero = 0;
			}
		}
		PossibleFlowerN >= n ? Check = true : Check = false;
		return Check;
	}

};
int main() {
	solution myCode;
	vector<int> flowered = { 1, 0, 0, 0, 1 };
	vector<int> flowered2 = { 0, 0, 1, 0, 1 };
	vector<int> flowered3 = { 0, 0, 1, 0, 0 };
	vector<int> flowered4 = { 1, 0, 0, 0, 0, 1 };
	cout << myCode.canPlaceFlowers(flowered, 1) << endl;
	cout << myCode.canPlaceFlowers(flowered2, 1) << endl;
	cout << myCode.canPlaceFlowers(flowered3, 2) << endl;
	cout << myCode.canPlaceFlowers(flowered4, 2) << endl;
}

//Solution
class Solution {
public:
	bool canPlaceFlowers(vector<int>& flowerbed, int n) {
		if (n == 0) {
			return true;
		}
		for (int i = 0; i < flowerbed.size(); i++) {
			if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
				flowerbed[i] = 1;
				n--;
				if (n == 0) {
					return true;
				}
			}
		}
		return false;
	}
};