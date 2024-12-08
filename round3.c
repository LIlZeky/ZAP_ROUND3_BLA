#include <stdio.h>
#include <string.h>

int max_2d(const int size, int array[][size]) {
    if (array == NULL) {
        return -1;
    }
    int max = array[0][0];
    for (int i = 0; i < size; i++) {
        for (int a = 0; a < size; a++) {
            if (max < array[i][a]) {
                max = array[i][a];
            }
        }
    }
    return max;
}


int vowels_count_2d(const int rows, const int cols, char strings[][cols]) {
    if (strings == NULL) {
        return -1;
    }

    int count = 0;
    const char vowels[] = "aeiouAEIOU";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; strings[i][j] != '\0'; j++) {
            if (strchr(vowels, strings[i][j]) != NULL) {
                count++;
            }
        }
    }

    return count;
}

int is_in_array_2d(const int num, const int size, int array[][size]) {
    if (array == NULL) {
        return -1;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i][j] == num) {
                return 1;
            }
        }
    }

    return 0;
}


int largest_line(const int size, int array[] [size]){
    int max_sum = 0;
    int max_row = 0;
    if(array == NULL){
        return -1;
    }
    for (int i = 0; i < size; i++){
        int sum = 0;
        for (int a = 0; a < size; a++){
            sum += array[i][a];
            if(sum > max_sum){
                max_sum = sum;
                max_row = i;
            }
        }
    }
    return max_row;
}

void swap_case_2d(const int rows, const int cols, char strings[][cols]) {
    if (strings == NULL) {
        return;
    }

    for (int i = 0; i < rows; i++) {
        for (int a = 0; strings[i][a] != '\0'; a++) {
            if (strings[i][a] >= 'A' && strings[i][a] <= 'Z') {
                strings[i][a] = strings[i][a] + ('a' - 'A');
            } else if (strings[i][a] >= 'a' && strings[i][a] <= 'z') {
                strings[i][a] = strings[i][a] - ('a' - 'A');
            }
        }
    }
}


int largest_col(const int size, int array[][size]){
    int max_sum = 0;
    int max_col = 0;
    if(array == NULL){
        return -1;
    }
    for (int i = 0; i < size; i++){
        int sum = 0;
        for (int a = 0; a < size; a++){
            sum += array[a][i];
            if(sum > max_sum){
                max_sum = sum;
                max_col = i;
            }
        }
    }
    return max_col;
}

int count_zeroes_2d(const int size, int array[][size]) {
    if (array == NULL) {
        return -1;
    }

    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i][j] == 0) {
                count++;
            }
        }
    }

    return count;
}

void swap_sign_2d(const int size, int array[][size]) {
    if (array == NULL) {
        return;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            array[i][j] *= -1;
        }
    }
}

int longest_row(const int rows, const int cols, char array[rows][cols]) {
    if (array == NULL || rows < 1 || cols < 1) {
        return -1;
    }

    int max_length = 0;
    int max_index = 0;

    for (int i = 0; i < rows; i++) {
        int length = strlen(array[i]);
        if (length > max_length) {
            max_length = length;
            max_index = i;
        }
    }

    return max_index;
}

int min_2d(const int size, int array[][size]) 
{ 
    if (array == NULL) 
    { 
        return -1; 
    } 
    int minimal = 1000993434; 
    for (int i = 0; i < size; i++) 
    { 
        for (int j = 0; j < size; j++) 
        { 
            if (array[i][j] < minimal) 
            { 
                minimal = array[i][j]; 
            } 
        } 
    } 
 
    return minimal; 
}


