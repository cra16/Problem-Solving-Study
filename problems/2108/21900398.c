#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	int x;
	char arr[5000];
	for (x = 0; x < n; x++)
	{
		scanf("%d", &arr[x]);
	}
	int len=strlen(arr);//���� ���ϱ� ã��
	//1. sum���ϰ�
	int sum = 0;
	for (x = 0; x < len; x++)
	{
		sum += arr[x];
	}
	//2. sum/N�� ���ϱ�
	printf("%d\n", sum / n);
	//3. arr�� sort
	int a, b;
	for (a = 0; a < len - 1; a++)
	{
		for (b = a + 1; b < len; b++)
		{
			if (arr[a] > arr[b])
			{
				int temp;
				temp = arr[a];
				arr[a] = arr[b];
				arr[b] = temp;

			}
		}
	}
	//4. arr[N/2+1]���
	printf("%d\n", arr[n / 2 ]);
	//5. count�迭�����
	int count[200] = { 0 };
	for (x = 0; x < len; x++)
	{
		count[arr[x]]++;
	}
	//6. count�迭�̿��ؼ� �ֺ�ã��
	int Max = count[0];
	int many;
	for (x = 0; x < len; x++)
	{
		if (count[x] > Max)
		{
			Max = count[x];
			many = x;
		}

	}
	printf("%d\n", many);


	//8. max-min���
	printf("%d", arr[len-1] - arr[0]);


	return 0;
