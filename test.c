#include <stdio.h>
#include <stdlib.h>

int main(){
	//int a = 10;// ���ڴ��п���һ��ռ�
	//int* p = &a;// �������ǶԱ���a, ȡ�����ĵ�ַ, ����ʹ�ò�����.
	//			 �� a �ĵ�ַ����� p ������, p ����һ��ָ�����
	//			 ָ����Ǳ���, ������ŵ�ַ�ı���


	//int n = 10;
	//// ��ʱ�� p ��һ��Ұָ��,�������Ұָ�������,��û��
	//char* pc = (char*)&n;
	//int* pi = &n;

	//printf("%p\n", &n);
	//printf("%p\n", &pc);
	//printf("%p\n", &pc + 1);
	//printf("%p\n", &pi);
	//printf("%p\n", &pi + 1);
	// %p ��ר��������ӡָ���,
	//int n = 0x11223344;
	//char* pc = (char*)&n;
	//int* pi = &n;
	//*pc = 0;
	//*pi = 0;// �ص��ڵ��ԵĹ����й۲��ڴ�ı仯
	//printf("%d\n", &pi);
	//printf("%p\n", &pc);
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);//��������������Ԫ�صĵ�ַ��һ����
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//int* p = arr;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (int i = 0; i < sz; i++){
	//printf("&arr[%d] = %p <====> p + %d = %p\n",i, &arr[i], i, p + i);
	//// p + i ��ʵ����������� arr �±�Ϊ i �ĵ�ַ.
	//}
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++){
		printf("%d ", *(p + i));// ��ָ���������
	}
	system("pause");
	return 0;

}