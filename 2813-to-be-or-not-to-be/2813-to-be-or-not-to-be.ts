type ToBeOrNotToBe = {
    toBe: (val: any) => boolean;
    notToBe: (val: any) => boolean;
};

function expect(val: any): ToBeOrNotToBe {
    const ThrowError = (e) => {throw new Error(e)} ; 

    return{
        toBe: (v) =>  val === v || ThrowError("Not Equal"),
        notToBe: (v) => val !== v || ThrowError("Equal")  ,
    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */