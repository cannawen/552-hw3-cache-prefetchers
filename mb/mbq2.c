
#include <stdio.h>

main(){
	int A[100000];
	int i;
	for(i=0;i<100000;i++)//for a very large number
	{
		if(i%10==0 && (i+1000)<10000)//every so often
			A[i+1000]++;//modify something far away
		A[i]++;//but usually, just modify linearly
	}
}
