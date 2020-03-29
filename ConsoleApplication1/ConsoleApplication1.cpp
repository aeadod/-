
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
#define random(a,b) (rand() % (b - a + 1)) + a
using namespace std;


int main(void) {
	int i,j; 
	for (j = 0; j < 5; j++) {
		srand(0);
		printf("\n");
		for (i = 0; i < 10; i++)
			printf("%d ", rand());
	}
	return 0;
}


int manli(int*A, int n);
int candidate(int);
int *A;
int n;
int duile = 0;
int wuduoshu = 0;
int youduoshu = 0;
string outt = "该数组中没有多数元素！";
/*int main()
{
	for (int k = 0; k < 500; k++) {
		srand((int)time(0)+k);
		n = random(1,10);
		A = new int[n];
		cout << "第" << k << "次随机生成的数组是：";
		for (int kk = 0; kk < n; kk++) {
			A[kk] = random(0, 5);
			cout << A[kk] << ' ';
		}
		cout << "\n";
		int man = manli(A, n);
		int c, count = 0;
		c = candidate(0);
		for (int j = 0; j < n; j++)
		{
			if (A[j] == c)
				count++;
		}
		if (count > (n / 2))
		{
			if (c == man) {
				duile += 1;
				youduoshu += 1;
			}
		}
		else
			if (man == 99999999) {
				duile += 1;
				wuduoshu += 1;
			}
		delete[] A;
		
	}
	double acc = duile / 500.0;
	cout << "500个数组中存在多数元素的数组个数为："<<youduoshu<<endl;
	cout << "500个数组中不存在多数元素的数组个数为：" << wuduoshu << endl;
	cout <<"函数的准确率为"<< acc*100 <<"%"<< endl;
	return 0;
}

int manli(int *D, int nn) {
	int *B;
	int maxnum = 0;
	int count2 = 0;
	B = new int[nn] {0};
	for (int k = 0; k < nn; k++) {
		int c = D[k];
		for (int j = 0; j < nn; j++) {
			if (c == D[j])
			{
				B[k]++;
			}
		}
	}
	for (int q = 0; q < nn; q++) {
		if (B[q] > B[maxnum]) {
			maxnum = q;
		}
	}
	int cc = D[maxnum];
	for (int j = 0; j < nn; j++)
	{
		if (A[j] == cc)
			count2++;
	}
	if (count2 > (nn/2)) 
	{
		return cc;
	}
	else {
		return 99999999;
	}
}

int candidate(int m)
{
	int j, c, count;
	j = m; c = A[m]; count = 1;
	while (j < n&&count>0)
	{
		j++;
		if (A[j] == c)
			count++;
		else
			count--;
	}
	if (j == n)
		return c;
	else
		return candidate(j + 1);
}
*/