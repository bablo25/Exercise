while(1>0){
        int number=rand();
        int flag=r.check(number);
        if(flag){
            cout<<number;
            break;
        }
    }