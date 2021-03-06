/*  https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/    */



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getNoZeroIntegers(int n, int* returnSize){
    int A = n - n/2;
    int B = n/2;
    for(int i=0; A/(int)pow(10, i) && B/(int)pow(10, i); i++){
        if((A/(int)pow(10, i))%10 == 0){
            if((B/(int)pow(10, i))%10 == 1){
                A -= (int)pow(10, i);
                B += (int)pow(10, i);
            }else{
                A += (int)pow(10, i);
                B -= (int)pow(10, i);
            }
        }else if((B/(int)pow(10, i))%10 == 0){
            if((A/(int)pow(10, i))%10 == 1){
                A += (int)pow(10, i);
                B -= (int)pow(10, i);
            }else{
                A -= (int)pow(10, i);
                B += (int)pow(10, i);
            }
        }
    }
    *returnSize = 2;
    int* res = malloc(2 * sizeof(int));
    res[0] = A;
    res[1] = B;
    return res;
}
