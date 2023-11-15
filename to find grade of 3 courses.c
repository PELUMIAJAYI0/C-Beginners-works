//program that output your grade
//input your score in GST 211, MTH 213 and CMP 211
//calculate your score in GST 211, MTH 213 and CMP 211
//calculate the average_score
//print out your average and total score
//based on the average score, output your grade
//A=70-100, B=60-69, C=50-59, D=45-49, E=40-44, F=39-0


#include<stdio.h>
int main()
{
	int gst211_score;
	int mth213_score;
	int cmp211_score;
	int total_score;
	int average_score;
	int grade;
	
	printf("input GST211 score--->");
	scanf("%d", &gst211_score);
	
	printf("input MTH213 score--->");
	scanf("%d", &mth213_score);
	
	printf("input CMP211 score--->");
	scanf("%d", &cmp211_score);
	
	total_score = gst211_score + mth213_score + cmp211_score;
	
	printf("the total score is---> %d \n", total_score);
	
	average_score = total_score/3;
	
	printf("the average score is---> %d \n", average_score);
	
	if(average_score<=100 && average_score>=70)
	{
		printf("Your grade is A+");
	}
	else if(average_score<=69 && average_score>=60)
	{
		printf("Your grade is B");
	}
	else if(average_score<=59 && average_score>=50)
	{
		printf("Your grade is C");
	}
	else if(average_score<=49 && average_score>=45)
	{
		printf("Your grade is D");
	}
	else if(average_score<=44 && average_score>=40)
	{
		printf("Your grade is E");
	}
	else if(average_score<=49 && average_score>=0)
	{
		printf("Your grade is F");
	}
	
}
