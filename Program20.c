#include <stdio.h>
struct student{
    int reg;
    char name[30];
    int m1,m2,m3;
};

struct student s;


void show(struct student s ){
    int total=s.m1+s.m2+s.m3;
    float per = total / 3.0;
    printf("Register:%d Name:%s Marks:%d%d%d Total:%d Percentage:%2f",s.reg,s.name,s.m1,s.m2,s.m3,total,per);
    if(s.m1<35 || s.m2 || s.m3<35)
    printf("Result:Fail\n");
    else
    printf("Result:Pass\n");
}
int main(){
   struct students;
   FILE *fp;
   int ch,key,found;
   do{
    printf("\n1.Add record 2.Display records 3.Search register number 4.Exit\nchoice:");
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter register number and name:");
        scanf("%d%29s",& s.reg,s.name);
        printf("Enter marks in three subjects:");
        scanf("%d%d%d",&s.m1,&s.m2,&s.m3);
        fp=fopen("Students.txt","a");
        if(fp==NULL){
           printf("Cannot open file\n");
           continue;
        }
        fprintf(fp,"%d %s %d %d %d\n",s.reg,s.name,s.m1,s.m2,s.m3);
        fclose(fp);
        printf("Record added\n");
    }
    else
    if(ch==2){
        fp=fopen("Student.txt","r");
        if(fp==NULL){
           printf("No records found\n");
           continue;
        }
        while(fscanf(fp,"%d %29s %d %d %d",&s.reg,&s.name,&s.m1,&s.m2,&s.m3)==5)show(s);
        fclose(fp);
    }
    else
    if(ch==3){
        printf("Enter register number to search:");
        scanf("%d",&key);
        found=0;
        fp = fopen("Student.txt","r");
        if(fp==NULL){
            printf("No records found\n");
            continue;
        }
        while(fscanf(fp,"%d %29s %d %d %d",&s.reg,s.name,&s.m1,&s.m2,&s.m3)==5)
        if(s.reg==key){
            show(s);
            found=1;
        }
        fclose(fp);
        if(!found)
        printf("Record not found\n");
    }
    else if(ch!=4)
    printf("Invalid choice\n");
   }  
   while(ch!=4);
   return 0;
}
