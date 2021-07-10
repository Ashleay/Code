#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	//time complexity is O(n^2)
    vector<int> twoSum(vector<int>& nums, int target) 
    {
    	int len = nums.size();
    	vector<int> ret(2); // initialized with 2 elements.

    	for (int i=0; i<(len-1); i++)
    	{
    		for (int j=i+1; j<len; j++)
	    	{
	    		if (target == nums[i] + nums[j])
	    		{
	    			ret[0] = i;
	    			ret[1] = j;
	    			return ret;
	    		}
	    	}
    	}
    	return ret;
    }
};

int main()
{
	Solution sol;
	vector<int> input{3,3}; // must be compiled with at least c++11.
	int target = 6;

	vector<int> output(2);
	output = sol.twoSum(input, target);
	std::cout << "[" << output[0] << "," << output[1] << "]" << std::endl;

	return 0;
}