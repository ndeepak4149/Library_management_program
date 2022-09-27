#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
struct node{ 
char bk_name[30]; 
char author[30]; 
int bk_code; 
float price; 
struct node* link; 
}; 
struct node* root=NULL; 
int len; 
void add(); 
void number(); 
void display(); 
void title(); 
int main(){ 
int ch; 
while(1){ 
printf("1. Add Book Information\n"); 
printf("2. Display Book Information\n"); 
printf("3. List the title of Specified book\n"); 
printf("4. List Number of books in Library\n"); 
printf("5. Exit\n"); 
printf("\n"); 
printf("Enter your choice:"); 
scanf("%d",&ch); 
switch(ch){ 
case 1: add(); 
break; 
case 2: display(); 
break; 
case 3: title(); 
break; 
case 4: number(); 
break; 
case 5:exit(1); 
default:printf("Invalid Input\n"); 
} 
} 
} 
void add(){ 
struct node* temp; 
temp= (struct node*)malloc(sizeof(struct node)); 
printf("Enter the book code:\n"); 
scanf("%d",&temp->bk_code); 
printf("Enter Name of the book:\n"); 
scanf("%s",&temp->bk_name); 
printf("Enter Name of Author:\n"); 
scanf("%s",&temp->author); 
printf("Enter the price of book:\n"); 
scanf("%f",&temp->price); 
temp->link=NULL; 
if(root==NULL){ 
root=temp; 
} 
else{ 
struct node* p; 
p=root; 
while(p->link!=NULL){ 
p=p->link; 
} 
p->link=temp; 
} 
printf("\n"); 
printf("****\n"); 
printf("Book Added Succesfully\n"); 
printf("****\n"); 
printf("\n"); 
} 
void number(){ 
int count=0; 
struct node* temp; 
temp=root; 
while(temp!=NULL){ 
count++; 
temp=temp->link; 
} 
printf("\n"); 
printf("****\n"); 
printf("BOOKS\n"); 
printf("****\n"); 
printf("There are %d books in library",count); 
printf("\n"); 
printf("\n"); 
printf("****\n"); 
printf("THANK YOU\n"); 
printf("****\n"); 
} 
void display(){ 
struct node* temp; 
int cd; 
temp=root; 
if(temp == NULL) 
{ 
printf("\n"); 
printf("No books in the Library\n"); 
printf("\n"); 
} 
else 
{ 
printf("Enter the code of the book:"); 
scanf("%d",&cd); 
while(cd!=temp->bk_code) 
{ 
temp = temp->link; 
if(temp == NULL) 
break; 
} 
if(temp == NULL){ 
printf("No such book in library\n"); 
printf("****\n"); 
printf("THANK YOU\n"); 
printf("****\n"); 
} 
else 
{ 
printf("\n"); 
printf("****\n"); 
printf("BOOK INFO\n"); 
printf("****\n"); 
printf("Name of the book:%s\n",temp->bk_name); 
printf("Name of Author :%s\n",temp->author); 
printf("Code of the book:%d\n",temp->bk_code); 
printf("Price of the book:%.2f\n",temp->price); 
} 
} 
} 
void title(){ 
struct node* temp; 
int cod; 
temp=root; 
if(root==NULL) 
{ 
printf("There are no Books in the Library\n"); 
} 
else 
{ 
printf("Enter the code of the book:"); 
scanf("%d",&cod); 
while(cod!=temp->bk_code){ 
temp=temp->link; 
if(temp == NULL) 
break; 
} 
if(temp == NULL) 
{ 
printf("No such book in library\n"); 
printf("THANK YOU\n"); 
} 
else 
{ 
printf("\n"); 
printf("The title of the book is: %s\n",temp->bk_name); 
printf("THANK YOU\n");  
} 
} 
}
