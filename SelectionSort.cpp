// 选择排序：从未排序部分中选择最小的值，加入已排序部分末尾

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &nums, int n);

int main()
{
    vector<int> v = {2, 4, 3, 0, 8, 5, 2};
    selectionSort(v, v.size());
    for(auto a:v)
    {
        cout << a << " ";
    }
    cout << endl;
}

void selectionSort(vector<int>&nums, int n)
{
    int min = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        min = i;
        for (int j = i + 1; j < n; ++j)
        {
            if(nums[j]<nums[min])
            {
                min = j;
            }
        }
        swap(nums[min], nums[i]);
    }
}