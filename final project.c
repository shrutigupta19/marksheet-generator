#include<stdio.h>
int main()
{
	char programme[45];
	int semester;
	char name[34];
	int term;
	int roll_no;
	
	int marks1;
	int marks2;
	int marks3;
	int marks4;
	int marks5;
	
	int digital_electronics;
	int mathematics;
	int edc;
	int ads;
	int sensors;
	
	char grade;
	char grade2;
	char grade3;
	char grade4;
	char grade5;
	
	char result;
	char pass;
	char fail;
	
    int num_exams, i;
    float exam_scores[10]; 
    float average_score1, total_score1 = 0;
    float average_score2, total_score2 = 0;
	float average_score3, total_score3 = 0;
	float average_score4, total_score4 = 0;
	float average_score5, total_score5 = 0;
    float percent;

	printf("-------SEMESTER GRADE REPORT---------");
	printf("----------\n");
	printf("\n\n  STUDENT DETAIL \n\n");
	
	printf("PROGRAMME:");
	scanf("%s", &programme);
	
	printf("SEMESTER:");
	scanf("%d", &semester);
	
	printf("STUDENT NAME:");
	scanf("%s", &name);
	
	printf("term:");
	scanf("%d", &term);
	
	printf("ROLL NO:");
	scanf("%d", &roll_no);
	
	printf("------------\n");
	
	printf("\n\nCOURSE NAME\n\n");
	
//1	
	printf("DIGITAL ELECTRONICS");
	
	printf("\nEnter the number of exams: ");
    scanf("%d", &num_exams);
    for (i = 0; i < num_exams; i++) 
	{

    printf("Enter exam score %d: ", i + 1);
    scanf("%f", &exam_scores[i]);
    total_score1 += exam_scores[i];
    }
        
    average_score1 = total_score1 / num_exams;

    if (average_score1 >= 90) 
	{
         grade= 'A';
    }
	 else if (average_score1 >= 80) 
	{
         grade= 'B';
    }
	 else if (average_score1 >= 70) 
    {
         grade= 'C';
    }
	 else if (average_score1 >= 60)
    {
         grade= 'D';
    }
	 else
    {
         grade= 'F';
    }
    printf("%c",grade);
    marks1=average_score1;

//2 	
    printf("\nMATHEMATICS");

	printf("\nEnter the number of exams: ");
    scanf("%d", &num_exams);
    for (i = 0; i < num_exams; ++i) 
	{

        printf("Enter exam score %d: ", i +1);
        scanf("%f", &exam_scores[i]);
        total_score2 += exam_scores[i];
    }
    average_score2 = total_score2 / num_exams;

    if (average_score2 >= 90) 
	{
         grade2= 'A';
    } 
	else if (average_score2 >= 80) 
	{
         grade2= 'B';
    } 
	else if (average_score2 >= 70) 
	{
         grade2= 'C';
    } else if (average_score2 >= 60) 
	{
         grade2= 'D';
    } else 
	{
         grade2= 'F';
    }
    printf("%c",grade2);
    marks2=average_score2;
     
 //3   	
    printf("\nEDC");

    printf("\nEnter the number of exams: ");
    scanf("%d", &num_exams);
    for (i = 0; i < num_exams; i++) 
	{
    printf("Enter exam score %d: ", i + 1);
    scanf("%f", &exam_scores[i]);
    total_score3 += exam_scores[i];
    }
    average_score3 = total_score3 / num_exams;

    if (average_score3 >= 90) 
	{
         grade3= 'A';
    } 
	else if (average_score3 >= 80) 
	{
         grade3= 'B';
    } 
	else if (average_score3 >= 70) 
	{
         grade3= 'C';
    } 
	else if (average_score3 >= 60) 
	{
         grade3= 'D';
    } else 
	{
         grade3= 'F';
    }
    printf("%c",grade3);
    marks3=average_score3;
   	
//4
       printf("\nADS");
	
	 printf("\nEnter the number of exams: ");
    scanf("%d", &num_exams);
    for (i = 0; i < num_exams; i++) 
	{
    printf("Enter exam score %d: ", i + 1);
    scanf("%f", &exam_scores[i]);
    total_score4 += exam_scores[i];
    }
    average_score4 = total_score4 / num_exams;

    if (average_score4 >= 90) 
	{
         grade4= 'A';
    } 
	else if (average_score4 >= 80) 
	{
         grade4= 'B';
    } 
	else if (average_score4 >= 70) 
	{
         grade4= 'C';
    } 
	else if (average_score4 >= 60) 
	{
         grade4= 'D';
    } else 
	{
         grade4= 'F';
    }
    printf("%c",grade4);
    marks4=average_score4;
  
//5
    printf("\nSENSOR");
   
    printf("\nEnter the number of exams: ");
    scanf("%d", &num_exams);
    for (i = 0; i < num_exams; i++) 
	{
    printf("Enter exam score %d: ", i + 1);
    scanf("%f", &exam_scores[i]);
    total_score5 += exam_scores[i];
    }
    average_score5 = total_score5 / num_exams;

    if (average_score5 >= 90) 
	{
         grade5= 'A';
    } 
	else if (average_score5 >= 80) 
	{
         grade5= 'B';
    } 
	else if (average_score5 >= 70) 
	{
         grade5= 'C';
    } 
	else if (average_score5 >= 60) 
	{
         grade5= 'D';
    } else 
	{
         grade5= 'F';
    }
    printf("%c\n",grade5);
    marks5=average_score5;
   
   	printf("\n_________\n");
   	
   	printf("         MARKSHEET                     ");
   	
   	printf("\nDIGITAL ELECTRONICS                %d      %c      ",marks1,grade   );  
   	printf("\nMATHEMATICS                        %d      %c      ",marks2,grade2  ); 
   	printf("\nEDC                                %d      %c      ",marks3,grade3  );
   	printf("\nADS                                %d      %c      ",marks4,grade4 );
   	printf("\nSENSOR                             %d      %c      ",marks5,grade5  ); 
   	
   	printf("\n______\n");
   	printf("\nRESULT\n");
   	
   	percent=(marks1+marks2+marks3+marks4+marks5)/5;
   	printf("%f",percent);
   	
   	if(percent>=50)
   	{
   	printf("\npass");
   	scanf("%c",&pass);
   }
   else 
   {
   	printf("\nfail");
   	scanf("%c",&fail);
   }
    }
