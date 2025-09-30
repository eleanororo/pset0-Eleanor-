#include <iostream>
#include <vector>
#include <iterator>


std::vector<int> targetVector(std::vector<int> nums, std::vector<int> index) {
    std::vector<int> target;

    for (int i=0; i<nums.size(); ++i) {
        int newValue = nums[i];
        int place = index[i];
        target.insert(target.begin()+place, newValue);

    }
    return target;
}


int main() {
    std::vector<int> nums1 = {0,1,2,3,4};
    std::vector<int> index1 = {0,1,2,2,1};
    std::vector<int> result1 = targetVector(nums1, index1);

    std::cout << "Target Vector1: [";
    for (int i=0;i<result1.size(); ++i) {
        std::cout << result1[i];
        if (i<result1.size()-1){
            std::cout << ",";
        }
    }
    std::cout<< "]" << std::endl;

    return 0;
}