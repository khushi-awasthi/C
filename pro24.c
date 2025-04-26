#include <stdio.h>
struct students
{
    int rollno;
    char name[20];
    char branch[10];
    int marks;

} a[3];
int main()
{
    FILE *p;
    p = fopen("record.txt", "a+");
    int i;
    for(i=0;i<3;i++){
    
        printf("Enter the id, name, branch, marks");
        scanf("%d %s %s %d", &a[i].rollno, a[i].name, a[i].branch, &a[i].marks);
    }
    for(i=0;i<3;i++){
        printf("%d %s %s %d\n", a[i].rollno, a[i].name, a[i].branch, a[i].marks);
        fprintf(p, "%d %s %s %d\n", a[i].rollno, a[i].name, a[i].branch, a[i].marks);
    }
    fclose(p);
}

// #include <stdio.h>

// int main() {
//     char str[100];
//     int vowels = 0, consonants = 0, words = 0, spaces = 0, specials = 0;

//     printf("Enter a statement: ");
//     fgets(str, sizeof(str), stdin);

//     for (int i = 0; str[i] != '\0'; i++) {
//         char ch = str[i]; 

//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//             vowels++;
//         }
//         else if ((ch > 'a' && ch <= 'z') || (ch > 'A' && ch <= 'Z')) {
//             consonants++;
//         }
//         else if (ch == ' ') {
//             spaces++;
//         }
//         else if(ch=='@'|| ch=='!' || ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*'){
//             specials++;
//         }

//         if (i == 0 || (str[i - 1] == ' ' && str[i] != ' ')) {
//             words++;
//         }
//     }

//     printf("Vowels: %d\n", vowels);
//     printf("Consonants: %d\n", consonants);
//     printf("Words: %d\n", words);
//     printf("Spaces: %d\n", spaces);
//     printf("Special Characters: %d\n", specials);
//     return 0;
// }
// C program for the above approach

// #include <conio.h>
// #include <graphics.h>
// #include <stdio.h>

// // Driver Code
// void main()
// {
// 	// Initialize of gdriver with
// 	// DETECT macros
//     int gd=DETECT,gm;
// 	initgraph(&gd, &gm, "C:\\turboc3\\bgi");

// 	// Creating the base rectangle
// 	line(250, 100, 250, 600);
// 	line(250, 100, 250, 600);

// 	// Fill the White Color
// 	setfillstyle(SOLID_FILL, WHITE);

// 	// Create and fill the top strip
// 	rectangle(225, 600, 275, 610);
// 	rectangle(200, 610, 300, 620);

// 	floodfill(227, 608, 15);
// 	floodfill(202, 618, 15);

// 	// Fill the Light Red Color
// 	setfillstyle(SOLID_FILL, LIGHTRED);

// 	// Create and fill the ashoka
// 	// chakra with Blue
// 	rectangle(250, 100, 650, 280);
// 	line(250, 160, 650, 160);
// 	floodfill(252, 158, 15);

// 	// Fill the Blue Color
// 	setfillstyle(SOLID_FILL, BLUE);

// 	// Create and fill the left
// 	// part of the middle strip

// 	// Create a Circle
// 	circle(450, 190, 30);
// 	floodfill(452, 188, 15);

// 	// Fill the White Color
// 	setfillstyle(SOLID_FILL, WHITE);

// 	// Create and fill the right
// 	// part of the middle strip
// 	line(250, 160, 480, 160);
// 	line(250, 220, 480, 220);
// 	floodfill(252, 162, 15);

// 	// Fill the White Color
// 	setfillstyle(SOLID_FILL, WHITE);

// 	// Create and fill the bottom
// 	// strip
// 	line(480, 160, 650, 160);
// 	line(480, 220, 650, 220);
// 	floodfill(482, 162, 15);

// 	// Fill the Green Color
// 	setfillstyle(SOLID_FILL, GREEN);

// 	line(250, 220, 650, 220);
// 	floodfill(252, 278, 15);

// 	// Close the initialized gdriver
// 	closegraph();
// }

#include<stdio.h>
struct students{
    int rollno;
    char name[20];
    char branch[5];
    int year;
    float marks;
};
int main(){
    int i,n;
    printf("Enter total number of students:");
    scanf("%d",&n);
    struct students st[n];
    printf("Enter detaila of %d students:",n);
    for(i=0;i<n;i++){
        printf("Enter details of students%d:",i+1);
        printf("\n");
        printf("Enter roll no");
        scanf("%d",st[i].rollno);
        printf("Enter name");
        scanf("%s",st[i].name);
        printf("Enter branch");
        scanf("%s",st[i].branch);
        printf("Enter year");
        scanf("%d",st[i].year);
        printf("Enter marks");
        scanf("%f",st[i].marks);
        printf("\n");
    }
    sortstudents(s,n);
    display(s,n);
    free(s);
    return 0;
}
