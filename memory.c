#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char NodeData;

struct Node
{
	NodeData data;
	struct Node* next;
};

int main()
{
	NodeData list[100];
	char* description;

	strcpy(list, "json born");




}