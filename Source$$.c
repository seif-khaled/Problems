#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
//void reverse_array(x[], size) {
//    int k = sizeof(x) / sizeof(x[0]);
//    int* p1 = &x[0], * p2 = &k - 1,swap,swap_middle_var;
//    int middle_var = k / 2;
//    if (k%2==0)
//    {
//        swap_middle_var = x[middle_var - 1];
//        x[middle_var - 1] = x[middle_var];
//        x[middle_var] = swap_middle_var;
//        while (*p1!=x[middle_var-1])
//        {
//            swap = *p1;
//            *p1 = *p2;
//            *p2 = swap;
//            ++p1;
//            --p2;
//        }
//    }
//    else
//    {
//        while (*p1!=x[middle_var])
//        {
//            swap = *p1;
//            *p1 = *p2;
//            *p2 = swap;
//            ++p1;
//            --p2;
//        }
//    }
//    for (int t = 0; t < k; t++)
//    {
//        printf("%d ", x[t]);
//    }
//
//}
//int main() {
//    int n, d[50],element;
//    printf("enter number of elements in array: ");
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        printf("enter element %d: ", i + 1);
//        scanf("%d", &element);
//        d[i] = element;
//    }
//    reverse_array(d, n);
//
//}
//////////////////////////////////
    /*int x[5] = { 2,3,5,6,7 }, * p1 = &x[0], * p2 = &x[4], swap;
    int f = sizeof(x) / sizeof(x[0]), h = f / 2;
    while (*p1 != x[h])
    {
        swap = *p1;
        *p1 = *p2;
        *p2 = swap;
        ++p1;
        --p2;
    }
    for (int t = 0; t < 5; t++)
    {
        printf("%d ", x[t]);
    }*/
/////////////////////////////////
//void printer() {
//    printf("hello there");
//    sca
//}
//int main() {
//    printer();
//}
////////////////////////////
//void Max_Score(int *pointer) {
//    printf("THE MAX SCORE SET BY THE USER:%d",*pointer);
//}
void EXIT() {
    exit(0);
}
void start_game() {
    char name[30];
    scanf("%s", name);
    printf("please %s answer the following questions to win a cash prize($1 million)",name);
    char A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13;
    int score = 0, rightA = 0, total_prize = 0;
    printf("\n\n1-)Programmers use a variety of special languages, called programming languages, to communicate with the computer  ");
    scanf("%c", &A1);
    scanf("%c", &A1);
    fseek(stdin, 0, SEEK_END);
    
    if (A1 == 't' || A1 == 'T')
    {
        rightA++;
    }
    else
        printf("\nwrong answer");


    printf("\n\n2-)The assembly languages represent the only way to communicate directly with the computer  ");
    scanf("%c", &A2);
    fseek(stdin, 0, SEEK_END);

    if (A2 == 'f' || A2 == 'F')
    {
        rightA++;
    }
    else
        printf("\nwrong answer");


    printf("\n\n3-)High level language are a vast improvement over machine and assembly languages, because they allow the programmer to use instructions that more closely resemble the English language  ");         //t
    scanf("%c", &A3);
    fseek(stdin, 0, SEEK_END);

    if (A3 == 't' || A3 == 'T')
    {
        rightA++;
    }
    else
        printf("\nwrong answer");



    if (rightA >= 2)
    {


        printf("\n\n4-) The while repetition statement specifies that a statement or group of statements is to be executed repeatedly while some condition remains true.");
        scanf("%c", &A4);
        fseek(stdin, 0, SEEK_END);

        if (A4 == 't' || A4 == 'T')
        {
            score++;
            total_prize += 100000;


        }
        else
            printf("\nwrong answer");

        printf("\n\n5-)The for statement is used to make decisions.");
        scanf("%c", &A5);
        fseek(stdin, 0, SEEK_END);

        if (A5 == 'f' || A5 == 'F')
        {
            score++;
            total_prize += 100000;
        }
        else
            printf("\nwrong answer");

        printf("\n\n6-)The escape sequence \t represents the newline character, which causes the cursor to position to the beginning of the next line on the screen.");
        scanf("%c", &A6);
        fseek(stdin, 0, SEEK_END);

        if (A6 == 'f' || A6 == 'F')
        {
            score++;
            total_prize += 100000;

        }
        else
            printf("\nwrong answer");

        printf("\n\n7-)All variables must be given a type when they are defined.");
        scanf("%c", &A7);
        fseek(stdin, 0, SEEK_END);

        if (A7 == 't' || A7 == 'T')
        {
            score++;
            total_prize += 100000;
        }
        else
            printf("\nwrong answer");

        printf("\n\n8-)A variable that is known only within the function in which it is defined is called a global variable.");
        scanf("%c", &A8);
        fseek(stdin, 0, SEEK_END);

        if (A8 == 't' || A8 == 'T')
        {
            score++;
            total_prize += 100000;
        }
        else
            printf("\nwrong answer");

        printf("\n\n9-)A function prototype declares the return type of the function and declares the number, the types, and order of the parameters the function expects to receive.");
        scanf("%c", &A9);
        fseek(stdin, 0, SEEK_END);

        if (A9 == 't' || A9 == 'T')
        {
            score++;
            total_prize += 100000;
        }
        else
            printf("\nwrong answer");

        printf("\n\n10-)Keywords extern and static are used to declare identifiers for variables and functions of static storage duration.");
        scanf("%c", &A10);
        fseek(stdin, 0, SEEK_END);

        if (A10 == 't' || A10 == 'T')
        {
            score++;
            total_prize += 100000;
        }
        else
            printf("\nwrong answer");

        printf("\n\n11-)The scanf standard library function displays information on the screen.");
        scanf("%c", &A11);
        fseek(stdin, 0, SEEK_END);

        if (A11 == 'f' || A11 == 'F')
        {
            score++;
            total_prize += 100000;
        }
        else
            printf("\nwrong answer");

        printf("\n\n12-)Every C program begins execution at the function main.");
        scanf("%c", &A12);
        fseek(stdin, 0, SEEK_END);

        if (A12 == 't' || A12 == 'T')
        {
            score++;
            total_prize += 100000;
        }
        else
            printf("\nwrong answer");

        printf("\n\n13-)(X =+ 1) is C statements that add 1 to integer variable x.  ");
        scanf("%c", &A13);
        fseek(stdin, 0, SEEK_END);

        if (A13 == 'f' || A13 == 'F')
        {
            score++;
            total_prize += 100000;
        }
        else
            printf("\nwrong answer\n");

    }
    else
        printf("\nsorry you failed to go to the next round\n");
    printf("total prize is:%d\n", total_prize);
    printf("total score is:%d\n", score);


}
char help(char* var)
{
    printf("------------------welcome to c program quiz game----------------\n");
    printf("here are some tips that will guide you:\n");
    printf("-----------------------------------------------------------\n");
    printf(">> there are two rounds in this quiz game,WARMUP ROUND & CHALLENGE ROUND\n");
    printf("in warmup round you will be asked a total of 3 questions to test your general knowledge.you are eglible"
        "to play the game if you give at least two answers right,otherwise you cant proceed further to the challenge round\n");
    printf(">> your game starts with the CHALLENGE ROUND.in this round you will be asked a total of 10 questions.each"
        "right answer will be awarded $100,000!.by this way you can win up to 1 million cash prize!!.........\n");
    printf("\n");
    printf(">> you will be asked questions continoulsy,till right answers are given\n");
    printf(">> no negative marking for wrong answers!");
    printf("             !!!!!!!!!!!!!!!!!!!ALL THE BEST!!!!!!!!!!!!!!!!  \n");
    printf("press y to start the game!\n");
    printf("press any other key to retrun to the main menu\n");
    *var = getchar();
    if (*var == 'y') {
        start_game();
    }
    return var;
}
int main()
{
    char switch_mood;
    while (1) {
        printf("\033[1;31m");
        printf("\tC PROGRAM QUIZ GAME\n");
        printf("\033[1;32m");
        printf(" ______________\n");
        printf("\033[1;34m");
        printf("\t WELCOME\n");
        printf("            to\n");
        printf("         THE GAME\n");
        printf("\033[1;31m");
        printf("   ______\n");
        printf("   ______\n");
        printf("\033[1;32m");
        printf("        BECOME A MILLIONAIRE!!!!!!!!!!\n");
        printf("\033[1;36m");
        printf("   ______\n");
        printf("   ______\n");
        printf("\033[1;33m");
        printf("       >PRESS S TO START THE GAME\n");
        printf("\033[1;34m");
        printf("       >PRESS V TO VIEW THE HIGHEST SCORE\n");
        printf("\033[1;32m");
        printf("       >PRESS R TO RESET THE SCORE\n");
        printf("\033[1;35m");
        printf("       >PRESS H FOR HELP\n");
        printf("\033[1;36m");
        printf("       >PRESS Q TO QUIT\n");
        printf("   ______\n");
        scanf("%c", &switch_mood);
        fseek(stdin, 0, SEEK_END);
        if (switch_mood == 's') {
            help(&switch_mood);
            if (switch_mood == 'y') {
                start_game();
            }
        }
        else if (switch_mood == 'h') {
            help(&switch_mood);
            if (switch_mood == 'y') {
                start_game();
            }

        }
       /* else if (switch_mood=='v')
        {

        }*/
        else if (switch_mood == 'q') {
            EXIT();
        }
        else continue;
    }



    return 0;
}