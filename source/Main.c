#include<stdio.h>

int main()
{
	int a, b, c, d, e, sum;
	printf("請輸入每天行駛里程\n");
	scanf_s("%d", &a);
	printf("請輸入每公升汽油的價格\n");
	scanf_s("%d", &b);
	printf("請輸入每公升汽油行駛里程數\n");
	scanf_s("%d", &c);
	printf("請輸入每天的過路費\n");
	scanf_s("%d", &d);
	printf("請輸入每天的停車費\n");
	scanf_s("%d", &e);
	sum = a + b + c + d + e;
	printf("每天的花費總合為%d,根據每人每天工作地點的不同,可由共乘網站上面對比每天藉由共乘可以剩下多少錢\n", sum);
	system("pause");
	return 0;
}