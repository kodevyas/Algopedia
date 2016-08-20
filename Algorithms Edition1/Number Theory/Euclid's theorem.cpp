// Author: Rahul Mishra
// Email: rahul.mishra2003@gmail.com



*****************************************************************************************************


// Euclid's theorem to find GCD
//euclid's GCD method Recursive
//Method 1

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


//Method 2
Using Euclid's theorem to find LCM 
*/
lld LCM(lld a, lld b)
{
    return (a/__gcd(a,b))*b;
}



//Method 3
//Extended Euclid's theorem
/*
Using this to solve diophantine equations ax+by=c , where a,b are positive integers and d=gcd(a,b).
If 'd' doesn't divides 'c' there are no integral solution to the equation, else there are infinitely many solutions possible and this methods provides us the smallest possible solutions(x0,y0)
other solutions can be generalised as , 
xn=x0+(b/d)n
yn=y0-(a/d)n
*/

//store x, y, and d as global variables

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
// similar as the original gcd
lld x1 = y;
lld y1 = x - (a / b) * y;
x = x1;
y = y1;
}


