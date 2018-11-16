#include<stdio.h>//the following program counts the total no. of pairs in an array such that (i>j)&&(A[i]<A[j])
long int count=0;
void merge(int A[ ] ,int start,int mid,int end) {
    //stores the starting position of both parts in temporary variables.
   int p = start ,q = mid+1;
   
   int Arr[end-start+1] , k=0;
   
   for(int i = start ;i <= end ;i++) {
       if(p > mid)      //checks if first part comes to an end or not .
          Arr[ k++ ] = A[ q++] ;
   
      else if ( q > end)   //checks if second part comes to an end or not
         { Arr[ k++ ] = A[ p++ ];
            count=count+end-mid;}
   
      else if( A[ p ] <= A[ q ])     //checks which part has smaller element.
        { Arr[ k++ ] = A[ p++ ];
             count=count+q-mid-1;}
   
      else
        { Arr[ k++ ] = A[ q++];
            }
    }
     for (int p=0 ; p< k ;p ++) {
      /* Now the real array has elements in sorted manner including both 
           parts.*/
        A[ start++ ] = Arr[ p ] ;                          
     }
   }
   void merge_sort (int A[ ] ,int start ,int end )
   {
           if( start < end ) {
           int mid = (start + end ) / 2 ;           // defines the current array in 2 parts .
           merge_sort (A, start , mid ) ;                 // sort the 1st part of array .
           merge_sort (A,mid+1 , end ) ;              // sort the 2nd part of array.

         // merge the both parts by comparing elements of both the parts.
          merge(A,start , mid , end );   
   }                    
}
int main()
{
    int N,i;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    scanf("%d",&A[i]);
    merge_sort(A,0,N-1);
    printf("%ld",count);
}
//successfully debugged and tested 
//Medha Kant