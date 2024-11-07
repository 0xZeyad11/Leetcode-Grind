function twoSum(numbers: number[], target: number): number[] {
    let final_answer: number[]  = [] ;
    let l = 0 , r = numbers.length-1  ;
    while(l < r){
        if (numbers[l] + numbers[r] === target){
            final_answer.push(l+1 , r+1) ; 
            break;
        }
        else if(numbers[l] + numbers[r] < target) l++ ;
        else r-- ;  
    }
    return final_answer ;
};