// console.log("Hello Welcome to Js")
// // Hoisting
// // variable declaration
// // Ecma-Script->6 
// // var
// // int a = 10 X
// //variable declaration
// // console.log(a);
// // var a =10
// // console.log(a)
// // Redeclaration
// // var a = 20
// // console.log(a)
// // re assign
// // a=60
// // console.log(a);

// // let
// // declaration
// // console.log(x);

// // let x = 50
// // console.log(x);
// //redeclaration is impossible
// // let x 
// // reassign
// // x=70
// // console.log(x);


// // const
// // const y = 70
// // y=80
// // console.log(y);


// // scope of the variables
// // var have a global scope
// // when let is used inside the block it have only block scope
// let a = 50
// {
//     let a =70
//     console.log(a);
    
// }
// console.log(a);
// Datatypes
// number
// // Premitive datatypes
// let a =50.5
// console.log(typeof(a));
// // undefined
// let b = undefined;
// console.log(typeof(b));

// // string
// userName = "Aravind"
// console.log(typeof(userName));

// // boolean
// let isTodayClass = true
// console.log(typeof(isTodayClass));

// // null
// let num = null
// console.log(typeof(num));

// // Nan -> not an number
// console.log(10*"Nums");

// Non Premitive
// array
// let arr = [10,20,30,40]
// console.log(arr[0]);

// // Object
// let person = {
//     personName:"Kavin",
//     personAge:20,
//     personCourse:"Java"
// }
// console.log(person.personName);


// // operators
// increment
// decrement
// // ternary operator
// let age = 17
// // condition?"true":"false"
// console.log(age>=18?"Eligible":"Not Eligible");


// conditional statement
// if
// if else
// else if
// nested if
// nested else if
// nested if else

// switch case

// loops
// while
// do while


// functions

// function greet(){
//     console.log("Welcome to functions");    
// }
// greet()
//     // arrow
//     const add = ()=>console.log("Welcome to arrow functions")
//     add()
//     // IIFE
//     const show = (function (){
//         console.log("Welcome to IIFE functions")
//     })
//     show()
//     // Ananoums
//     const ana = function(){
//         console.log("Welcome to Ananoums functions")
//     }
//     ana()
// for
    // for of
    // for(let x of arrayName){

    // }

    // let arr = [10,20,30,40]
    // for(let x of arr){
    //     console.log(x);        
    // }
    // // for in
    // for(let x in arr){
    //     console.log(arr[x]);        
    // }
    // foreach
    // arr.forEach(x=>console.log(x))

// array Methods
// map
// let arr = [1,2,3,4,5,6,7]

// arr.map(x=>console.log(x))

// let user = "Arjun"
// for(let x of user){
//     console.log(x);    
// }
// user.map(element => {
//     console.log(element);    
// });

// let arr = [1,2,3,4,5,6,7]

// let sum = 0

// for (let n of arr){
//     sum+=n 
//     // 0+1 =1
//     //1+2 = 3 //3+3 = 6
// }
// console.log(sum);

// 28

// let arr = [1,2,3,4,5,6,7]
// let max =0

// for(let n of arr){
//     // 1
//     // 2>1
//     if(n>max){
//         // 0->1
//         max=n
//     }
// }
// console.log(max);


// let arr = [1,2,3,4,5,6,7]
// let min =arr[0]

// for(let n of arr){
//     if(n<min){
//         min=n
//     }
// }
// console.log(min);

// reduce
// sum and n
// n->1
// sum =0 -> a
// n->b
// let total = arr.reduce((a,b)=>a+b)
// // a=0
// // b=1 ->0+1 =1
// // a=1
// // b=2->1+2 = 3
// // a=3->b= 3 =3+3 =6
// // a=6 =>b = 4 4+6 = 10
// // a=10 =>b=5 => 5+10 = 15
// // a=15 b=6 =21
// // a=21 b=7 ->28
// console.log(total);

// // filter
// let arr = [1,2,3,4,5,6,7]
// console.log(arr.filter((x)=>x%2==0));
// // x%2 ==0 1%2
// // x%2==0 2%2 ->0

// // push
// arr.push(8)
// console.log(arr);
// // pop
// arr.pop()
// console.log(arr);
// // shift
// arr.shift()
// console.log(arr);
// // unshift
// arr.unshift(10)
// // console.log(arr);

// // // slice
// // console.log(arr.slice(1,3));
// // // splice
// // // replace or remove
// // arr.splice(0,2,22)
// // // [22,10, 2, 3, 4,5, 6, 7]
// // console.log(arr);

// // sort
// let newarr = [4,2,1,3,7,5,6,20,70,80]
// // console.log(newarr.sort());
// let assending = newarr.sort((a,b)=>a-b)
// console.log(assending);
// let fruits = ["apple","orange","kiwi","banana","Apple"]
// // a,b,k,o
// console.log(fruits.sort());

// // set
// let sets = new Set()

// sets.add(10)
// sets.add(20)
// sets.add(30)
// sets.add(40)
// sets.add(40)
// console.log(sets);


// // find
// let res = newarr.find((x)=>x==21)
// console.log(res);

// // includes
// console.log(newarr.includes(21));

// // indexof
// console.log(newarr.indexOf(71));

// // startswith
// let userName = "Ramani"
// console.log(userName.startsWith("A"));

// // endswith
// console.log(userName.endsWith("i"));

// // tolowercase
// console.log(userName.toLowerCase().startsWith("r"));


// // split
// let text = "i love to code js"
// newval = text.split(" ")
// console.log(newval);
// // join
// console.log(newval.join("/"));

// setTimeout
// setTimeout(()=>{

// },timeDelay)
// setTimeout(()=>{
//     console.log("Welcome to setTimeout");    
// },5000)
// setInterval
// setInterval(()=>{
//     console.log("Welcome to setInterval");    
// },2000)
// spread operator
let arr = [10,20,30,40]
let arr1 = [20,40,60,80]
let arr2 = [...arr,...arr1]
// console.log(arr2);

// rest operator
let[first,second,...participation] = arr2
console.log(first);
console.log(second);
console.log(participation);


// Object destructure
const person = {
    personName :"Aravind",
    personAge:30,
    personCity:"CBE"
}
const {personName,personCity} =person
console.log(personName);
console.log(personCity);


// Object methods
const product = {
    "id": 1,
    "title": "Fjallraven - Foldsack No. 1 Backpack, Fits 15 Laptops",
    "price": 109.95,
    "description": "Your perfect pack for everyday use and walks in the forest. Stash your laptop (up to 15 inches) in the padded sleeve, your everyday",
    "category": "men's clothing",
    "image": "https://fakestoreapi.com/img/81fPKd-2AYL._AC_SL1500_t.png",
    "rating": {
      "rate": 3.9,
      "count": 120
    }
}

// const key = Object.entries(product)
// console.log(key);
// key.map((item)=>console.log(item))

// // template literals
// let a = 20;
// let b =5
// // console.log("The a value is:"+a);
// // console.log("The a value is:",a,"and the B value is:",b);
// console.log(`The a value is:${a} and the B value is: ${b}`);

console.log(Object.hasOwn(person,"personName"));

const student = {
    studentName:"Bala"
}
const details = {
    age:22,
    city:"Erode",
    dept:"ECE",
    year:"2ndYear"
}

Object.assign(student,details)
console.log(student);
