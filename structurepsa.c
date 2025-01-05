// #include<stdio.h>
// struct employee{
// int emp_id;
// char name[20];
// int salary;
// }a[3];
// int main(){
//     int i;
//     for(i=0;i<3;i++){
//     printf("Enter the id,name,salary");
//     scanf("%d %s %d",&a[i].emp_id,a[i].name,&a[i].salary);
//     }
//     printf("Employee details are....");
//     for(i=0;i<3;i++){
//     printf("%d %s %d\n",a[i].emp_id,a[i].name,a[i].salary);
//     }
//     if(a[0].salary>a[1].salary && a[0].salary>a[1].salary){
//         printf("first employee has greatest salary");
//     }
//     else if(a[1].salary>a[2].salary && a[1].salary>a[0].salary){
//         printf("second employee has greatest salary");
//     }
//     else{
//         printf("third employee has greatest salary");
//     }
//     return 0;
// }
// ---------------2-------------------------
#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
}a[2];
int daysinMonth(int month,int year){
    switch(month){
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        return 31;
        case 4: case 6: case 9: case 11:
        return 30;
        case 2:
        if((year%4==0 && year %100!=0)||(year%400==0)){
            return 29;
        }else{
            return 28;
        }
        default:
        return -1;//invalid month
}
int dateDifferences(struct date d1,struct date d2){
    int days1=d1.day+(d1.month-1)*daysinMonth(d1.month,d1.year)+d1.year*365;
    int days2=d2.day+(d2.month-1)*daysinMonth(d2.month,d2.year)+d2.year*365;
    return days2-days1;
}
int main(){
    struct date day1,date2;
    printf("input for first");
    scanf("%d%d%d",&date1.day,&date1.month,&date1.year);
    printf("input for second");
    scanf("%d%d%d",&date2.day,&date2.month,&date2.year)
    int difference=dateDifferences(date1,date2);
    printf("%d",difference);
    return 0;
    
    
    }
}
