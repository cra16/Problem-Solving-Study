#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100] = { 0 };
	int t = 0;
	int m, n;
	scanf("%d\n%d", &m, &n);
	int i;
	int a;
	int flag = 0;
	for (i = m; i <= n; i++)
	{
		for (a = 2; a < i; a++)
		{
			if (i%a == 0)
			{
				flag = 0;
				break;
			}
			else
			{
				flag = 1;
				
			}
		}
		if (flag == 1)
		{
			arr[t] = i;
			t++;
		}
	}
	int len = strlen(arr);
	if (len == 0)
	{
		printf("-1");
		return 0;
	}
	int sum = 0;
	int x;

	for (x = 0; x < len; x++)
	{
		sum += arr[x];
	}

	printf("%d %d", sum, arr[0]);
	return 0;

}
