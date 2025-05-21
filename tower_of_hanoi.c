#include<stdio.h>
void towerofhanoi(int n,char source,char destination,char via){
    if(n==1)
    printf("Move disc from %c to %c\n",source,destination);
    else{
        //move n-1 discs from source to destination through via
        towerofhanoi(n-1,source,via,destination);
        printf("Move disc %d from %c to %c",n,source,destination);//smaller disks are moved, move the largest disk (n)
        towerofhanoi(n-1,via,destination,source);//move n-1 disks from via to the destination using source
    }
}
int main(){
    int n=3;
    //name of three discs
    char source='a';
    char destination='b';
    char via='c';
    
    towerofhanoi(n,source,destination,via);
    return 0;
}