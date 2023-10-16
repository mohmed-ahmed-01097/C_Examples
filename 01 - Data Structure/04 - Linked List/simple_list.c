#include <stdio.h>
#include <stdlib.h>

typedef signed   char s8;
typedef unsigned char u8;

typedef struct Node{
   u8           data;
   struct Node *next;
}*pSList;

void List_Insertion(pSList* pplist, u8 data);
void List_Deletion (pSList* pplist);
void List_Reverse  (pSList* pplist);

void List_Insertion_last(pSList* pplist, u8 data);
void List_Deletion_last (pSList* pplist);

pSList* List_Search_pointer (pSList* pplist, u8 data);

pSList List_Search (pSList plist, u8 data);
pSList List_Middle (pSList plist);
void List_Display  (pSList plist);
s8 List_Length     (pSList plist);

void insertNode(pSList* pplist, u8 data, u8 newdata);
void deleteNode(pSList* pplist, u8 data);
void deleteAll (pSList* pplist);
void ChangeNode(pSList plist, u8 data, u8 newdata);
void viewNode  (pSList plist, u8 data);

int main(){

	int data[]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(data)/sizeof(int);
	pSList list = NULL;
	int i;
	for(i=0;i<size;i++)
		List_Insertion(&list,data[i]);
	List_Display(list);

    printf("\\======================================================\\\n");

	pSList mid = List_Middle(list);
	printf("middle=%d\n", mid->data);

    printf("\\======================================================\\\n");

	List_Reverse(&list);
	List_Display(list);

    printf("\\======================================================\\\n");

	int test[]={4,7,5,6,3,1,2};
	size=sizeof(test)/sizeof(int);
	for(i=0 ; i<size ; i++){
		deleteNode(&list,test[i]);
		List_Display(list);
		printf("\t***********************************\n");
	}

    printf("\\======================================================\\\n");

	int test1[]={6,3,4,5,2,0,1};
	int test2[]={7,4,5,6,3,1,2};
	size=sizeof(test)/sizeof(int);
	for(i=0 ; i<size ; i++){
		insertNode(&list, test1[i], test2[i]);
		viewNode(list, test2[i]);
	}
    List_Display(list);

    printf("\\======================================================\\\n");

	while(list){
        List_Deletion(&list);
		List_Display(list);
		printf("\t***********************************\n");
	}

    printf("\\======================================================\\\n");

    size=sizeof(data)/sizeof(int);
	for(i=0;i<size;i++)
		List_Insertion(&list,data[i]);
	List_Display(list);
    printf("\t***********************************\n");
    deleteAll(&list);
    List_Display(list);

    printf("\\======================================================\\\n");

	return 0;
}

void List_Insertion(pSList* pplist, u8 data){
   pSList pnode = malloc(sizeof( struct Node ));
   if(!pnode)               return;
   pnode->data = data;
   pnode->next = *pplist;
   *pplist = pnode;
}
void List_Deletion (pSList* pplist){
   if(!(*pplist))           return;
   pSList pnode = (*pplist);
   (*pplist) = (*pplist)->next;
   free(pnode);
}
void List_Reverse  (pSList* pplist){
   pSList pcurr = (*pplist), pprev = NULL, pnext;
   while(pcurr){
        pnext = pcurr->next;
        pcurr->next = pprev;
        pprev = pcurr;
        pcurr = pnext;
   }
   (*pplist) = pprev;
}

void List_Insertion_last(pSList* pplist, u8 data){
   pSList pnode = malloc(sizeof( struct Node ));
   if(!pnode)               return;
   pnode->data = data;
   pnode->next = NULL;
   if(!(*pplist)){
	*pplist = pnode;
   }else{
	pSList ptemp = (*pplist) ;
	while(ptemp->next)    ptemp=ptemp->next;
	ptemp->next = pnode;
   }
}
void List_Deletion_last (pSList* pplist){
   if(!(*pplist))           return;
   pSList ptemp = *pplist, node = *pplist;
   while(ptemp->next){
       node = ptemp;       ptemp = ptemp->next;
   }
   node->next = NULL;
   if(ptemp == (*pplist))    (*pplist) = NULL;
   free(ptemp);
}

pSList* List_Search_pointer (pSList* pplist, u8 data){
   pSList pnode = (*pplist);
   pSList* ppNode = pplist;
   while(pnode){
      if(pnode->data == data)   break;
      pnode = pnode->next;
      ppNode = &(*ppNode)->next;
   }
   return ppNode;
}

pSList List_Search (pSList plist, u8 data){
   while(plist){
      if(plist->data == data)   break;
      plist = plist->next;
   }
   return plist;
}
pSList List_Middle (pSList plist){
	pSList one_p = plist, two_p = plist;
	while(two_p){
		two_p=two_p->next;
		if(two_p)  two_p=two_p->next;
		if(two_p)  one_p=one_p->next;
	}
	return one_p;
}
void List_Display  (pSList plist){
   for(u8 i=0 ; plist ; plist = plist->next, i++)
       printf("[%3d] Node Data = %d\n", i, plist->data);
}
s8 List_Length     (pSList plist){
   u8 length = 0;
   for( ; plist ; plist = plist->next, length++);
   return length;
}

void insertNode(pSList* pplist, u8 data, u8 newdata){
   pSList pnode = List_Search((*pplist), data);
   if(pnode)   List_Insertion(&pnode->next, newdata);
   else       List_Insertion(pplist, newdata);
}
void deleteNode(pSList* pplist, u8 data){
   pSList* pNode = List_Search_pointer(pplist, data);
   if((*pNode))   List_Deletion(pNode);
}
void deleteAll (pSList* pplist){
   while((*pplist))	  List_Deletion(pplist);
}
void ChangeNode(pSList plist, u8 data, u8 newdata){
   plist = List_Search(plist, data);
   if(!plist)    return;
   plist->data = newdata;
}
void viewNode  (pSList plist, u8 data){
   plist = List_Search(plist, data);
   if(!plist)    return;
   printf("Node Data = %d, Node Address = %p\n", plist->data, plist);
}
