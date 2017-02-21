vector<lld> insertionSort(vector<lld> & num)
{
    lld temp;
    int index;
    FOR(i,1,(int)num.size()-1,1)
    {
        temp=num[i];
        index=i;
        RFOR(j,i-1,0,1)
        {
            if(num[j]>temp)
            {
                num[j+1]=num[j];
                index=j;

            }

        }

        if(i!=index)
        {
          num[index]=temp;
        }


    }
    return num;
}
