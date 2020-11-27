// DO NOT forget to add the prototypes for your BubbleSort, MergeSort
// and Merge functions below!


#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void	printmenu();
void	printarray(long data[], long size);
int		readfile(string infilename, long d1[], long d2[]);
int		writefile(long data[], long size, string outfilename);
void	swap(long& x, long& y);
void 	bubbleSort(long data[], long size);
void 	mergesort(long data[], int low,int high);
void 	merge(long data[], int low, int high);	