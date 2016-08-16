/*calculating n factorial
caution : only for n=20
*/

//for bigger numbers we have to use number stored in array or bigInteger kind of thing otherwise code in python.
typedef unsigned long long int ulld;
#define FOR(i,j,k,in) for(ulld i=j;i<=k;i+=in)

ulld factorial(int n)
{
    ulld result=1;
    cout<<result<<endl;
    FOR(i,1,n,1)
    {
       result=result*i;
       cout<<result<<endl;			
    }

return result;
}