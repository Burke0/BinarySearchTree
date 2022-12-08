/*
 * BSTMain.cpp
 *
 *  Created on: Dec 4, 2019
 *      Author: J. Alex Burke
 */
#include "Tree.h"
#include<fstream>
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main(){
	string latinWordTemp, engWordTemp, line;
	Tree tree;
	ifstream in;
	in.open("latin.txt");

	while(in.peek()!=EOF){
		getline(in,latinWordTemp,':');
		in.get();
		getline(in, line);
		istringstream ss(line);
	
		while(getline(ss, engWordTemp, ',')){
			ss.get();
			tree.insertBST(tree.root, engWordTemp, latinWordTemp);
		}
	}
	tree.displayTree(tree.root);
	in.close();
	tree.destroyTree(tree.root);
	return 0;
}

