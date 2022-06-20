// 插入排序：将下个待排元素插入到指定位置，找位置可用普通遍历，也可二分查找

#include <iostream>
#include <vector>
using namespace std;

void insertSort(vector<int> &nums, int n);
void binaryInsertSort(vector<int> &nums, int n);

int main()
{
    vector<int> v = {2, 4, 3, 0, 8, 5, 2};
    // insertSort(v, v.size());
    binaryInsertSort(v, v.size());
    for(auto a:v)
    {
        cout << a << " ";
    }
    cout << endl;
}

void insertSort(vector<int>&nums, int n)
{
    if(n<=1)
        return;
    for (int i = 1; i < n; ++i)
    {
        int value = nums[i];
        int j = i - 1;
        for (; j >= 0; --j)
        {
            if(nums[j]>value)
            {
                nums[j + 1] = nums[j];
            }
            else
            {
                break;
            }
        }
        nums[j + 1] = value;
    }
}

void binaryInsertSort(vector<int>&nums, int n)
{
    if(n<=1)
        return;
    for (int i = 1; i < n; ++i)
    {
        int value = nums[i];
        int l = 0, r = i - 1;
        while(l<=r)
        {
            int mid = l + (r - l) / 2;
            if(nums[mid]>value)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        for (int j = i - 1; j >= r + 1; --j)
        {
            nums[j + 1] = nums[j];
        }
        nums[r + 1] = value;
    }
}