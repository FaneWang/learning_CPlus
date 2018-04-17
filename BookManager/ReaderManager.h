#pragma once
#ifndef ReaderManager_H
#include <vector>
#include "Reader.h"
using namespace std;
class ReaderManager {
private:
	vector<Reader> vc;
	int sum;
public:
	ReaderManager() ;
	~ReaderManager() ;
	void addReader();
	void delReader();
	void editReader();
	int findReader(int num);
	int findReader();
	void listReaders();

};
#endif // !ReaderManager_H
