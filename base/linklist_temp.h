/********************************************************************************
 *      Copyright:  (C) 2023 iot<iot@email.com>
 *                  All rights reserved.
 *
 *       Filename:  myLinkList.h
 *    Description:  This file 
 *
 *        Version:  1.0.0(03/25/23)
 *         Author:  iot <iot@email.com>
 *      ChangeLog:  1, Release initial version on "03/25/23 12:36:11"
 *                 
 ********************************************************************************/

#ifndef _MYLINKLIST_H
#define _MYLINKLIST_H


#include "get_temp.h"

#define	NODE_BUF_LEN		32
#define	NODE_BUF_LONG_LEN	64

typedef char * 		elemType;


//Defines a single linked list node type
typedef struct	Node{
	//char 			serialNumber[NODE_BUF_LEN];
	//char 			date[NODE_BUF_LEN];
	//char 			tempValue[NODE_BUF_LEN];
	//elemType 		element[NODE_BUF_LEN];
	char 			element[NODE_BUF_LONG_LEN];
	struct Node		*next;
} Node;


void 	list_init(Node **pNode);  	   //1. Initializes the linked list
int		list_insert_head(Node **pNode, Temp_str *tempStr, char * element);  //2. Insert a new node from the header
int 	list_insert_tail(Node **pNode, Temp_str *tempStr, char * element);  //3. Insert a new node from the tail
int 	list_drop_head(Node **pNode); //8. Delete the first node
int 	list_drop_tail(Node **pNode); //9. Delete the last node
int 	list_drop_pos(Node *pHead, int pos); //10. Deletes the node with the specified sequence number
int 	list_clear(Node *pHead); 	  //11. Clear linked list
int 	list_isEmpty(Node *pHead); 	  //12. Determines whether the linked list is empty
int 	list_print(Node *pHead); 	  //13. print the list
int 	list_size(Node *pHead); 	  //14. Calculate the length of the list

int 		list_find(Node *pHead, Temp_str *tempStr, char * x); 	  //4. Finds the node based on the content and returns its content's address
Node * 		list_find_Node(Node *pHead, Temp_str *tempStr, char * x);  //5. Finds the node based on the content and returns its address
char * 		list_get(Node *pHead, int pos);  		  //6. Finds a node based on its location and returns its content's address
Node * 		list_get_Node(Node *pHead, int pos);  	  //7. Finds a node based on its location and returns its address


#endif

