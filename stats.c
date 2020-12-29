/*****************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


void print_statistics(unsigned char test[]) 
{
printf("from statistics function \n ");
int temp,r;
int b=test[0];
for (int i=0;i<40;++i){
	if(test[i]<b){
	b=test[i];}}
printf("minimum value is %d \n ",b); 
int a=test[0];
for (int i=0;i<40;++i){
	if(test[i]>a){
	a=test[i];}
}
printf("maximum value is %d \n ",a); 

double total=0;
for (int i=0;i<40;++i){
total=total+test[i];}
double mean2=total/SIZE;
printf("mean value is %.2f \n ",mean2); 

for(int i=0;i<3;i++){
for(int r=0;r<40;r++){
	if(test[r]<test[r+1])
{
	temp=test[r];
	test[r]=test[r+1];
	test[r+1]=temp;
	
	r=0;
}

}
r=0;	

}
double median;
median=(test[19]+test[20])/2.0;
printf ("median value is %.2f \n", median);
}


void print_array(unsigned char test[])
{
printf("\n array is: ");
for(int i=0;i<40;++i){
printf("%d, ",test[i]);
}
printf( "\n \n");

}

double find_median(unsigned char test[])
{
int i=0;
int r=0;
int temp;
for(i=0;i<3;i++){
for(r;r<40;r++){
	if(test[r]<test[r+1])
{
	temp=test[r];
	test[r]=test[r+1];
	test[r+1]=temp;
	
	r=0;
}

}
r=0;	

}
double median;
median=(test[19]+test[20])/2.0;
return median;

}
double find_mean(unsigned char test[])
{
double total=0;
for (int i=0;i<40;++i){
total=total+test[i];}
double mean1=total/SIZE;
return mean1;
}
 
int find_maximum(unsigned char test[])
{int a=test[0];
for (int i=0;i<40;++i){
	if(test[i]>a){
	a=test[i];}
}
return a;
}

int find_minimum(unsigned char test[])
{int b=test[0];
for (int i=0;i<40;++i){
	if(test[i]<b){
	b=test[i];}
}
return b;
}
void sort_array(unsigned char test[])
{
int i=0;
int r=0;
int temp;
for(i=0;i<3;i++){
for(r;r<40;r++){
	if(test[r]<test[r+1])
{
	temp=test[r];
	test[r]=test[r+1];
	test[r+1]=temp;
	
	r=0;
}

}
r=0;	

}
printf("\n sorted array is: ");
for(int i=0;i<40;i++){
printf("%d, ",test[i]);
}
printf( "\n \n");
}
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
double mean2 ;
print_statistics(test);
print_array(test);

printf("median is %.2f \n", find_median(test));

mean2=find_mean(test);
	printf("mean value is %.2f \n", mean2);
int maxa=find_maximum(test);
	printf("maximum value is %d \n", maxa);
int mina=find_minimum(test);
	printf("minimum value is %d \n", mina);
sort_array(test);
}

/* Add other Implementation File Code Here */
