//��������
//��������� - д���� - �����������
//��������������������������
//0.156 - 1.56*10^1 - С��
//C���� - ������
//10 - ����
//C���� - ����

//a
//'a' - �ַ�a


//int main()
//{
//	char/*�ַ�����*/ ch/*�Զ��������*/ = 'a';
//	int/*����*/ age = 20/*���ַ�����������*/;
//	short/*������*/ num = 10;
//	//long
//	//long long
//	float/*�����ȸ�����*/ weight = 55.5;
//	double/*˫���ȸ�����*/ d = 0.0;
//
//	return 0;
//}

#include <stdio.h> //printf������ֱ��ʹ�õ�ָ��
int main()
{
	printf("haha\n");
	printf("bit\n");
	printf("%d\n", 100);//%d - ��ӡһ������
	printf("%d\n", sizeof/*sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ�Ĵ�С*/ (char));
	return 0;
}

//������еĵ�λ��
//bit - ����λ
//byte - �ֽ� = 8bit
//kb - 1024byte
//mb - 1024kb
//gb - 1024mb
//tb - 1024gb
//pb - 1024tb 
//�������ʶ�������
//1  һ������ռһ������λ
//0
//10�����������
//0~9

//printf("%d\n",sizeof(char));       ��ռ1���ֽ�
//printf("%d\n",sizeof(short));      ��ռ2���ֽ�
//printf("%d\n",sizeof(int));        ��ռ4���ֽ�
//printf("%d\n",sizeof(long));       ��ռ4���ֽ�
//printf("%d\n",sizeof(long long));  ��ռ8���ֽ�
//printf("%d\n",sizeof(float));      ��ռ4���ֽ�
//printf("%d\n",sizeof(double));     ��ռ8���ֽ�


//C���Ա�׼��sizeof(long)>=sizeof(int) ѡ���׼ȷ�������ʻ����
