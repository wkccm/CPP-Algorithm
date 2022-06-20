// 归并排序：分治思想，二分后排序再合并

#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int> &nums, int l, int r, vector<int>&temp);

int main()
{
    vector<int> v = {2, 4, 3, 0, 8, 5, 2};
    vector<int> temp(v.size(), 0);
    mergeSort(v, 0, v.size(), temp);
    for(auto a:v)
    {
        cout << a << " ";
    }
    cout << endl;
}

void mergeSort(vector<int>&nums, int l, int r, vector<int>&temp)
{
    if(l+1>=r)
    {
        return;
    }
    int mid = l + (r - l) / 2;
    mergeSort(nums, l, mid, temp);
    mergeSort(nums, mid, r, temp);

    int p = l, q = mid, i = l;
    while(p<mid||q<r)
    {
        if(q>=r || (p<mid && nums[p]<=nums[q]))
        {
            temp[i++] = nums[p++];
        }
        else
        {
            temp[i++] = nums[q++];
        }
    }
    for (int i = l; i < r; ++i)
    {
        nums[i] = temp[i];
    }
}
