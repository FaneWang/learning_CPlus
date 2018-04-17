#include <iostream>
using namespace std;
void sysMenu() {
	cout << "******欢迎使用图书管理系统******" << endl;
	cout<<endl;
	cout << " ******请选择您的身份   ******"<<endl;
	cout << " ******1、系统管理员    ******" << endl;
	cout << " ******2、图书管理员    ******" << endl;
	cout << " ******3、系统登录      ******" << endl;
	cout << " ******4、退出系统      ******" << endl;
	cout << endl;
	cout << "******请选择数字：" << endl;
}

void sysManage() {
	cout << "******系统管理界面******" << endl;
	cout << endl;
	cout << "*                     *" << endl;
	cout << "*    （1）用户管理    *" << endl;
	cout << "*    （2）图书管理    *" << endl;
	cout << "*    （3）退    出    *" << endl;
	cout << endl;
	cout << "******系统管理界面******" << endl;

}


void bookManage() {
	cout << "|---------------------|" << endl;
	cout << "|    图书维护         |" << endl;
	cout << "|   (1)增加图书       |" << endl;
	cout << "|   (2)更改图书       |" << endl;
	cout << "|   (3)删除图书       |" << endl;
	cout << "|   (4)查找图书       |" << endl;
	cout << "|   (5)显示图书       |" << endl;
	cout << "|   (6)返回上一层     |" << endl;
	cout << "|---------------------|" << endl;
}

void readerManage() {
	cout << "|------------------------------|" << endl;
	cout << "|    读者维护        |" << endl;
	cout << "|   (1)增加读者       |" << endl;
	cout << "|   (2)更改读者       |" << endl;
	cout << "|   (3)删除读者       |" << endl;
	cout << "|   (4)查找读者       |" << endl;
	cout << "|   (5)显示读者       |" << endl;
	cout << "|   (6)返回上一层     |" << endl;
	cout << "|------------------------------|" << endl;
}

void borrowAndBack()  //借还书
{
	cout << "******欢迎使用图书管理系统******" << endl;
	cout << endl;
	cout << "******请选择您的操作      ******" << endl;
	cout << "****** 1   借书管理       ******" << endl;
	cout << "****** 2   还书管理       ******" << endl;
	cout << "****** 3   返回上一层     ******" << endl;
	cout << "********************************" << endl;
	cout << endl;
}