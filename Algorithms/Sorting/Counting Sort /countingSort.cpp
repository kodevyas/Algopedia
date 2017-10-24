vector<lld> countingSort(vector<lld> & num)
{
    lld maxElement=0;
    FOR(i,0,(int)num.size()-1,1)
    {
         maxElement=max(maxElement,num[i]);
    }
    vector<lld>freq(maxElement+1,0);
    vector<lld>sorted((int)num.size()+1);
    FOR(i,0,maxElement,1)
    {
       freq[num[i]]+=1;

    }

    FOR(i,1,maxElement,1)
    {
       freq[i]=freq[i-1]+freq[i];
    }
    RFOR(i,(int)num.size()-1,0,1)

    {
       sorted[freq[num[i]]-1]=num[i];
       --freq[num[i]];
    }


    return sorted;
}