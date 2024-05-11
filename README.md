# Count-Matching-Pairs-in-Character-Arrays

Write a function named "number_of_matches" that compares the initial parts of two
character arrays to see how many pairs of cells match before a difference occurs. For
example, if the arrays are
0 1 2 3 4 5 0 1 2 3 4
'b' | 'o' | 'a' | 's' | 't' | '\0' and  'b' | 'o' | 'a' | 't'|'\0


then the function should return the value 3 because only the first three pairs of cells in the
arrays match (cell 0 matches cell 0, cell 1 matches cell 1, and cell 2 matches cell 2). Each of
the character arrays will end with the character whose ASCII value is zero; this character,
called NUL, is denoted by '\0' in the C and C++ programming languages (see the two arrays
shown above). The pairwise cell comparisons should not go beyond the end of either array.
If the two arrays are identical all the way to their terminating NUL characters, return the
number of non-NUL characters. The function should take only two parameters, namely the
two character arrays to be compared
