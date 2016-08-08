// Author: Rahul Mishra
// Email: rahul.mishra2003@gmail.com



*****************************************************************************************************
//Prime Number algorithms
/*compelexity o(N)
*/
void checkprime(lld N){
    lld count = 0;
    for( lld i = 1;i <= N;++i )
        if( N % i == 0 )
            count++;
    if(count == 2)
        cout << N << “ is a prime number.” << endl;
    else
        cout << N << “ is not a prime number.” << endl;
}

//Method 2
// Complexity O(sqrt(N))
//can be used to calculate number of divisors 
void checkprime(lld N) {
    lld count = 0;
    for( lld i = 1;i * i <=N;++i ) {
         if( N % i == 0) {
         if( i * i == N )
                     count++;
                 else                                                     // i < sqrt(N) and (N / i) > sqrt(N)
                     count += 2;
      }
    }
    if(count == 2)
        cout << N << “ is a prime number.” << endl;
    else
        cout << N << “ is not a prime number.” << endl;
}

//Method 3 

//Sieve of Eratosthenes   O(nlog(logn))
#define FOR(i,s,e,in) for(int i=s;i<=e;i+=in)
typedef long long int lld;
vector<lld> prime;
bool check[1000000]={0};
void sieve()
{
    FOR(i,2,1000000,1)
    {
        if(check[i]==0)
        {
            prime.push_back(i);
            FOR(j,i,1000000,i)
            {
                check[j]=1;
            }
        }
    }   
}



