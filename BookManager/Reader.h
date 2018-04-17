#pragma once
#ifndef Reader_H
#include "User.h"
#include "Book.h"
class Reader:public User {
private:
	bool isBorrowing;
	bool isExist;
	Book book;
public:
	Reader();
	Reader(int id, char na[]);
	void setIsBorrowing(bool isBoi);
	void setIsExist(bool isE);
	void setBook(Book bk);
	bool getIsBorrowing();
	bool getIsExist();
	Book getBook();
	void show() override;
};
#endif