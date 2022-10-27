// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{

	int num[20] = { 0 };
	int a1, d;
	int sum, product;
	int i = 0;
	for (a1 = 1; a1 <= 5; a1++)//求出a1 和d;
	{
		for (d = 1; d <= 5; d++)
		{
			sum = 4 * a1 + 6 * d;
			product = a1 * (a1 + d) * (a1 + 2 * d) * (a1 + 3 * d);
			if (sum == 26 && product == 880)
				break;
		}
		if (sum == 26 && product == 880)
			break;

	}


	for (int i = 0; i < 20; ++i)//将数列录入数组
	{
		num[i] = a1 + i * d;

	}
	for (int m = 0; m < 4; m++)//输出数组
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%4d", num[i]);
			i++;

		}
		printf("\n");
	}
	return 0;
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
