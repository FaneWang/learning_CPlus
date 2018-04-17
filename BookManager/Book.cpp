#include <string>
#include "Book.h"

Book::Book(){}
Book::Book(int id, char na[]) {
	bookId = id;
	strncpy_s(name, na, 50);
}

void Book::setBookId(int id) {
	bookId = id;
}

void Book::setName(char na[]) {
	strncpy_s(name, na, 50);
}

void Book::setIsBorr(bool isB) {
	isBorr = isB;
}

void Book::setIsExist(bool isE) {
	isExist = isE;
}

int Book::getBookId() {
	return bookId;
}

char *Book::getName() {
	return name;
}

bool Book::getIsBorr() {
	return isBorr;
}

bool Book::getIsExist() {
	return isExist;
}