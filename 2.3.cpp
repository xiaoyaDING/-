// 2.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
int prime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			return 0;
			break;
		}
	
	}
	if (j > sqrt(i))
	{
		return 1;
	}
	
}
int h(int x)
{
	int  y, z;
	z = 0;
	y = x;
	while (x > 0)
	{
		z = z * 10 + x % 10;
		x = x / 10;
	}
	if (y == z)
		return 1;
	else
		return 0;

}

int main()
{
	int num = 10000;
	int step;
	for (num; num < 100000; num++)
	{
		step = prime(num) + h(num);
		if (step == 2)
			printf("%d\n", num);
	}

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
