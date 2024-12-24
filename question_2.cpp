#include <iostream>
using namespace std;

int main() {
    
    // declaring arrays for 3 subjects and storing scores of the 5 students
    int subject_1[5] = {85, 88, 91, 77, 85};
    int subject_2[5] = {92, 79, 85, 88, 80};
    int subject_3[5] = {78, 90, 80, 92, 87};

    // heading for results
    cout << endl << "__________RESULTS__________" << endl << endl;

    // nested loop for printing student results according to their subjects
    // outer loop for columns
    for (int i = 0; i < 5; i++){
        // inner loop for rows   
        for (int j = 0; j < 3; j++){
            // condition statements to check which index the inner loop 
            // is currently on so the appropriate array can be used to display results.
            if (j == 0){
                cout << "Student " << i + 1 << ", Subject " << j + 1 << ": "<< subject_1[i] << "\t"; 
            }
             else if (j == 1){
                 cout << "Student " << i + 1 << ", Subject " << j + 1 << ": "<< subject_2[i] << "\t"; 
             }
             else if (j == 2){
                 cout << "Student " << i + 1 << ", Subject " << j + 1 << ": "<< subject_3[i] << "\t"; 
             }
        }
        // going to the next line
        cout << endl << endl;
    }

    // heading for average and total marks for each student

    // declaring and initializing sum and average array to calculate total marks and average
    // we will use float data type so we can obtain the average in decimal places
    float sum[5] = {0, 0, 0, 0, 0}; 
    float average[5] = {0, 0, 0, 0, 0}; 
    float class_average = 0;
    
    cout << "__________TOTAL MARKS AND AVERAGES__________" << endl << endl;

    // outputting total marks along with average of the student
    for (int i = 0; i < 5; i++){
        sum[i] = subject_1[i] + subject_2[i] + subject_3[i];
        cout << "Student " << i + 1 << ": Total Marks = " << sum[i]
             << ", Average = " << sum[i] / 3 << endl; 
        
        // storing average of each student in a seperate array called averages
        average[i] = sum[i] / 3;
    }
    // calculating sum of all values in the averages array 
    for (int i = 0; i < 5; i++){
        class_average += average[i];
    }

    // dividing class average by 5 to get the final class average
    class_average = class_average / 5;
    cout << endl << "Class Average: " << class_average << endl;

    cout << endl;

    // declaring temp variable to use in array sorting algorithm
    int temp = 0;

    // using sorting algorithm so finding highest and lowest marks
    // be easier
    
    // outer loop to go through every index of the array 
    for (int i = 0; i < 5; i++){
        // inner loop to run comparisons
        for (int j = 0; j < 4; j++){
            // comparing values and switching if necessary
            if (subject_1[j] > subject_1[j + 1]){
                temp = subject_1[j];
                subject_1[j] = subject_1[j + 1];
                subject_1[j + 1] = temp;
            }
            // comparing values and switching if necessary
            if (subject_2[j] > subject_2[j + 1]){
                temp = subject_2[j];
                subject_2[j] = subject_2[j + 1];
                subject_2[j + 1] = temp;
            }
            // comparing values and switching if necessary
            if (subject_3[j] > subject_3[j + 1]){
                temp = subject_3[j];
                subject_3[j] = subject_3[j + 1];
                subject_3[j + 1] = temp;
            }
        }
    }
    // after running the algorithm above, the highest marks should be 
    // on the last index and the lowest marks on the first index
    
    // declaring variables for highest and lowest marks
    int highest = 0, lowest = 0;

    // running final comparisons to find the highest marks in the class
    if (subject_1[4] > subject_2[4] && subject_1[4] > subject_3[4]){
        highest = subject_1[4];    
    }
    else if (subject_2[4] > subject_1[4] && subject_2[4] > subject_3[4]){
        highest = subject_2[4];
    }
    else {
        highest = subject_3[4];
    }

    // running final comparisons to find the lowest marks in the class
    if (subject_1[0] < subject_2[0] && subject_1[0] < subject_3[0]){
        lowest = subject_1[0];    
    }
    else if (subject_2[0] < subject_1[0] && subject_2[0] < subject_3[0]){
        lowest = subject_2[0];
    }
    else {
        lowest = subject_3[0];
    }

    // outputting highest and lowest marks
    cout << "Highest marks in the Class: " << highest << endl;
    cout << "Lowest Marks in the Class: " << lowest << endl;


    return 0;
}
