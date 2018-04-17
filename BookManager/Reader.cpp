#include "Reader.h"
#include <string>

Reader::Reader(){}
Reader::Reader(int id, char na[]) :User(id, na) {
	isExist = 1;
	isBorrowing = false;
}

void Reader::setBook(Book bk) {
	book = bk;
}

void Reader::setIsExist(bool isE) {
	isExist = isE;
}

void Reader::setIsBorrowing(bool isB) {
	isBorrowing = isB;
}

Book Reader::getBook() {
	return book;
}

bool Reader::getIsBorrowing() {
	return isBorrowing;
}

bool Reader::getIsExist() {
	return isExist;
}

//后面在进行编写
void Reader::show() {

}