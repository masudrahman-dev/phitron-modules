// const sum = (a, b, callback) => {
//   const total = a + b;

//   callback(total)
//     .then((result) => {
//       console.log("result :>> ", result);
//     })
//     .catch((err) => {
//       console.log("err :>> ", err);
//     });
// };

// const x = 2;
// const y = 2;

// const getSum = sum(x, y, function (t) {
//   return new Promise((resolve, reject) => {
//     if (t === 4) {
//       resolve(t);
//     } else {
//       reject("rejected");
//     }
//   });
// });

// console.log("getSum :>> ", getSum);

// const multiply = async (a, b, callback) => {
//   try {
//     const total = a * b;
//     const getBack = await callback(total);
//     // 2. what will be output here ?
//     console.log("getBack :>> ", getBack);
//     return true;
//   } catch (error) {
//     // 3. what will be output here ?
//     console.log("error :>> ", error);
//     return false;
//   }
// };

// const p = 2;
// const q = 5;

// const getMultiply = multiply(p, q, function (t) {
//   return new Promise((resolve, reject) => {
//     if (t === 4) {
//       resolve(t);
//     } else {
//       reject("rejected");
//     }
//   });
// });

// getMultiply
//   .then((result) => {
//     console.log("result  m :>> ", result);
//   })
//   .catch((err) => {
//     console.log("error :>> ", error);
//   });

// const failureCallback = () => {
//   console.log("failureCallback call");
// };

// const saySomething = (s) => {
//   console.log("s :>> ", s);
// };
// const wait = (ms) => new Promise((resolve) => setTimeout(resolve, ms));

// wait(3 * 1000)
//   .then(() => saySomething("10 seconds"))
//   .catch(failureCallback);

// const promise = new Promise((resolve, reject) => {
//   console.log("Promise callback");
//   resolve();
// }).then((result) => {
//   console.log("Promise callback (.then)");
// });

// setTimeout(() => {
//   console.log("event-loop cycle: Promise (fulfilled)", promise);
// }, 0);

// console.log("Promise (pending)", promise);

// const p = new Promise((res, rej) => {
//   res(1);
// });

// async function asyncReturn() {
//   return p;
// }

// function basicReturn() {
//   return Promise.resolve(p);
// }

// console.log(p === basicReturn()); // true
// console.log(p === asyncReturn()); // false

// async function foo() {
//   const p1 = new Promise((resolve) => setTimeout(() => resolve("1"), 1000));
//   const p2 = new Promise((_, reject) => setTimeout(() => reject("2"), 500));
//   const results = [await p1, await p2]; // Do not do this! Use Promise.all or Promise.allSettled instead.
// }
// foo().catch(() => {}); // Attempt to swallow all errors...

function resolveAfter2Seconds() {
  console.log("starting slow promise");
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve("slow");
      console.log("slow promise is done");
    }, 2000);
  });
}

function resolveAfter1Second() {
  console.log("starting fast promise");
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve("fast");
      console.log("fast promise is done");
    }, 1000);
  });
}

async function sequentialStart() {
  console.log("== sequentialStart starts ==");

  // 1. Start a timer, log after it's done
  const slow = resolveAfter2Seconds();
  console.log(await slow);

  // 2. Start the next timer after waiting for the previous one
  const fast = resolveAfter1Second();
  console.log(await fast);

  console.log("== sequentialStart done ==");
}

async function sequentialWait() {
  console.log("== sequentialWait starts ==");

  // 1. Start two timers without waiting for each other
  const slow = resolveAfter2Seconds();
  const fast = resolveAfter1Second();

  // 2. Wait for the slow timer to complete, and then log the result
  console.log(await slow);
  // 3. Wait for the fast timer to complete, and then log the result
  console.log(await fast);

  console.log("== sequentialWait done ==");
}

async function concurrent1() {
  console.log("== concurrent1 starts ==");

  // 1. Start two timers concurrently and wait for both to complete
  const results = await Promise.all([
    resolveAfter2Seconds(),
    resolveAfter1Second(),
  ]);
  // 2. Log the results together
  console.log(results[0]);
  console.log(results[1]);

  console.log("== concurrent1 done ==");
}

async function concurrent2() {
  console.log("== concurrent2 starts ==");

  // 1. Start two timers concurrently, log immediately after each one is done
  await Promise.all([
    (async () => console.log(await resolveAfter2Seconds()))(),
    (async () => console.log(await resolveAfter1Second()))(),
  ]);
  console.log("== concurrent2 done ==");
}

// sequentialStart(); // after 2 seconds, logs "slow", then after 1 more second, "fast"

// // wait above to finish
// setTimeout(sequentialWait, 4000); // after 2 seconds, logs "slow" and then "fast"

// // wait again
// setTimeout(concurrent1, 7000); // same as sequentialWait

// // wait again
// setTimeout(concurrent2, 10000); // after 1 second, logs "fast", then after 1 more second, "slow"
