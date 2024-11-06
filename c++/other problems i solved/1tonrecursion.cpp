// printing 1 to n using recursion and NOT loops TBH IT TOOK ME A LOTTA TIME.
 void printNos(int n) {
       if(n<=0){
           return;
       }
       printNos(n-1);
       cout<<n<<" ";
    }
