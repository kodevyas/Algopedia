//Chinese Remainder Theorem
/*

As per wikipedia

The Chinese remainder theorem is a theorem of number theory, 
which states that, if one knows the remainders of the division of an integer n by several integers, 
then one can determine uniquely the remainder of the division of n by the product of these integers, 
under the condition that the divisors are pairwise coprime.

In simple words,

1. Basically, we are given k numbers which are pairwise coprime, and given remainders of these numbers
   when an unknown number x is divided by them. We need to find the minimum possible value of x that  
   produces given remainders.

2. Further it states that all solutions (including the minimum one) produce the same remainder when 
   divided by product of n[0], num[1], .. num[k-1]. 


*/

/*   
    Overview of the code
    
    x =  ( ∑ (a[i]*M*inv[i]) ) % prod
    Where 0 <= i <= n-1

    a[i] is given array of remainders

    prod is product of all given numbers
    prod = num[0] * num[1] * ... * num[k-1]

    M is product of all but num[i]
    M = prod / num[i]

    inv[i] = Modular Multiplicative Inverse of 
    pp[i] with respect to num[i]



*/
lld expo(lld a, lld b, lld c) {
        lld ans=1;
        while(b) {
                if(b%2 == 1)
                        ans=(ans*a)%c;

                a=(a*a)%c;
                b /= 2;
        }
        return ans;
}
lld InverseEuler(lld n, lld MOD)
{
    return expo(n,MOD-2,MOD);
}

lld chinese_remainder_theorem(vector<lld> & a,vector<lld> mod)
{
    lld prod=1,sum=0;
    for(int i=0;i<a.size();i++)
    {
        prod*=mod[i];
    }
   for(int i=0;i<a.size();i++)
    {
       lld M=prod/mod[i];
       sum+=a[i]*M*InverseEuler(M,mod[i]);
    }
return sum%prod;
}



//NOTE
/*

As discussed earlier in multiplicative inverses.cpp 
use euclid's extended theorem to calculate multiplicative inverse of numbers if A,B are coprime.


*/


