# Autocomplete in C
ESC190 assignment 1

To write a fast implementation of the autocomplete functionality. Credits go to ESC180, instructor Michael Guerzhoy, and functions not described here are pre-written by Michael Guerzhoy. 

Txt files are provided by Michael Guerzhoy, for testing, which was done in main.c, header is autocomplete.h, and functions are written in autocomplete.c.

# Assignment Description
In this project, you will write a fast implementation of the autocomplete functionality. You will work with files that contain a large number of terms, along with the importance weight associated with those terms.

The autocomplete task is to quickly retrieve the top terms that match a query string. For example, if the query string is "Eng", your matches might be "English", "Engineering", and "EngSci". In the project, matches are case-sensitive, and only the beginning of the string is matched. "Eng" matches "EngSci" but not "engaged" and "Sci" matches "Science" but not "EngSci".

To accomplish the task, you will:

• Read in the entire file of terms, and sort the terms in lexicographic ordering. This sorted list will be reused for multiple queries

• Use binary search to find the location of the first term in lexicographic ordering that matches the query string, as well as the last term in lexicographic ordering that matches the query string

• Extract the terms that match the query string, and sort them by weight

• Extract the top matching terms by weight. Throughout, you will use the "term" struct (presented in the code). 

Functions:

- void read_in_terms(term **terms, int *pnterms, char *filename); : The function takes in a pointer to a pointer to term, a pointer to an int, and the name of a file that is formatted like cities.txt. The function allocates memory for all the terms in the file and stores a pointer to the block in *terms. The function stores the number of terms in *pnterms. The function reads in all the terms from filename, and places them in the block pointed to by *terms. The terms should be sorted in lexicographic order.

- int lowest_match(term *terms, int nterms, char *substr); : The function returns the index in terms of the first term in lexicographic ordering that matches the string substr. This function must run in O(log(nterms)) time, where nterms is the number of terms in terms. You can assume that terms is sorted in ascending lexicographic order.

- int highest_match(struct term *terms, int nterms, char *substr); : The function returns the index in terms of the last term in lexicographic order that matches the string substr. This function must run in O(log(nterms)) time, where nterms is the number of terms in terms. You can assume that terms is sorted in increasing lexicographic order.

- void autocomplete(term **answer, int *n_answer, term *terms, int nterms, char *substr); : The function takes terms (assume it is sorted lexicographically in increasing order), the number of terms nterms, and the query string substr, and places the answers in answer, with *n_answer being the number of answers. The answers should be sorted by weight in non-decreasing order.

Sorting with qsort
See here: https://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm
