// Author: Rahul Mishra
// Email: rahul.mishra2003@gmail.com



*****************************************************************************************************



//Modulo Arthemetic
//(A * B) % MOD
//where MOD can't be present in int data type
/*

The possible modulo arithmetic operations are:

(A+B)%MOD=((A%MOD)+(B%MOD))%MOD
(A-B)%MOD=((A%MOD)-(B%MOD))%MOD
(A*B)%MOD=((A%MOD)*(B%MOD))%MOD


*/
//Trick #1: (A / B) % MOD = (A % (MOD * B)) / B
//Conditions: None,but atimes MOD*B can be a large number.

//Trick #2: (A / B) % MOD = ((A % MOD) * (B^(phi(MOD) - 1) % MOD)) % MOD
//where phi is Euler's totient function
//Conditions: B and MOD are coprimes.

//Trick #3: (A / B) % MOD = ((A % MOD) * (B^(MOD - 2)% MOD)) % MOD
//Conditions: B and MOD are coprimes, MOD is a prime number.


//Trick #4: A^N % MOD = A^(N % phi(MOD)) % MOD
//Conditions: A and MOD are coprimes.
//Advices: use this trick only if N can't be present in any standart data type, otherwise use Fast exponentiation.


//Method 1
//Modular Exponentiation
//Complexity O(b)
 lld expo(lld a, lld b,lld c) {
        lld ans = 1;
        for(lld i = 1;i <= b;i++) {
            ans *= a;                             //multiplying a, b times.
            ans %= c;
        }
    return ans;
 }


//Method 2
//Exponentiation by squaring
//modular exponentiation Recursive
lld modRecursion(lld a, lld b, lld c)
{
    if(b == 0)
    	return 1;
    if(b == 1)
    	return a%c;
    else if( b%2 == 0)                                           //if b is even
    {
        return modRecursion((a*a)%c,b/2,c);
    }
    else                                                                    // if b is odd.
    {
        return (a*modRecursion(((a*a)%c),(b-1)/2,c))%c;
    }
}


//Method 3
//Left to Right Exponentiation
//fastest method o(log(b))
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
