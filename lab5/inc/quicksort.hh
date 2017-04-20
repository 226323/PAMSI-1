#ifndef QUICKSORTT_HH
#define QUICKSORTT_HH
template <typename T>
class sort  {
    T* quicktab=nullptr;
    public:

    void tworzenie (int max) {
        quicktab = new int [max];
    }
    
    void wypelnianie(int max)   {
        for (int i=0;i<max;i++) {
            quicktab[i]=max-i;
        }
    }
    
    T* zwracanie() {
        return quicktab;
    }
    
    void zamiana (int* a, int* b)  {
        int t=*a;
        *a=*b;
        *b=t;
    }

int dzielenie (T quicktab[], int l, int h)
{
    int x = quicktab[h];
    int i = (l - 1);
 
    for (int j = l; j <= h- 1; j++)
    {
        if (quicktab[j] <= x)
        {
            i++;
            zamiana (&quicktab[i], &quicktab[j]);
        }
    }
    zamiana (&quicktab[i + 1], &quicktab[h]);
    return (i + 1);
}
 
void sortowanie(T A[], int l, int h)
{
    if (l < h)
    {        
        int p = dzielenie(A, l, h); 
        sortowanie(A, l, p - 1);  
        sortowanie(A, p + 1, h);
    }
    
}

};
#endif
