/*
 * List.cpp
 *
 *  Created on: Dec 4, 2019
 *      Author: J. Alex Burke
 */

#include "List.h"
#include <string>
#include<iostream>
using namespace std;
List::List(){//initialize a List
	pHead=new ListNode();
	pHead=NULL;
}

void List::addAtEnd(string s){
	if(pHead==NULL){
		ListNode* pNew=new ListNode();
		pNew->word=s;
		pNew->next=NULL;
		pHead=pNew;
		pNew=NULL;
	}
	else{
		ListNode* pNew;
		pNew=pHead;
		while(pNew->next!=NULL){
			pNew=pNew->next;
		}
		pNew->next=new ListNode();
		pNew->next->word=s;
		pNew->next->next=NULL;
		pNew=NULL;
	}
}

void List::print(){
	ListNode* pWalker;
	pWalker=pHead;
	while(pWalker!=NULL){
		cout<<pWalker->word+" ";
		pWalker=pWalker->next;
	}
	pWalker=NULL;
}

bool List::deleteFirst(){
	if(pHead==NULL)
		return false;
	else{
		ListNode* pTemp=new ListNode();
		pTemp=pHead;
		pHead=pHead->next;
		delete pTemp;
	}
	return true;
}
void List::deleteAll(){
	while(deleteFirst());
}
