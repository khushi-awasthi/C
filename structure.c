// #include<stdio.h>
// struct student{
//     int rollno;
//     char name[20];
//     float per;
// }a[5];
// int main(){
//     int i;
//     for(i=0;i<5;i++){
//         printf("Enter the roll no");
//         scanf("%d",&a[i].rollno);
//         printf("Enter the name");
//         scanf("%s",&a[i].name);
//         printf("Enter the percentage");
//         scanf("%f",&a[i].per);
//     }
//     printf("The students details are\n");
//     printf("rollno\t\tName\t\tpercentage\n");
//     for(i=0;i<5;i++){
//         if(a[i].name[0]=='S'||a[i].name[0]=='s')
//         printf("%d\t\t%s\t\t%f\n",a[i].rollno,a[i].name,a[i].per);
//     }

// }

// #include<stdio.h>
// struct student{
//     int rollno;
//     char name[20];
//     char city[20];
// }a[5];
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=0;i<5;i++){
//         printf("Enter the roll no");
//         scanf("%d",&a[i].rollno);
//         printf("Enter the name");
//         
//         printf("Enter the city");
//         scanf("%s",&a[i].city);
//     }
//     printf("Print the details\n");
//     printf("Rollno\t\tName\t\tcity\n");
//     for(i=0;i<5;i++){
//         if(a[i].rollno==1)
//         printf("%d\t\t%s\t\t%s\n",a[i].rollno,a[i].name,a[i].city);
//     }
// }
// #include<stdio.h>
// struct abc{
//     int a;
//     int b;
// };
// int main(){
//     struct abc r={10,20},t;
//     t=r;
//     printf("%d %d",t.a , t.b);
// }
// pointer-------------
// struct abc{
//     int a;
//     int b;
// };
// int main(){
//     struct abc *r={10,20};
//     printf("%d%d",r->a,r->b);
// }
// function----------
// struct abc{
//     int a;
//     int b;
// };
// int main(){
//     struct abc r={10,20};
//     display(r);
// }
// display(struct abc t){
//     printf("%d%d",t.a,t.b);
// }
// nested structure------------
// struct marks{
//     int a;
//     int b;
// };
// struct student{
//     char name[20];
//     struct marks r;
// };
// int main(){
//     struct student t={"Ram",10,20};
//     printf("%s %d %d",t.name,t.r.a,t.r.b);
// }
// struct student{
//     char name[20];
//     char city[20];
//     float per;
// }a[3];
// int main(){
//     int i,j;
//     for(i=0;i<3;i++){
//     printf("Enter name , city, percentage");
//     scanf("%s%s%f",a[i].name ,a[i].city,&a[i].per);
//     }
//     for (i=0;i<3;i++)
//     for(j=0;j<3-i-1;j++)
//     if(a[j].per>a[j+1].per){
//         struct student r;
//         r=a[j];
//         a[j]=a[j+1];
//         a[j+1]=r;
//     }
//     printf("The students details are:\n");
//     printf("Name \t\tCity\t\t percentage\n");
//     for(i=0;i<3;i++)
//     printf("%s\t\t%s\t\t%f\n",a[i].name,a[i].city,a[i].per);
// }
