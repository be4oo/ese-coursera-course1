/******************************************************************************
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
 * @author <besho wesa>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
int a[40];

void main() {

  unsigned int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array( test );
  int med = find_median( test );
  int mea = find_mean( test );
  int max = find_maximum( test );
  int min = find_minimum( test );

  print_statistics(med , mea, max ,min);

  
//  sort_array( a , l );



}

/* Add other Implementation File Code Here */

void print_statistics(int t1, int t2, int t3, int t4){
	printf("the median = %d \n", t1);
        printf("the mean = %d \n", t2);
       	printf("the maximum = %d \n", t3);
       	printf("the minimum = %d \n", t4); 

}
void print_array(int a[] ){

	for( int i = 0 ; i < 40 ; i++){
		printf("%d" , a[i]);
		printf("\t");
		if(i == 9 || i == 19 || i == 29 || i == 39 ){
			printf("\n");
		}
	}
}
int find_median(int a[] ){
	int x1 = 19;
	int x2 = 20;
	return((a[x1] + a[x2])/2);
}
int find_mean(int a[] ){
	int y = 0;
	for(int i = 0 ; i < 40 ; i++){
	y += a[i];
	}
	return(y/40);
}
int find_maximum(int a[] ){
	int m1 = 0;
	for(int i = 0 ; i < 40 ; i++){
		if(m1 < a[i]){
			m1 = a[i];
		}
	}
	return(m1);
}
int find_minimum(int a[] ){
	int m2 = 500;
        for(int i = 0 ; i < 40 ; i++){
                if(m2 > a[i]){
                        m2 = a[i];
                }
        }
        return(m2);
}
//int sort_array( a ){





