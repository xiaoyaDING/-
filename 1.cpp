// 1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

float f(int n, int x)
{
		float z;
		if (n == 0)
			return 1;
		else if (n == 1)
			return x;
		else if (n > 1)
			z = ((2 * n - 1) * x - f(n - 1, x) - (n - 1) * f(n - 2, x)) / n;
		return z;
}

int main()
	{
		int n_, x_;
		float num;
		printf("输入n\n");
		scanf_s("%d", &n_);
		printf("输入x\n");
		scanf_s("%d", &x_);
		num = f(n_, x_);
		printf("%lf", num);
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
