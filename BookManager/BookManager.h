#pragma once
#ifndef BookManager_H
#include <vector>
#include "Book.h"
using namespace std;
class BookManager {
private:
	vector<Book> vc;
	int sum;
public:
	BookManager() ;
	~BookManager() ;
	void addBook();
	void delBook();
	void editBook();
	int findBook(int num);
	int findBook();
	void listBooks();

};
#endif // !BookManager_H
