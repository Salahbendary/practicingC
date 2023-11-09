# GPA Calculator Project

## Overview
This project is a simple GPA calculator implemented in C, designed to calculate GPA out of 4 and degree percentage based on user input for course hours and scores.

## How to Calculate GPA
The GPA is calculated using the following formula:
[ CGPA = Sum of(Course GPA * Hours of Course) / Total of Courses Hours

## GPA Calculation Logic
The GPA for each course is determined based on the course score using the following scale:

| Score Range | GPA |
|-------------|-----|
| 93-100      | 4.0 |
| 90-92       | 3.7 |
| 87-89       | 3.3 |
| 83-86       | 3.0 |
| 80-82       | 2.7 |
| 77-79       | 2.3 |
| 73-76       | 2.0 |
| 70-72       | 1.7 |
| 67-69       | 1.3 |
| 60-66       | 1.0 |
| 0-59        | 0.0 |

## Implementation
The implementation includes a main function that takes user input for the number of courses, course hours, and scores. It then calculates the GPA and degree percentage. The `gpaOfCourseCalculator` function is used to determine the GPA for each course based on the provided score.

## How to Use
1. Clone the repository: `git clone https://github.com/Salahbendary/practicingC`
2. Compile the code: `gcc GPA_Calculator.c -o GPA_Calculator`
3. Run the executable: `./GPA_Calculator`

Follow the on-screen prompts to input the number of courses, course hours, and scores.

## Example
```plaintext
Enter the total number of courses: 3
Enter the course hours and score (separated by a space) for each course:
Course 1: 3 85
Course 2: 4 92
Course 3: 2 78

Your GPA is: 3.10
Your degree percentage is: 81.33%
