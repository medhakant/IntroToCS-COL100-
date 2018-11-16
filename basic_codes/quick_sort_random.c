#include<stdio.h>
#include<stdlib.h>
int partition ( int A[],int start ,int end);
int rand_partition ( int A[ ] , int start , int end ) {
    //chooses position of pivot randomly by using rand() function .
     int random = start + rand( )%(end-start +1 ) ;
     int temp;
     temp=A[start];
     A[start]=A[random];
     A[random]=temp; //swap pivot with 1st element.
     return partition(A,start ,end) ;       //call the above partition function
}
int partition ( int A[],int start ,int end) {
    int i = start + 1,temp;
    int piv = A[start] ;            //make the first element as pivot element.
    for(int j =start + 1; j <= end ; j++ )  {
    /*rearrange the array by putting elements which are less than pivot
       on one side and which are greater that on other. */

          if ( A[ j ] < piv) {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i += 1;
        }
   }
   temp=A[i-1];
   A[i-1]=A[start];
   A[start]=temp;  //put the pivot element in its proper place.
   return i-1;                      //return the position of the pivot
}
void quick_sort ( int A[ ] ,int start , int end ) {
    if( start < end ) {
         //stores the position of pivot element
          int piv_pos = rand_partition (A,start , end ) ;     
          quick_sort (A,start , piv_pos -1);    //sorts the left side of pivot.
          quick_sort ( A,piv_pos +1 , end) ; //sorts the right side of pivot.
    }
 }
 int main()
 {
     int N;
     scanf("%d",&N);
     int A[N],i;
     for(i=0;i<N;i++)
     scanf("%d",&A[i]);
     quick_sort(A,0,N-1);
     for(i=0;i<N;i++)
     printf("%d ",A[i]);
 }