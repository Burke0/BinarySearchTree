/*
 * Tree.h
 *
 *  Created on: Dec 4, 2019
 *      Author: J. Alex Burke
 */

#ifndef TREE_H_
#define TREE_H_
#include "List.h"
#include <string>
struct TreeNode
{
	string engWord;
	List latinWords;
	TreeNode* left;
	TreeNode* right;
};

class Tree {
public:
	TreeNode* root;
	Tree();
	void insertBST(TreeNode* &root, string engWord, string latinWord);
	void displayTree(TreeNode* root);
	void destroyTree(TreeNode* root);
};

#endif /* TREE_H_ */
