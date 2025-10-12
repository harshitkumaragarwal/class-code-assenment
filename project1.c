#include<stdio.h>
#include<string.h>

#define max 100  // maximum number of book 

//structure to store booj detail

struct book{
    int id;
    char title[50];
    char author[50];
    int quantity;
};

// function declaration

void addbook(struct book library[], int*count);

void displaybook(struct book library[], int count);

void searchbook(struct book library[],int count);

int main(){

    struct book library[max];
    int count=0;
    int choice;

    while(1){
        printf("\n======library managment system===\n");
        printf("1.add book\n");
        printf("2.display all book\n");
        printf("3.search book\n");
        printf("4.exit\n");
        printf("enter the choice");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            addbook(library,&count);
            break;

            case 2:
            displaybooks(library,count);
            break;

            case 3:
            searchbook(library,count);
            break;

            case 4:
            printf("exiting program. goodbye!\n");
            return 0;

            default:
            printf("INVALID CHOICE ! try again\n");
        }
    }
}    
    //function to add new book
void addBook(struct book library[],int*count){
    if(*count>=max){
        printf("library is full!cannot add more");
        return 0;
    }

    printf("enter book id");
    scanf("%d",&library[*count].id);

    printf("enter book title");
    getchar();
    gets(library[*count].title);

    printf("enter the author name");
    gets(library[*count].author);

    printf("enter quantity");
    scanf("%d",&library[*count].quantity);

    (*count)++;
    printf("book added sucessfully!\n");
}

//function to display all book

void displaybook(struct book library[],int count){
    if(count==0){
        printf("no book available in the library");
        return;
    }
    printf("\n%-10s %-30s %-20s %-10s\n","id","title","author","qty");
    for(int i=0;i<count;i++){
        printf("%-10d %-30s %-20s %-10d\n",library[i].id,library[i].title,library[i].author,library[i].quantity);
    }
}

// function to search a book by id

void searchbook(struct book library[],int count){
    int id,found=0;

    if(count==0){
        printf("library is empty.\n");
        return;
    }

    printf("enter book id to search");
    scanf("%d",&id);

    for(int i=0;i<count;i++){
        if(library[i].id==id){

            printf("book found");

            printf("id:%d\ntitle:%s\nauthor: %s\nquaantity: %d\n",library[i].id,library[i].title,library[i].author,library[i].quantity);

            found=1;
            break;
          } 
        }

        if(!found)
        printf("book not found!\n");
    }



