#include <stdio.h>
#include <stdlib.h>

int main(){
	//int a = 10;// 在内存中开辟一块空间
	//int* p = &a;// 这里我们对变量a, 取出他的地址, 可以使用操作符.
	//			 将 a 的地址存放在 p 变量中, p 就是一个指针变量
	//			 指针就是变量, 用来存放地址的变量


	//int n = 10;
	//// 此时的 p 是一个野指针,如果不对野指针解引用,就没事
	//char* pc = (char*)&n;
	//int* pi = &n;

	//printf("%p\n", &n);
	//printf("%p\n", &pc);
	//printf("%p\n", &pc + 1);
	//printf("%p\n", &pi);
	//printf("%p\n", &pi + 1);
	// %p 是专门用来打印指针的,
	//int n = 0x11223344;
	//char* pc = (char*)&n;
	//int* pi = &n;
	//*pc = 0;
	//*pi = 0;// 重点在调试的过程中观察内存的变化
	//printf("%d\n", &pi);
	//printf("%p\n", &pc);
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);//数组名和数组首元素的地址是一样的
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//int* p = arr;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (int i = 0; i < sz; i++){
	//printf("&arr[%d] = %p <====> p + %d = %p\n",i, &arr[i], i, p + i);
	//// p + i 其实计算的是数组 arr 下标为 i 的地址.
	//}
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++){
		printf("%d ", *(p + i));// 用指针访问数组
	}
	system("pause");
	return 0;

}