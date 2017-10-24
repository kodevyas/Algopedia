/*
This is naive approach to find the pattern P in Text T 
and returns the number of occurences of these P in T

Overall complexity of (|P|*|T|)

where |p| is length of pattern ,
|T| is the length of Text

*/

long int Pattern(string text,string pattern)
{

int T=(int)text.size()-1;
int P=(int)pattern.size()-1;
long int count=0;
FOR(i,0,T-P,1)
{
   bool match=true;
   FOR(j,0,P,1)
   {
     if(text[i+j]==pattern[j])
        continue;
     else
     {
          match=false;
          break;
     }



   }
   if(match)
   {
    cout<<"Pattern found by:"<<i<<endl;
    ++count;
   }


}
return count;


}