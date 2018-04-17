#include <string>
#include <iostream>
#include "User.h"

User::User(){}
User::User(int id, const char na[]) {
	userId = id;
	strncpy_s(name, na,20);
}

void User::setUserId(int id) {
	userId = id;
}

void User::setName(const char na[]) {
	strncpy_s(name, na,20);
}

int User::getUserId() {
	return userId;
}

char *User::getName() {
	return name;
}

void User::show() {
	std::cout << "用户id：" << userId << "用户名称：" << name;
}
