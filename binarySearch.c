#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

int Search(int aList[], int item, int low, int high)
{
	int midpoint;
	
	if(low > high)
	{
		return -1;
	}

	midpoint = (low + high) /2;

	if(item == aList[midpoint])
	{
		return midpoint;
	}
	else if(item < aList[midpoint])
	{
		Search(aList, item, low, midpoint -1);
	}
	else
	{
		Search(aList, item, midpoint + 1, high);
	}
	return item;
}

int main()
{
	int testList[SIZE];
	int key;
	int position;
	int num;
	int low = 0;
	int high;

	printf("\n Enter total number of elements in list: ");
	scanf("%d", &num);

	printf("\n Enter elements of the list: ");
	for(int i = 0; i < num; i++)
	{
		scanf("%d", &testList[i]);
	}

	high = num - 1;

	printf("\n Enter element to be searched: ");
	scanf("%d", &key);

	position = Search(testList, key, low, high);

	if(position != -1)
	{
		printf("\n Number present at %d\n", (position));
	}
	else
	{
		printf(" The number is not present in the list.\n");
	}

	return 0;

}