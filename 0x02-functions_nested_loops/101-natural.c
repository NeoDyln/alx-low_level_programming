#include <stdio.h>
/**
 * main - Totals multplies of 3 or 5
 *
 *Description: 
 * Return: Always(0) Success
 */
int main(void)
{
int curNum;
int endNum = 1024;
int sumNum = 0;
for (curNum = 0; curNum < endNum; curNum++)
{
if ((curNum % 3 == 0) || (curNum % 5 == 0))
{
sumNum += curNum;
}
else
{
continue;
}
}
printf("%d", sumNum);
printf("\n");
return (0);
}
