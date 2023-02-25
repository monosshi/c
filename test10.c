#include<stdio.h>
#include<stdlib.h>
int main(){
    int studentid;

    printf("Enter your student id: ");
    scanf("%d", & studentid);
    if(studentid == 147){
        printf(" Name : Monosshi Zaman \n Department : CSE\n Batch:59\n Sec:D\n");
    }else if(studentid == 150){
        printf(" Name : Farhan Ishrak Shuvon \n Department : CSE\n Batch:59\n Sec:D\n");
    }else if(studentid == 155){
        printf(" Name : Mahbubuzzaman \n Department : CSE\n Batch:59\n Sec:D\n");
    }else if(studentid == 163){
        printf(" Name : Mukter Hussen \n Department : CSE\n Batch:59\n Sec:D\n");
    }else if(studentid == 164){
        printf(" Name : Nishat Nailah \n Department : CSE\n Batch:59\n Sec:D\n");
    }else if(studentid == 165){
        printf(" Name : Nafisa Maliat \n Department : CSE\n Batch:59\n Sec:D\n");
    }else if(studentid == 167){
        printf(" Name : Omar Faruk Khan \n Department : CSE\n Batch:59\n Sec:D\n");
    }else if(studentid == 173){
        printf(" Name : Nayeem Miah \n Department : CSE\n Batch:59\n Sec:D\n");
    }else if(studentid == 179){
        printf(" Name : Sania Mehjabin \n Department : CSE\n Batch:59\n Sec:D\n");
    }else if(studentid == 180){
        printf(" Name : Tasnia Zarin \n Department : CSE\n Batch:59\n Sec:D\n");
    }else{ printf("Student not found");
    }
    return 0;
}
