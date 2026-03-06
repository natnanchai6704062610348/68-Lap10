#include <stdio.h>
#include <stdlib.h>

struct Books{
    int BookID;
    char BookTitle[50];
} ComputerBook;

void DisplayData(struct Books *CBook){
    printf("Book ID : %d \n",(*CBook).BookID);
    printf("Book Title : %s \n",CBook->BookTitle);
}

int main() {

    printf("Enter Book ID :");
    scanf("%d",&ComputerBook.BookID);
    printf("Enter Book Title :");
    scanf("%s",ComputerBook.BookTitle);
    DisplayData(&ComputerBook);   // ส่งตำแหน่งที่อยู่ของข้อมูล
    return 0;
}


/*
    1.(*CBook).BookID คือ การเข้าถึงสมาชิก BookID ผ่าน pointer
    2.CBook->BookTitle คือ เข้าถึงสมาชิก BookTitle ผ่าน pointer

*/
