#include<stdio.h>

int main()
{
	int a, b, c, d, e, sum;
	printf("�п�J�C�Ѧ�p���{\n");
	scanf_s("%d", &a);
	printf("�п�J�C���ɨT�o������\n");
	scanf_s("%d", &b);
	printf("�п�J�C���ɨT�o��p���{��\n");
	scanf_s("%d", &c);
	printf("�п�J�C�Ѫ��L���O\n");
	scanf_s("%d", &d);
	printf("�п�J�C�Ѫ������O\n");
	scanf_s("%d", &e);
	sum = a + b + c + d + e;
	printf("�C�Ѫ���O�`�X��%d,�ھڨC�H�C�Ѥu�@�a�I�����P,�i�Ѧ@�������W�����C���ǥѦ@���i�H�ѤU�h�ֿ�\n", sum);
	system("pause");
	return 0;
}