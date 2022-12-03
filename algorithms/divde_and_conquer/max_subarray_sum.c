#include <stdio.h>
#include <limits.h>

int max(int x, int y, int z)
{
	return (x > y ? (x > z ? x : z) : (y > z ? y : z));
}

int	crossing(int *tab, int left, int right, int mid)
{
	int i;
	int sum;
	int maxleft;
	int maxright;

	maxleft = INT_MIN; //intialize this variables with the minimum possible values
	maxright = INT_MIN;
	sum = 0;
	i = mid;
	while (i >= left)
	{
        sum += tab[i];
		if (sum > maxleft)
            maxleft = sum;
		i--;
	}
	sum = 0;
	i = mid + 1;
	while (i <= right)
    {
        sum += tab[i];
		if (sum > maxright)
			maxright = sum;
		i++;
	}
	return (maxleft + maxright);
}

int	max_subarray(int *tab, int left, int right)
{
	int max_left;
	int max_right;
	int max_crossing;
	int mid;

	if (left == right)
		return (tab[left]);
	mid = (left + right) / 2;
	max_left = max_subarray(tab, left, mid);
	max_right = max_subarray(tab, mid + 1, right);
	max_crossing = crossing(tab, left, right, mid);
	return (max(max_crossing, max_left, max_right));
}

int main(void)
{
	int tab[6] = {-1, 3, 4, -5, 9, -2};
	int maxsub = max_subarray(tab, 0, 5);
	printf("%d\n", maxsub);
    return 0;
}