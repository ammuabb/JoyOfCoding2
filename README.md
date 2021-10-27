# JoyOfCoding2
Practice sessions for C programming covering various concepts of programming.
You can try the same questions in different programming languages to improve your coding skills!
Any spellings errors found,kindly apologize.
Thank You All!

Day-1
Question1: Even if one duplicate is present then the group is not unique.
            Input: An array of integers
            Output: Array distinct/ Array not distinct
            Example: Following array is not distinct since the number 10 is duplicated. Array={2,6,10,14,18,10,3,7}
            
Question2: Count the frequency of numbers present in a group of numbers.The answer should be tabulated.
            Input: An array of integers
            Output: Number of times each number is repeated.
            Example: Array={2,6,10,14,18,10,3,7,11,15,19,3,7,10,14}
                     O/P:   2's: 1
                            6's: 1
                            10's: 3
                            14's: 2
                            18's: 1
                            and so on...(Note:Output isn't a pattern of even numbers; All numbers are included)
                            
Day-2
Question1: Duplicate numbers in array must be removed.
            Input: An array of integers.
            Output: An array of integers without duplication.
            Example: Array={1,2,2,3,4}
                     O/P: 1 2 3 4
                     
                     
Question2: Given an array of integers, and another integer K. Write a program to find indexes of 2 elements in an array which sum is equal to K.(Two sum problem)
            Example: Array={5,4,7,3,9,2}
                     Sum(K)=13
                     Output: Indices are found at 1 and 4
                             Indices are found at 4 and 1
                         
Day-3
Question1: Given an image,you need to rotate the image so as to see the image properly.
            Hint: Image is taken as a matrix, hence output is a matrix.
            
Question2: Given an array and sum of few numbers in array,write a program that prints the sub array and range of indices whose sum is equal to the sum entered by user.
            Example: Input: [5,4,7,3,9,2]
                            Sum=23
                     Output: [4,7,3,9]
                             Indices range from 1 to 4
Day-4
Question1: Given the complete name,print the short form or abbreviation for the name.(No Built-in libraries allowed).
            Example: Input: British Broadcasting Company
                     Output: BBC

Question2: Given a sentence,find the maximum occuring character in the sentence. Note: Assume sentence has only lowercase letters and no special characters.
            Example: Input: a big black bear sat on big black rug
                     Output: Maximum occuring character is a
                     
Question3: Given 2 strings str1 and str2,write a program that determines whether str2 is a rotation version of str1.
            Example: Input: str1=abcd
                            str2=bcda
                     Output: str2 is rotated version of str1
                     
                     Input: str1=abcd
                            str2=cdab
                     Output: str2 is rotated version of str1
                     
                     Input: str1=abcd
                            str2=acbd
                     Output: str2 is not rotated version of str1
                 
Day-5
Question1: Each book has credentials as Book_Id(int),Book_Name(char),Book_Author(char),Book_Price(float). You are required to arrange books in such a way that only the book at the top can be removed and new book can be added on the top of existing book.Assume the books kept in a box. The maximum number of books the box can contain is 5. 
Write a C routine to insert book,remove book,display the existing book details. The program should also check following constraints: If box is full then books can't be added and books can't be removed if box is empty.(Hint: Use Stack)
Note: Use Structures.Enhance the program with pointer to structure concept(Introduce -> operator)
                      
