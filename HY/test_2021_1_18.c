#include <stdio.h>
int main(){
	int arr[10] = { 0 };
	int max = 0;//定义一个max变量，用来和数组里每一个数比大小 
	while (scanf("%d",&arr) != EOF)
	{
		for (int i = 0; i<sizeof(arr) / sizeof(arr[0]); i++){
			if (max<arr[i])//每当max小于数组里某一个数时就把这个数赋值给max
			{ 
				max = arr[i];
			}
		}
	}
	
	printf("%d", max);
	return 0;
}