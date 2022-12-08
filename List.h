/*
 * List.h
 *
 *  Created on: Dec 4, 2019
 *      Author: J. Alex Burke
 */

#include<string>

using namespace std;
struct ListNode{
	string word;
	ListNode *next;
};

class List{
	private:
	ListNode* pHead;
	public:
	List();
	void addAtEnd(string s);
	void print();
	bool deleteFirst();
	void deleteAll();
};
