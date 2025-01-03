type Counter = {
    increment: () => number,
    decrement: () => number,
    reset: () => number,
}

function createCounter(init: number): Counter {
    const resetInit:number = init ;
   return {
    increment: () => ++init,
    decrement: ()=> --init,
    reset: () =>init = resetInit
   } 
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */