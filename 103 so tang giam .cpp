#include<bits/stdc++.h> 
using namespace std; 
int nt(int x) 
                                         { 
                                            if (x<2)
                                             return 0;
                                              for (int i=2; i<=sqrt(x); i++)
                                               { 
                                                if (x%i==0)
                                                 {
                                                    return 0; 
                                                    break; 
                                                    }
                                                    } 
          return 1;
                                         }

               bool tang(int x) 
               { int n1=x%10; 
               int nho=x; 
               x/=10;
               while (x>0)
                { 
                    int n2=x%10; 
                    if (n1<=n2)
                     return false;
                      x/=10;
                       n1=n2;
                        } 
                        
                        if (nt(nho))
                         return true; 
                         return true;
                          }
                           bool giam(int x) 
                           { 
                            int n1=x%10;
                             int nho=x; 
                             x/=10; 
                             while (x>0)
                              {
                                 int n2=x%10;
                                  if (n1>=n2)
                                   return false;
                                    x/=10;
                                     n1=n2;
                                      }
                                       
                                       if (nt(nho))
                                       return true; 
                                       return true;
                                        }
                                         
                                                     main()
                                                      { 
                                                        int t;
                                                         cin>>t;
                                                          while (t--)
                                                           {
                                                             int n,d=0,dau=1,cuoi=1; 
                                                             cin>>n; 
                                                             int i=1; 
                                                             while (i<n) 
                                                             {
                                                                 dau*=10;
                                                                  i++;
                                                                   } 
                                                                   i=1;
                                                                    while (i<n+1) 
                                                                    { 
                                                                        cuoi*=10; i++; 
                                                                        }
                                                                         for (int j=dau; j<cuoi; j++)
                                                                          { 
                                                                            if (tang(j) || giam(j)) 

{ 
    if 
    (nt(j)) d++; 
    }
     } 
     cout<<d<<endl; 
     }
      }