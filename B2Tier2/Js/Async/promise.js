const bookTicket = new Promise((resolved,reject)=>{
    let success = false;
    if(success){
        resolved("Ticket booked sucessfully")
    }
    else{
        reject("Unable to book the ticket")
    }
})

bookTicket.then((res)=>{console.log(res)}).catch((err)=>{console.log(err)})


// promise have 4 types
// any ->it show only first success
let friend1 = new Promise((resolved,reject)=>{
    let reached1 = true
    if(reached1){
        resolved("Friend1 Reached Home")
    }
    else{
        reject("Friend1 not yet reached Home")
    }
})
let friend2 = new Promise((resolved,reject)=>{
    let reached2 = true
    if(reached2){
        resolved("Friend2 Reached Home")
    }
    else{
        reject("Friend2 not yet reached Home")
    }
})
let friend3 = new Promise((resolved,reject)=>{
    let reached3 = false
    if(reached3){
        resolved("Friend3 Reached Home")
    }
    else{
        reject("Friend3 not yet reached Home")
    }
})
let friend4 = new Promise((resolved,reject)=>{
    setTimeout(()=>{
        let reached4 = true
    if(reached4){
        resolved("Friend4 Reached Home")
    }
    else{
        reject("Friend4 not yet reached Home")
    }
    },5000)
})

// Promise.any([friend1,friend2,friend3,friend4]).then((res)=>{console.log(res)}).catch((err)=>{console.log(err)})
// race->it show only message
// Promise.race([friend1,friend2,friend3,friend4]).then((res)=>{console.log(res)}).catch((err)=>{console.log(err)})
// all->it show only first rejected
// Promise.all([friend1,friend2,friend3,friend4]).then((res)=>{console.log(res)}).catch((err)=>{console.log(err)})
// allSettled ->it will for all other answers
Promise.allSettled([friend1,friend2,friend3,friend4]).then((res)=>{console.log(res)}).catch((err)=>{console.log(err)})