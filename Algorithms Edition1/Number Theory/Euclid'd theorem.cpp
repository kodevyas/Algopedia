// Euclid's theorem to find GCD
//euclid's GCD method Recursive

lld GCD(lld A, lld B)
{
    if(b==0)
        return a;
    else
        return GCD(b,a%b);

}

//LCM of two numbers 
//O(log n)
/* a*b=lcm*gcd

Using Euclid's theorem to find LCM 
*/
lld LCM(lld a, lld b)
{
    return (a/__gcd(a,b))*b;
}