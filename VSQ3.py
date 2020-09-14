# cook your code here
for i in range(0,int(raw_input())):
     a = list(map(int,raw_input().split()))
     b=a[0]
     a.remove(a[0])
     #print a
     c = list(map(int,raw_input().split()))
     m=0
     ma=-1
     t=0
     for j in c:
         if j>0:
             t=1
         if j in a:
           #print "p" 
           if m>ma:
               ma=m
           m=0
         else:
            m+=j
            if m>ma:
                ma=m
            elif m<0:
                m=0
     if t==1:
         print ma
     else:
         m=min(c)
         for q in c:
             if q not in a:
                 if q>m:
                     m=q
         print m            
        
