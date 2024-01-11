#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Time Limit Exceeded
class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> result;
		//result.resize(nums.size(),1);
		
		//-1 7 4 5 6 1 3
		for (int i = 0; i < nums.size();i++) {
			int out = 1;
			int left = 0;
			int right = nums.size() - 1;
			while (left <= right) 
			{
				if (i != left && left != right) {
					out *= nums[left];
				}
				if (i != right ) {
					out *= nums[right];
				}
					left++;
					right--;
			}
			result.push_back(out);
		}
		
		for (int num : result) {
			cout << num << endl;
		}

		return result;
	}
};

int main() {
	Solution myCode;
	vector<int> nums = { 1,2,3,4 };
	vector<int> nums2 = { 1,2,3};
	//cout << myCode.productExceptSelf(nums) << endl;
	myCode.productExceptSelf(nums2);

}