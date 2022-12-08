/*
 * Tree.cpp
 *
 *  Created on: Dec 4, 2019
 *      Author: J. Alex Burke
 */

#include "Tree.h"
#include <iostream>

Tree::Tree(){
	root=NULL;
}

void Tree::insertBST(TreeNode* &root, string engWord, string latinWord){
	if(root==NULL)
	{
		TreeNode* temp= new TreeNode();
		temp->engWord=engWord;
		temp->latinWords.addAtEnd(latinWord);
		root=temp;
		root->right=root->left=NULL;
		temp=NULL;
	}
	else if(engWord==root->engWord)
		root->latinWords.addAtEnd(latinWord);
	else if(engWord.compare(root->engWord)<0)//engWord<root->engWord)
		insertBST(root->left, engWord, latinWord);
	else
		insertBST(root->right, engWord, latinWord);
}

void Tree:: displayTree(TreeNode* root){
	if(root==NULL)
		return;
	displayTree(root->left);
	cout<<root->engWord+": ";
	root->latinWords.print();
	cout<<endl;
	displayTree(root->right);
}

void Tree:: destroyTree(TreeNode* root){
	if(root==NULL)
		return;
	destroyTree(root->left);
	destroyTree(root->right);
	root->latinWords.deleteAll();
	free(root);
}
