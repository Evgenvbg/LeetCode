// Removeelement.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val)
    {
        //if (nums.size() == 0) return 0;
        int valid_nums = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != nums[val])
            {
                nums[i] = nums[valid_nums];
                return valid_nums++;
            }


        }
        return valid_nums;


        for (int i = 0; i < nums.size(); i++) {
            std::cout << nums[i];
        }
    }
};

int main()
{
    std::vector<int> vec{ 0,2,2,3,3,4 };
    Solution a;
    int num = 2;
    std::cout << a.removeElement(vec, num);
}