#pragma once
#ifndef User_H

class User {
public:
	User();
	User(int id, const char na[]);
	void setUserId(int id);
	void setName(const char na[]);
	int getUserId();
	char *getName();
	virtual void show();
private:
	int userId;
	char name[20];
};
#endif // !User_H
