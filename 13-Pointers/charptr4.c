*(a+i)  == a[i]

((a + i) + j) == a[i][j]


Array of Pointers
We can also have array of pointers. Pointers are very helpful
 in handling character array with rows of varying length.

char *name[3] = { 
    "Adam",
    "chris",
    "Deniel"
};
//Now lets see same array without using pointer
char name[3][20] = { 
    "Adam",
    "chris",
    "Deniel"
};
In the second approach memory wastage is more,
 hence it is prefered to use pointer in such cases.
When we say memory wastage, it doesn't
 means that the strings will start occupying less space, 
 no, characters will take the same space, but when 
 we define array of characters, a contiguos memory space is
located equal to the maximum size of the array,which is a 
wastage, which can be avoided if we use pointers instead.
