#include <iostream>
#include <vector>


int main()
{
    int temp = 0;
    std::vector<int> nums;
    std::cout << "To Quit, enter a character.\nEnter the numbers: ";
    while (std::cin >> temp){
        nums.push_back(temp);
    }

    for (int i = 0; i < nums.size(); i++){
        for (int j = i + 1; j < nums.size(); j++){
            if (nums[j] < nums[i]) std::swap(nums[j], nums[i]);
        }
    }
    std::cout << "Bubble sorted list" << std::endl;
    for (auto c: nums){
        std::cout << c << ", ";
    }

    return 0;
}