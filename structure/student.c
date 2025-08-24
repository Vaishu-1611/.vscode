#include<stdio.h>
#include<string.h>
#include<stdbool.h>
    typedef struct student
    {
        int RollNo;
        char name[20];
        char dept[20];
        char course[20];
        int year;
    } student;

    void fun(student s1,student s2)
    { 
        bool flag=true;
        if( s1.dept!=s2.dept) flag=false;

        if (flag==true)
        {
            printf("both students have same dept");
        }
        else
        {
            printf("both students have different dept");
        }
        return;
    }
    int main()
    {
        student s1;
        s1.RollNo=101;
        strcpy(s1.name,"sahil");
        strcpy(s1.dept,"CSE");
        strcpy(s1.course,"BTECH");
        s1.year=2021;
        
        student s2;
        s2.RollNo=101;
        strcpy(s2.name,"soham");
        strcpy(s2.dept,"CSE");
        strcpy(s2.course,"BTECH");
        s2.year=2024;


        printf("details of 1st students are:\n");
        printf("Roll no=%d\nname=%s\ndept=%s\ncourse=%s\nyear=%d \n",s1.RollNo,s1.name,s1.dept,s1.course,s1.year);
        printf("details of 2nd students are:\n");
        printf("Roll no=%d\nname=%s\ndept=%s\ncourse=%s\nyear=%d \n",s2.RollNo,s2.name,s2.dept,s2.course,s2.year);

        fun(s1,s2);

        return 0;
    }
