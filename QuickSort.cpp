// 快速排序：设置枢轴，再二分

#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int> &nums, int l, int r);

int main()
{
    vector<int> v = {2, 4, 3, 0, 8, 5, 2};
    quickSort(v, 0, v.size());
    for(auto a:v)
    {
        cout << a << " ";
    }
    cout << endl;
}

void quickSort(vector<int>&nums, int l, int r)
{
    if(l+1>=r)
    {
        return;
    }
    int first = l, last = r - 1, key = nums[first];
    while(first<last)
    {
        while(first<last && nums[last] >= key)
        {
            --last;
        }
        nums[first] = nums[last];
        while(first<last && nums[first] <= key)
        {
            ++first;
        }
        nums[last] = nums[first];
    }
    nums[first] = key;
    quickSort(nums, l, first);
    quickSort(nums, first + 1, r);
}