function findClosestNumber(nums: number[]): number {
    if(nums.length === 0) return undefined ; 
    let closest:number  = nums[0] ; 
    let minDistance:number = Math.abs(nums[0]); 

    for(let i = 1 ; i < nums.length ; ++i)
    {
        let distance = Math.abs(nums[i]) ; 
        if(distance < minDistance || (distance === minDistance && nums[i]> closest)){
            closest = nums[i] ; 
            minDistance = distance ; 
        }
    }

    return closest ; 
};