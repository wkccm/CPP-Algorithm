// 冒泡排序：将未排序部分的最大值逐渐交换至端部

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &nums, int n);

int main()
{
    vector<int> v = {2, 4, 3, 0, 8, 5, 2};
    bubbleSort(v, v.size());
    for(auto a:v)
    {
        cout << a << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int>&nums, int n)
{
    bool swapped;
    for (int i = 1; i < n; ++i)
    {
        swapped = false;
        for (int j = 1; j < n + 1 - i; ++j)
        {
            if(nums[j]<nums[j-1])
            {
                swap(nums[j], nums[j - 1]);
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
}