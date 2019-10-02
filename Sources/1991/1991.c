/**
 *  BOJ 1991번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,120 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct BinaryTreeNode{
	char data;
	int is_root;
	struct BinaryTreeNode *left,*right;
}BinaryTreeNode;

typedef struct BinaryTreeType{
	int count;
	BinaryTreeNode *root;
	BinaryTreeNode *nodes;
}BinaryTreeType;

void insert_binary_tree_node(BinaryTreeType*,char,char,char);
void get_root(BinaryTreeType*);
void preorder_tree(BinaryTreeNode*);
void inorder_tree(BinaryTreeNode*);
void postorder_tree(BinaryTreeNode*);

int main(void){
	BinaryTreeType tree;
	int N;
	int i;
	char parent[2],left[2],right[2];
	scanf("%d",&N);
	tree.nodes=(BinaryTreeNode*)calloc(N,sizeof(BinaryTreeNode));
	tree.root=NULL;
	tree.count=0;
	for(i=0;i<N;i++){
		scanf("%s %s %s",parent,left,right);
		insert_binary_tree_node(&tree,parent[0],left[0],right[0]);
	}
	get_root(&tree);
	preorder_tree(tree.root);
	puts("");
	inorder_tree(tree.root);
	puts("");
	postorder_tree(tree.root);
	puts("");
	return 0;
}

void insert_binary_tree_node(BinaryTreeType *tree,char parent,char left,char right){
	BinaryTreeNode *f_node=NULL;
	BinaryTreeNode *l_node=NULL;
	BinaryTreeNode *r_node=NULL;
	int i;
	for(i=0;i<tree->count;i++){
		if(tree->nodes[i].data==parent){
			f_node=&tree->nodes[i];
		}else if(tree->nodes[i].data==left){
			l_node=&tree->nodes[i];
			tree->nodes[i].is_root=0;
		}else if(tree->nodes[i].data==right){
			r_node=&tree->nodes[i];
			tree->nodes[i].is_root=0;
		}
	}
	if(f_node==NULL){
		int cnt=tree->count;
		tree->nodes[cnt].data=parent;
		tree->nodes[cnt].left=tree->nodes[cnt].right=NULL;
		tree->nodes[cnt].is_root=1;
		f_node=&tree->nodes[cnt];
		tree->count++;
	}
	if(l_node==NULL&&left!='.'){
		int cnt=tree->count;
		tree->nodes[cnt].data=left;
		tree->nodes[cnt].is_root=0;
		tree->nodes[cnt].left=tree->nodes[cnt].right=NULL;
		l_node=&tree->nodes[cnt];
		tree->count++;
	}
	if(r_node==NULL&&right!='.'){
		int cnt=tree->count;
		tree->nodes[cnt].data=right;
		tree->nodes[cnt].is_root=0;
		tree->nodes[cnt].left=tree->nodes[cnt].right=NULL;
		r_node=&tree->nodes[cnt];
		tree->count++;
	}
	f_node->left=l_node;
	f_node->right=r_node;
}

void get_root(BinaryTreeType *tree){
	int i;
	for(i=0;i<tree->count;i++){
		if(tree->nodes[i].is_root){
			tree->root=&tree->nodes[i];
			break;
		}
	}
}

void preorder_tree(BinaryTreeNode *node){
	if(node){
		putchar(node->data);
		preorder_tree(node->left);
		preorder_tree(node->right);
	}
}

void inorder_tree(BinaryTreeNode *node){
	if(node){
		inorder_tree(node->left);
		putchar(node->data);
		inorder_tree(node->right);
	}
}

void postorder_tree(BinaryTreeNode *node){
	if(node){
		postorder_tree(node->left);
		postorder_tree(node->right);
		putchar(node->data);
	}
}