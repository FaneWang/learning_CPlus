#pragma once
#ifndef Book_H

class Book {
public:
	Book();
	Book(int id, char na[]);
	void setBookId(int id);
	void setName(char na[]);
	void setIsBorr(bool isB);
	void setIsExist(bool isE);
	int getBookId();
	char *getName();
	bool getIsBorr();
	bool getIsExist();
private:
	int bookId;
	char name[50];
	bool isBorr;
	bool isExist;
};
#endif // !Book_H
