#include <iostream>
#include <string>
#include <fstream>
#include "User.h"
using namespace std;

void login() {
	int id;
	char name[20];
	cout << "������ϵͳ����Ա��ţ�";
	cin >> id;
	cout << "������ϵͳ����Ա������";
	cin >> name;
	// ����һ����������Ա���󲢳�ʼ�����뿪��������������������
	User superManager(id, name);
	// �������ĳ�������Ա����־û��������ļ��У�������֤���ʱ����ȡ���ļ�������֤��
	ofstream os("login.txt", ios_base::out);
	if (!os)
	{
		cout << "open file error!\n";
		exit(1);
	}
	os.write((char*)&superManager, sizeof(User));
	os.close();
	cout << "ϵͳ��ʼ���ɹ����밴���������������";
	cin.get();
	cin.get();
}

// ���־û�
void testRead() {
	User user;
	ifstream is("login.txt", ios_base::in);
	is.read((char*)&user, sizeof(User));
	is.close();
	//�����õ�����
	char* name = user.getName();
	cout << "id��:" << name[1] << endl;
}