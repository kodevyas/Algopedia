/*
This is a simple procedure than generates all subsets for n elements
and the complexity for this O(2^n)


here,

n, is the number of elements in the set.
m, is the value we want from our subset.
notes , array that contains the value of elements ,it's based 1 array.


Note :
use this procedure only for the values of n <= 1000
Otherwise , You will get TLE.



Idea: 

The basic idea is that it iterates over the elements in the range of 1 to 2^n-1
because the binary representation of all those numbers over this range will
give us all possible subsets for the set.



*/



bool subset_sum(long int m,int n,long int *notes)
{
   FOR(i,1,(1<<n)-1,1)
   {
      long int total = 0;
      long int temp = i;
      int index = 1;
      while(temp > 0)
      {

          if(temp&1)
            total+=notes[index];
          temp=temp>>1;
          index+=1;


      }

      if (total == m)
      {
    
        return true;
      }
    }

   return false;


}