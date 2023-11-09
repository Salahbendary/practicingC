 /******************************************************************************
 *
 *
 *
 * File Name: GPA_Calculator.c
 *
 * Description: Calculate GPA out of 4 and degree percentage
 *
 * Author: Salah BENDARY
 *
 *******************************************************************************/
#include <stdio.h>
#include "std_types.h"

// Assuming these typedefs are included or defined elsewhere in the code
typedef unsigned char uint8;
typedef float float32;

float32 gpaOfCourseCalculator(uint8 u8courseScore);

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    int numberOfCourses, courseHours, courseScore;
    float totalGPA = 0.0;
    int totalHours = 0;
    float totalScore = 0.0;

    printf("Enter the total number of courses: ");
    scanf("%d", &numberOfCourses);

    if (numberOfCourses <= 0) {
        printf("Error: Invalid number of courses. Please enter a positive number.\n");
        return 1;  // Exit with an error code
    }

    printf("Enter the course hours and score (separated by a space) for each course:\n");

    for (int i = 0; i < numberOfCourses; i++) {
        printf("Course %d: ", i + 1);
        if (scanf("%d %d", &courseHours, &courseScore) != 2 || courseHours <= 0 || (courseScore < 0 || courseScore > 100)) {
            printf("Error: Invalid input. Please enter valid hours and score for the course.\n");
            return 1;  // Exit with an error code
        }
        totalGPA += gpaOfCourseCalculator(courseScore) * courseHours;
        totalScore += courseScore;
        totalHours += courseHours;
    }

    if (totalHours > 0) {
        float overallGPA = totalGPA / totalHours;
        float degreePercentage = (totalScore / (numberOfCourses * 100)) * 100;
        printf("Your GPA is: %.2f\n", overallGPA);  // %.2f for two decimal places
        printf("Your degree percentage is: %.2f%%\n", degreePercentage);
    } else {
        printf("Error: Total number of hours is zero. Cannot calculate GPA and degree percentage.\n");
    }

    return 0;
}

float32 gpaOfCourseCalculator(uint8 u8courseScore) {

	    if ((u8courseScore <= 100) && (u8courseScore >= 93)) {
	        return 4.0;
	    } else if ((u8courseScore <= 92) && (u8courseScore >= 90)) {
	        return 3.7;
	    } else if ((u8courseScore <= 89) && (u8courseScore >= 87)) {
	        return 3.3;
	    } else if ((u8courseScore <= 86) && (u8courseScore >= 83)) {
	        return 3.0;
	    } else if ((u8courseScore <= 82) && (u8courseScore >= 80)) {
	        return 2.7;
	    } else if ((u8courseScore <= 79) && (u8courseScore >= 77)) {
	        return 2.3;
	    } else if ((u8courseScore <= 76) && (u8courseScore >= 73)) {
	        return 2.0;
	    } else if ((u8courseScore <= 72) && (u8courseScore >= 70)) {
	        return 1.7;
	    } else if ((u8courseScore <= 69) && (u8courseScore >= 67)) {
	        return 1.3;
	    } else if ((u8courseScore <= 66) && (u8courseScore >= 60)) {
	        return 1.0;
	    } else if ((u8courseScore <= 60) && (u8courseScore >= 0)) {
	        return 0;
	    }
	    return 0;  // Default return, should not reach here
	}
