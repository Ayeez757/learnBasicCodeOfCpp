#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int num;
	int boolean = 0;
	scanf("%d", &num);
	for (int i = 2;i < num;i++) {
		for (int j = 2;j < num;j++) {
			if (i * j == num) {
				boolean++;
			}
		}
	}
	if (boolean) {
		printf("不是质数");
	}
	else {
		printf("是质数");
	}
}