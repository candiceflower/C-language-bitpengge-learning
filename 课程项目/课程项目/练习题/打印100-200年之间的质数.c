#include <stdio.h>
#include <math.h>
//��ӡ100-200��֮�������
//��������
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

//��ʦ����
int main() {
	/* 1.�Գ���  */
	  /*int num = 100,t;
	  for (; num <= 200; num++) {
		  for (t = 2; t < num; t++) {
			  if (num % t == 0)
				  break;
		  }
		  if (t == num)
			  printf("%d ", num);
	  }*/
	  /* 1.��ƽ����  */
	int num = 101, t, p;
	for (; num <= 200; num += 2) { //����ż���ǲ������������ģ��������ǿ���ֱ������ż��
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