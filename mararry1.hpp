#include<iostream>
using namespace std;
#include"myarray.hpp"
void printarray(myarray<int>&arr)
{
	for (int i = 0; i <arr.getsize();i++)
	{
		cout << arr[i] << endl;
	}
}
void test()
{
	myarray<int>arr1(5);
	///*myarray<int>arr2(arr1);
	//myarray<int>arr3(100*/);
	//arr3 = arr1;
	for (int i = 0; i < 5; i++)
	{
		arr1.push_back(i);
	}
	cout << "arr1的打印输出" << endl;
	printarray(arr1);
	myarray<int>arr2(arr1);
	cout << "arrl容量" << arr1.getcapacity() << endl;
	cout << "arr2的打印输出" <<arr1.getsize()<< endl;
	printarray(arr2);
	arr2.pop_back();
	cout << "arrl容量" << arr1.getcapacity() << endl;
	cout << "arr2的打印输出" <<arr2.getsize()<< endl;

}
class person
{
public:
	person()
	{};
	person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	string name;
	int age;
};
void printperson(myarray<person>& arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << arr[i].name << arr[i].age << endl;
	}
}
void test2()
{
	myarray<person>arr(10);
	person p1("sas", 11);
	person p2("sas", 11);
	person p3("sas", 11);
	person p4("sas", 11);
	person p5("sas", 11);

	arr.push_back(p1);
	arr.push_back(p2);
	arr.push_back(p3);
	arr.push_back(p4);
	arr.push_back(p5);

	printperson(arr);
}
int main()
{
	test2();
	return 0;
}
