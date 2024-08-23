#include <stdio.h>
int main()
{
    int nums[] = {2, 7, 11, 15};
    int ns = 4;
    int target = 9;
    int resuit[2];
    for (int i = 0; i < ns; i++)
    {
        int n = target - nums[i];
        for (int j = i + 1; j < ns; j++)
        {
            if (n == nums[j])
            {
                resuit[0] = i;
                resuit[1] = j;
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%d ",resuit[i]);
    }
    
}