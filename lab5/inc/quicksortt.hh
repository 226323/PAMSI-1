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
    
    void swap (int* a, int* b)  {
        int t=*a;
        *a=*b;
        *b=t;
    }

int partition (T quicktab[], int l, int h)
{
    int x = quicktab[h];
    int i = (l - 1);
 
    for (int j = l; j <= h- 1; j++)
    {
        if (quicktab[j] <= x)
        {
            i++;
            swap (&quicktab[i], &quicktab[j]);
        }
    }
    swap (&quicktab[i + 1], &quicktab[h]);
    return (i + 1);
}
 
/* A[] --> Array to be sorted, 
  l  --> Starting index, 
  h  --> Ending index */
void quickSort(T A[], int l, int h)
{
    if (l < h)
    {        
        /* Partitioning index */
        int p = partition(A, l, h); 
        quickSort(A, l, p - 1);  
        quickSort(A, p + 1, h);
    }
    
}

};
#endif
