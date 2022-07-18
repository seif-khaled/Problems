#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
int main() {
    char x[][20] = "hello man ";
    for (int i = 0; i < 5; i++) {
        printf("%s\n", x[i]);
    }

}

i/*nt reverse_array(x[],size) {
    int k=
    int *p1=&x[0]
}*/
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
    ///////////////////////////////////
   /* double d[] = { 2,3,4,6,7 };
    int k = sizeof(d) / sizeof(d[0]);
    if (k%2==0)
    {
        printf("TRUE\n");
    }
    else if (k%2!=0)
    {
        printf("FALSE");
    }*/
    //////////////////////////////////////////////
    //char A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13;
    //int score=0, rightA=0,total_prize=0;
    //printf("\n\n1-)Programmers use a variety of special languages, called programming languages, to communicate with the computer  ");
    //scanf("%c", &A1);
    //fseek(stdin, 0, SEEK_END);

    //if (A1 == 't' || A1 == 'T')
    //{
    //    rightA++;
    //}
    //else
    //    printf("\nwrong answer");


    //printf("\n\n2-)The assembly languages represent the only way to communicate directly with the computer  ");
    //scanf("%c", &A2);
    //fseek(stdin, 0, SEEK_END);

    //if (A2 == 'f' || A2 == 'F')
    //{
    //    rightA++;
    //}
    //else
    //    printf("\nwrong answer");


    //printf("\n\n3-)High level language are a vast improvement over machine and assembly languages, because they allow the programmer to use instructions that more closely resemble the English language  ");         //t
    //scanf("%c", &A3);
    //fseek(stdin, 0, SEEK_END);

    //if (A3 == 't' || A3 == 'T')
    //{
    //    rightA++;
    //}
    //else
    //    printf("\nwrong answer");



    //if (rightA >= 2)
    //{


    //    printf("\n\n4-) The while repetition statement specifies that a statement or group of statements is to be executed repeatedly while some condition remains true.");
    //    scanf("%c", &A4);
    //    fseek(stdin, 0, SEEK_END);

    //    if (A4 == 't' || A4 == 'T')
    //    {
    //        score++;
    //        total_prize += 100000;


    //    }
    //    else
    //        printf("\nwrong answer");

    //    printf("\n\n5-)The for statement is used to make decisions.");
    //    scanf("%c", &A5);
    //    fseek(stdin, 0, SEEK_END);

    //    if (A5 == 'f' || A5 == 'F')
    //    {
    //        score++;
    //        total_prize += 100000;
    //    }
    //    else
    //        printf("\nwrong answer");

    //    printf("\n\n6-)The escape sequence \t represents the newline character, which causes the cursor to position to the beginning of the next line on the screen.");
    //    scanf("%c", &A6);
    //    fseek(stdin, 0, SEEK_END);

    //    if (A6 == 'f' || A6 == 'F')
    //    {
    //        score++;
    //        total_prize += 100000;

    //    }
    //    else
    //        printf("\nwrong answer");

    //    printf("\n\n7-)All variables must be given a type when they are defined.");
    //    scanf("%c", &A7);
    //    fseek(stdin, 0, SEEK_END);

    //    if (A7 == 't' || A7 == 'T')
    //    {
    //        score++;
    //        total_prize += 100000;
    //    }
    //    else
    //        printf("\nwrong answer");

    //    printf("\n\n8-)A variable that is known only within the function in which it is defined is called a global variable.");
    //    scanf("%c", &A8);
    //    fseek(stdin, 0, SEEK_END);

    //    if (A8 == 't' || A8 == 'T')
    //    {
    //        score++;
    //        total_prize += 100000;
    //    }
    //    else
    //        printf("\nwrong answer");

    //    printf("\n\n9-)A function prototype declares the return type of the function and declares the number, the types, and order of the parameters the function expects to receive.");
    //    scanf("%c", &A9);
    //    fseek(stdin, 0, SEEK_END);

    //    if (A9 == 't' || A9 == 'T')
    //    {
    //        score++;
    //        total_prize += 100000;
    //    }
    //    else
    //        printf("\nwrong answer");

    //    printf("\n\n10-)Keywords extern and static are used to declare identifiers for variables and functions of static storage duration.");
    //    scanf("%c", &A10);
    //    fseek(stdin, 0, SEEK_END);

    //    if (A10 == 't' || A10 == 'T')
    //    {
    //        score++;
    //        total_prize += 100000;
    //    }
    //    else
    //        printf("\nwrong answer");

    //    printf("\n\n11-)The scanf standard library function displays information on the screen.");
    //    scanf("%c", &A11);
    //    fseek(stdin, 0, SEEK_END);

    //    if (A11 == 'f' || A11 == 'F')
    //    {
    //        score++;
    //        total_prize += 100000;
    //    }
    //    else
    //        printf("\nwrong answer");

    //    printf("\n\n12-)Every C program begins execution at the function main.");
    //    scanf("%c", &A12);
    //    fseek(stdin, 0, SEEK_END);

    //    if (A12 == 't' || A12 == 'T')
    //    {
    //        score++;
    //        total_prize += 100000;
    //    }
    //    else
    //        printf("\nwrong answer");

    //    printf("\n\n13-)(X =+ 1) is C statements that add 1 to integer variable x.  ");
    //    scanf("%c", &A13);
    //    fseek(stdin, 0, SEEK_END);

    //    if (A13 == 'f' || A13 == 'F')
    //    {
    //        score++;
    //        total_prize += 100000;
    //    }
    //    else
    //        printf("\nwrong answer\n");

    //}
    //else
    //    printf("\nsorry you failed to go to the next round\n");
    //printf("total prize is:%d\n", total_prize);
////////////////////////////////////////////////////////////////////////////
	/*char start_game1,name[20],start_game2,answer;
	while (1)
	{
		printf("            C PROGRAM QUIZ GAME\n");
		printf("   __________________________________________________\n");
		printf("                 WELCOME\n");
		printf("                   to\n");
		printf("                 THE GAME\n");
		printf("   __________________________________________________\n");
		printf("   __________________________________________________\n");
		printf("        BECOME A MILLIONAIRE!!!!!!!!!!\n");
		printf("   __________________________________________________\n");
		printf("   __________________________________________________\n");
		printf("       >PRESS S TO START THE GAME\n");
		printf("       >PRESS V TO VIEW THE HIGHEST SCORE\n");
		printf("       >PRESS R TO RESET THE SCORE\n");
		printf("       >PRESS H FOR HELP\n");
		printf("       >PRESS Q TO QUIT\n");
		printf("   __________________________________________________\n");
		scanf("%c", &start_game1);
		fseek(stdin, 0, SEEK_END);
		if (start_game1=='h')
		{
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
			scanf("%s", name);
			fseek(stdin, 0, SEEK_END);
		}
		else if (start_game1 == 's')
		{
			printf("Enter Your Name:...\n");
			scanf("%s", name);
			fseek(stdin, 0, SEEK_END);
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
			scanf("%c", &start_game2);
			fseek(stdin, 0, SEEK_END);
			if (start_game2 == 'y')
			{
				printf("please answer the following questions to win a cash prize(up to $1 million)\n");
				printf("please state if TRUE OR FALSE:\n");
				printf("1)the derefrence opearator is used to access whats inside the pointer\n");
				printf("2)");
				printf("your answer: ");
				scanf("%c", &answer);
				fseek(stdin, 0, SEEK_END);
				if ()
				{

				}
			}
		}

	}
}
	*/