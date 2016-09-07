/*
This functions rotate string by k positions either to left or to the right
complexity of this function is O(K)



*/
string rotateLeftbyk(string s,int k)
{
    int len=int(s.size());
    string res;
    FOR(i,0,len-1,1)
    {
        res.push_back(s[(k+i)%len]);


    }
    return res;

}
string rotateRightbyk(string s,int k)
{
    int len=int(s.size());
    string res;
    FOR(i,0,len-1,1)
    {
        res.push_back(s[(len-k+i)%len]);


    }
    return res;

}