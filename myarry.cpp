#include<iostream>
using namespace std;
#include"myarray.hpp"
void test()
{
	myarray<int>arr1(5);
	myarray<int>arr2(arr1);
	myarray<int>arr3(100);
	arr3 = arr1;
}
int main()
{
	test();
	return 0;
}
