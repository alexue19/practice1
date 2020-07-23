//
//  question1.cpp
//  practice1
//
//  Created by 瑜夕 on 2020/7/24.
//  Copyright © 2020 alex. All rights reserved.
//

class solution1{
public:
    int remove_duplicates(int A[], int n){
        if(n==0) return 0;
        int index = 0;
        for( int i=1; i<n; i++){
            if (A[index] !=A[i])
                A[++index]=A[i];
        }
        return index+1;
    }
};

/*
class solution2{
public:
    int removeduplicate(int A[],int n){
        return distance(A,unique(A,A+n));
        
    }
};
*/
