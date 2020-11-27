#include "myheaders.h"
#include <ctime>

//Sean Garner
//2620-002


void merge(long array1[],int first,int last)
{
	
	int mid = (first+last)/2;
	long temp[last];
	int i1 = 0, i2 = first, i3 = mid+1;
	int length1 = mid-first+1;
	int length2 = last-mid;

	//merges the parts of array1 into temp
	while ((length1 > 0) && (length2 > 0))
	{
		if (array1[i2]<array1[i3])
		{
			temp[i1++]=array1[i2++];
			length1--;
		}
		else
		{
			temp[i1++]=array1[i3++];
			length2--;
		}
	}

	//adds in leftovers from array1 to complete temp
	while(length1>0)
	{
    	temp[i1++] = array1[i2++];
		length1--;
	}
    while(length2>0)
	{
        temp[i1++] = array1[i3++];
		length2--;
    }

	//copies all of temp back into array1
    for (int i = first; i < last; i++)  
	{
        array1[i] = temp[i-first];
    }
}


void mergesort(long data[],int first,int last)
{
	//first checks that the array is big enough to be sorted
	if(first<last)
	{
		//runs recursively until all fractions of the data array have been sorted
		int mid = (first+last)/2;
		mergesort(data,first,mid);
		mergesort(data,mid+1,last);
		merge(data,first,last);
	}
}

