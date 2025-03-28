#include <stdio.h>
#include <string.h>
int main ()
{
     char ar [200000] ,s [200000] ;
     int i , p ,op ,j ,x ;
     gets(ar);
    while (ar)
    {
        op=0 ;
         x = strcmp (ar , "DONE" ) ;
         if (x == 0) break ;
         for (i=0 ,p=0 ;  i<strlen (ar) ;  i++)
         {
              if (ar[i] >= 'A' && ar[i] <= 'Z')
                   ar[i] = 97 + (ar[i] - 'A') ;

              if (ar[i] >='a' && ar[i] <= 'z' )
                   {
                        s[p] = ar [i] ;
                         p ++ ;
                   }
         }
          for (i=0 ,j = p-1 ; i <j ; i++,j-- )
          {
                if (s[i] != s[j])
               {
                    op=1 ;
                    printf ("Uh oh..\n") ;
                    break ;
               }
            else op=0 ;
          }

     if (op==0) printf ("You won't be eaten!\n") ;
     }
return 0 ;
}
