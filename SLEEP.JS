/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    return new Promise(resolve => {
        setTimeout(resolve, millis);
    });
}

// Test cases
let t1 = Date.now();
sleep(100).then(() => {
  console.log(Date.now() - t1); // Output: 100
});

let t2 = Date.now();
sleep(200).then(() => {
  console.log(Date.now() - t2); // Output: 200
});
