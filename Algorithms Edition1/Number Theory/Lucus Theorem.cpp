//Lucas Theorem nCr%mod ,where MOD is prime Number
vector<lld> getRepresentation(lld N,lld MOD) {
    vector<lld> res;
    while (N > 0) {
        res.push_back(N % MOD);
        N /= MOD;
    }
    return res;
}
lld expo(lld a, lld b, lld c) {
        lld ans=1;
        while(b) {
                if(b%2 == 1)
                        ans=(ans*a)%c;

                a=(a*a)%c;
                b /= 2;
        }
        return ans;
}

lld InverseEuler(lld n, lld MOD)
{
    return expo(n,MOD-2,MOD);
}

lld nCr(lld n, lld r, lld MOD)
{
    if(r>n)
        return 0;
    vector<long long> f(n + 1,1);
    for (int i=2; i<=n;i++)
        f[i]= (f[i-1]*i) % MOD;
    return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
}
lld LucasTheorem(lld N,lld K,lld MOD)
{
vector<lld> n = getRepresentation(N,MOD);
vector<lld> k = getRepresentation(K,MOD);
lld res = 1;
for (int i = 0; i < k.size(); ++i)
    res = (res * C(n[i], k[i],MOD)) % MOD;
return res;
}

