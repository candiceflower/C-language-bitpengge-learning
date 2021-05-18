#include <stdio.h>
#include <math.h>
//打印100-200年之间的质数
//个人做法
/*int main() {
	int num = 100, t, one;
	for (; num <= 200; num++) {
		for (t = num / 2; t>=2 ; t--) {
			if (num % t == 0) {
				one = 0;
				break;
			}
			else {
				one = 1;
			}
		}
		if (one == 1) {
			printf("%d ", num);
		}
	}
	return 0;
}*/

//老师做法
int main() {
	/* 1.试除法  */
	  /*int num = 100,t;
	  for (; num <= 200; num++) {
		  for (t = 2; t < num; t++) {
			  if (num % t == 0)
				  break;
		  }
		  if (t == num)
			  printf("%d ", num);
	  }*/
	  /* 1.开平方法  */
	int num = 101, t, p;
	for (; num <= 200; num += 2) { //由于偶数是不可能是质数的，所有我们可以直接跳过偶数
		for (t = 2, p = sqrt(num); t <= p; t++) {
			if (num % t == 0) {
				break;
			}
		}
		if (t > p)
			printf("%d ", num);
	}
	return 0;
}