// 11.18.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define studentnum 4
#define score 5
/* 返回第courseIdx门课的平均成绩 */
float avgCourse(float(*pscore)[5], int studentNum, int course) 
{
	float num = 0, avg = 0;
	for (int i = 0; i < studentNum; i++)
	{
		num += * (*(pscore + i) + course);
	}
	avg = num / 4;
	return avg;
}
/* 返回某一学生的平均成绩 */
float avgStudent(float* pstudentscore, int student)
{
	float gscore=0,avg=0;
	for (int i = 0; i < 5; i++)
	gscore +=  *(pstudentscore  + i);
	avg = gscore / 5;
	return avg;
}

/* 返回某一学生的最低成绩 */
float lowbdStudent(float* pstudentscore, int student)
{
	float min=*(pstudentscore);
	float tmp;
	for (int i = 1; i < 5; i++) 
	{
		if (*(pstudentscore + i) < min)
		{
			min = *(pstudentscore + i);
		}
	}
	return min;
}

/* 返回某一学生的不及格成绩个数 */
int failNumStudent(float* p, int student)
{
	int low=0;
	for (int i = 0; i < 5; i++)
	{
		if (*(p + i) < 60)
			low++;
	}
	return low;
}
/* 输出第studentIdx个学生的成绩 */
void priScore(float(*pScore)[5], int studentidx)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%5.2f\t", *(*(pScore + studentidx) + i));

	}
}

int main()
{
	float a[studentnum][score] = { {78 ,85, 96, 25, 45},{65,89,87,98,97},{99,98,97,94,94},{89,92,86,87,86} };
	float* p; int i;
	float courseavg;
	int lownum,studentid;
	float avgscore,lowest;

	courseavg = avgCourse(a, 4, 0);
	printf("第一门课的平均成绩是%5.2f\n", courseavg);
	for (int m = 0; m < 4; m++)
	{
		p =*(a + m);
		lownum = failNumStudent(p, m);
		if (lownum >= 2)
		{   studentid = m + 1;
			printf("有两门以上课程不及格的学生学号为%d\n",studentid);
			printf("全部课程成绩为\n");
			priScore(a, m);
			avgscore = avgStudent(p, m);
			printf("\n平均成绩是%5.2f\n",avgscore);
			

		}
	}
	
	for (int n = 0; n < 4; n++)
	{
		p = *(a + n);
		avgscore = avgStudent(p, n);
		lowest = lowbdStudent(p, n);
		if (avgscore>90||lowest > 85)
		printf("平均分大于90或所有成绩大于85的学生学号是%d\n", n + 1);
		
	}
}

//int main()
//{
//	int a[100];
//	a[0] = 0;
//	for (int i = 1; i < 100; i++) {
//		a[i] = a[i - 1] + rand() % 10;
//	}
//	int star = 0, end = 100;
//	int i = 0;
//	while (star<=end)
//	{    i = (star+end) / 2;
//		if (a[i] > 15)
//		{
//			end=i-1;
//		}
//		else if (a[i] < 15) {
//			star =i+1 ;
//		}
//		else if (a[i] == 15)
//		{
//			break;
//		}
//	}
//	if (star <= end)
//		printf("存在元素15");
//	else
//		printf("不存在元素15")
//	
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
