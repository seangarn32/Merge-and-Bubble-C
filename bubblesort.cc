#include "myheaders.h"
#include <ctime>

//Sean Garner
//2620-002

void bubbleSort(long data[], long size)
{
	//scans through array
	for(long i=0; i < size-1; i++)
	{
		//moves smallest value towards the front of the array
		for(long j=size-1; j > i; j--)
		{
			//compares each pair of values and swaps if needed
			if(data[j] < data[j-1])
			{
				swap(data[j],data[j-1]);
			}
		}
	}
}