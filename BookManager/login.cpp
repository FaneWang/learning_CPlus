#include <iostream>
#include <string>
#include <fstream>
#include "User.h"
using namespace std;

void login() {
	int id;
	char name[20];
	cout << "请输入系统管理员编号：";
	cin >> id;
	cout << "请输入系统管理员姓名：";
	cin >> name;
	// 创建一个超级管理员对象并初始化，离开本函数这个对象就销毁了
	User superManager(id, name);
	// 将创建的超级管理员对象持久化到本地文件中，后续验证身份时，读取该文件进行验证，
	ofstream os("login.txt", ios_base::out);
	if (!os)
	{
		cout << "open file error!\n";
		exit(1);
	}
	os.write((char*)&superManager, sizeof(User));
	os.close();
	cout << "系统初始化成功，请按任意键继续。。。";
	cin.get();
	cin.get();
}

// 反持久化
void testRead() {
	User user;
	ifstream is("login.txt", ios_base::in);
	is.read((char*)&user, sizeof(User));
	is.close();
	//可以拿到对象
	char* name = user.getName();
	cout << "id是:" << name[1] << endl;
}