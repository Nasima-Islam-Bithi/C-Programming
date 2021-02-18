
#include<stdio.h>
struct course
{
    int mark;
    char name[10];
};

int main()
{

 struct course *ptr;
 int n=2,i;
 ptr=(struct course*)malloc(n*sizeof(struct course));
 for(i=0;i<n;i++)
 {
     scanf("%d%s",&(ptr+i)->mark,(ptr+i)->name);
 }
 for(i=0;i<n;i++)
 {
     printf("%d %s\n",(ptr+i)->mark,(ptr+i)->name);
 }
}
