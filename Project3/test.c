//数据类型
//计算机语言 - 写程序 - 解决生活问题
//必须有能力来描述生活中问题
//0.156 - 1.56*10^1 - 小数
//C语言 - 浮点数
//10 - 整数
//C语言 - 整型

//a
//'a' - 字符a


//int main()
//{
//	char/*字符类型*/ ch/*自定义变量名*/ = 'a';
//	int/*整型*/ age = 20/*非字符，不需引号*/;
//	short/*短整型*/ num = 10;
//	//long
//	//long long
//	float/*单精度浮点型*/ weight = 55.5;
//	double/*双精度浮点型*/ d = 0.0;
//
//	return 0;
//}

#include <stdio.h> //printf不是能直接使用的指令
int main()
{
	printf("haha\n");
	printf("bit\n");
	printf("%d\n", 100);//%d - 打印一个整数
	printf("%d\n", sizeof/*sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小*/ (char));
	return 0;
}

//计算机中的单位：
//bit - 比特位
//byte - 字节 = 8bit
//kb - 1024byte
//mb - 1024kb
//gb - 1024mb
//tb - 1024gb
//pb - 1024tb 
//计算机中识别二进制
//1  一个数字占一个比特位
//0
//10进制数字组成
//0~9

//printf("%d\n",sizeof(char));       中占1个字节
//printf("%d\n",sizeof(short));      中占2个字节
//printf("%d\n",sizeof(int));        中占4个字节
//printf("%d\n",sizeof(long));       中占4个字节
//printf("%d\n",sizeof(long long));  中占8个字节
//printf("%d\n",sizeof(float));      中占4个字节
//printf("%d\n",sizeof(double));     中占8个字节


//C语言标准：sizeof(long)>=sizeof(int) 选择更准确，利用率会更高
