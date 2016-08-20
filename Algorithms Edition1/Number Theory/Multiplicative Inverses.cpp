//Method 1


/*The modular multiplicative inverse of a modulo m can be found with the extended Euclidean algorithm. 
The algorithm finds solutions to Bézout's identity

    a x + b y = gcd ( a , b ) 

where a and b are given, and x, y and gcd(a, b) are the integers that the algorithm discovers. 
So, since the modular multiplicative inverse is the solution to

    a x ≡ 1 ( mod m ) 

by the definition of congruence, m | ax − 1, which means that m is a divisor of ax − 1. This, in turn, means that

    a x − 1 = q m 

Rearranging produces

    a x − q m = 1 , 
with a and m given, x the inverse, and q an integer multiple that will be discarded. 
This is the exact form of equation that the extended Euclidean algorithm solves—the 
only difference being that gcd(a, m) = 1 is predetermined instead of discovered. 
Thus, a needs to be coprime to the modulus, or the inverse won't exist.

This algorithm runs in time O(log(m)2), assuming | a | < m, and is generally more efficient than exponentiation.

*/

void extendedEuclid(lld a,lld  b)
{
if (b == 0) 
	{
		x = 1;
	  	y = 0; 
	  	d = a;
	 	return; 
	}
extendedEuclid(b, a % b);
lld x1 = y;
lld y1 = x - (a / b) * y;
x = x1;
y = y1;
}






//Method 2
/* 
The second method that we can use to calculate the multiplicative inverses is euler's theorem
According to Euler's theorem, if a is coprime to m, that is, gcd(a, m) = 1, then

    a φ ( m ) ≡ 1 ( mod m ) 

where φ(m) is Euler's totient function. 
Therefore the modular multiplicative inverse can be found directly:

	a φ ( m ) − 1 ≡ a − 1 ( mod m )

In the special case when m is a prime, the modular inverse is given by the below equation as:
    
    a − 1 ≡ a m − 2 ( mod m )

because ,φ ( m ) is the number of coprime numbers to m that are less than m, for a prime number this will always be m-1.

This method is generally slower than the extended Euclidean algorithm, 
but is sometimes used when an implementation for modular exponentiation is already available. 
Some disadvantages of this method include:

      1.   The value φ(m) must be known, whose most efficient computation requires m's factorization. 
           Factorization is widely believed to be a computationally hard problem. 
           However, calculating φ(m) is straightforward when the prime factorisation of m is known.

	  2.   Exponentiation is computationally quite expensive. 	
*/

//here , expo() is left to right binary exponentiation method defined in Modulo Arithmetic.cpp

lld InverseEuler(lld n, lld MOD)
{
    return expo(n,MOD-2,MOD);
}