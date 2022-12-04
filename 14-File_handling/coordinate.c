#include <stdio.h>
#include <stdlib.h>

struct Point
{
    int x;
    int y;
};
struct Line
{
    struct Point p1;
    struct Point p2;
};
struct Line* readFile(char file_name[], int *n)
{
    FILE *file = fopen(file_name, "r");
    fscanf(file, "%d", n);
    struct Line* linearr=(struct Line*)malloc(sizeof(struct Line)*(*n));
    printf("Array of size %d created \n",*n);
    int i = 0;
    for (int i = 0; i < *n; i++)
    {
        int temp[4];
        for (int j = 0; j < 4; j++)
        {
            fscanf(file, "%d", &temp[j]);
        }
        linearr[i].p1.x=temp[0];
        linearr[i].p1.y=temp[1];
        linearr[i].p2.x=temp[2];
        linearr[i].p2.y=temp[3];
    }
    fclose(file);
    return linearr;
}

int main()
{
    int len;
    struct Line* linearr=readFile("Sample.txt", &len);
    printf("length =%d \n", len);

    for (int i = 0; i < len; i++)
    {
        printf("x1= %d y1=%d \n",linearr[i].p1.x,linearr[i].p1.y);
        printf("x2= %d y2=%d \n",linearr[i].p2.x,linearr[i].p2.y);
    }
    

    return 0;
}
