// Author: Rahul Mishra
// Email: rahul.mishra2003@gmail.com



*****************************************************************************************************


/*
Bubble sorting algorithm
O(n^2)
non stable, comparison  based algorithm.
O(1) of auxiliary space required.
Introduced variable swapped if no swapping occurs during single pass we should 
break then and there only, that's the only optimisation possible.


The only advantage of bubble sort is that it can 
detect whether the list is already sorted or not.
*/


void bubbleSort(vector <lld> &  num)
{
    lld temp=0;
    int swapped;
    FOR(i,0,(int)num.size()-1,1)
    {
        swapped=0;
        FOR(j,0,(int)num.size()-2-i,1)
        {

             if(num[j]>num[j+1])
             {
                 temp=num[j];
                 num[j]=num[j+1];
                 num[j+1]=temp;
                 swapped=1;

             }



        }

          if(!swapped)
             break;

    }


}