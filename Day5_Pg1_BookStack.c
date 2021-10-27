#include<stdio.h>
#include<stdlib.h>
#define max 5
struct book{
  int book_id;
  char book_name[10];
  char book_author[10];
  float book_price;
};
typedef struct book b;
void push(b *bb, int top, int n){
  if(top==n){
    printf("Book Stack is full\n");
    return top;
  }
  top++;
  printf("Enter the id and price of the book\n");
  scanf("%d%f",&((bb+top)->book_id),&((bb+top)->book_price));
  printf("Enter book name\n");
  scanf("%s",(bb+top)->book_name);
  printf("Enter the name of the author\n");
  scanf("%s",(bb+top)->book_author);
  return top;
}
int pop(b *bb, int top){
  if(top==-1){
    printf("Book Stack is empty\n");
    return top;
  }
  printf("Deleted book details:\n");
  printf("Book ID: %d\n",bb->book_id);
  printf("Book Name: %s\n",bb->book_name);
  printf("Book's Author: %s\n", bb->book_author);
  printf("Book's price: %s\n",bb->book_price);
  top--;
  return top;
}
void display(b *bb, int top, int n){
  if(top==-1){
    printf("Book Stack is empty\n");
    exit(0);
  }
  printf("Book Stack Data:\n");
  for(int i=0;i<n;i++)
    printf("Book ID %d\n Book Name: %s\n Book's Author: %s\n Book's Price: %.2f\n",bb->book_id,bb->book_name,bb->book_author,bb->book_price);
}
int main()
{
  b bb[10];
  int top=-1,n,ch;
  printf("Enter number of books\n");
  scanf("%d",&n);
  while(1){
    printf(" 1.Enter Book Details\n 2.Delete a Book Detail\n 3.Display Book Detail\n 4.Exit\n Enter choice\t");
    scanf("%d",&ch);
    switch(ch){
      case 1: for(int i=0;i<n;i++)
                top=push(bb,top,n);
              break;
      case 2: top=pop(bb,top);
              break;
      case 3: display(bb,top,n);
              break;
      default: exit(0);
    }
  }
  return 0;
}
