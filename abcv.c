#include <stdio.h>
int f1()
{
	float time, num;
	float v, k1, k2, k3;
	scanf("%f %f %f %f", &k1, &k2, &k3, &v);
	num = k1 * v * k2 * k3;
	time = 100 / num;
	time = ((int)(time * 100 + 0.5) / 100.0);
	printf("%f\n", time);
	if (time >= 9.580000)
	{
		return 0;
	}
	else
		return 1;
}

int main()
{
	int T;
	int arr[T];
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		arr[i] = f1();
	}
	for (int i = 0; i<T; i++){
		if (arr[i] == 1)
		{
			printf("YES\n");
		}
		else
			printf("NO\n");

	}
	return 0;
}