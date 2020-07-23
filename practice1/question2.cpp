//
//  question2.cpp
//  practice1
//
//  Created by 瑜夕 on 2020/7/24.
//  Copyright © 2020 alex. All rights reserved.
//

class Solution {
public:
int removeDuplicates(int A[], int n) {
if (n <= 2) return n;
int index = 2;
for (int i = 2; i < n; i++){
if (A[i] != A[index - 2])
A[index++] = A[i];
}
return index;
}
};
