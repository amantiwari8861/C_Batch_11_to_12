<<<<<<< HEAD
#include <stdio.h>
int main()
{
  char *materials[] = {"iron", "copper", "gold"};
  printf("Please remember these materials :\n");
  int i;
  for (i = 0; i < 3; i++)
  {
    printf("%s\n", materials[i]);
  }
  return 0;
=======
#include <stdio.h>
int main()
{
  char materials[] = {"iron", "copper", "gold"};
  printf("Please remember these materials :\n");
  int i;
  for (i = 0; i < 3; i++)
  {
    printf("%s\n",materials[i]);
  }
  return 0;
>>>>>>> eaa42a88730f025ddb6412a578957c2e832dfae6
}