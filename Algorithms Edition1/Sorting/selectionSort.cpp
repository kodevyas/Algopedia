void selectionSort(vector <lld> &  num)
{
    lld min,temp;
    int index;
    FOR(i,0,(int)num.size()-2,1)
    {
        min=num[i];
        index=i;
        FOR(j,i+1,(int)num.size()-1,1)
        {

             if(num[j]<min)
             {
                 min=num[j];
                 index=j;

             }



        }
        if(index!=i)
        {
            temp=num[i];
            num[i]=num[index];
            num[index]=temp;
        }
    }


}
