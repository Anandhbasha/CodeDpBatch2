
const login = (event)=>{
    event.preventDefault();
    let username = document.getElementById("userName")
    let password = document.getElementById("Password")
    if(username.value =="admin" && password.value =="1234"){
        alert("Login Sucessfull")
        window.location.href="./Home.html"
    }
    else{
        alert("Invalid userName or Password")
    }
}

let ham = document.getElementById("hamburger")

let line1 = document.getElementById("line1")
let line2 = document.getElementById("line2")
let line3 = document.getElementById("line3")


let isOpen= true;
const closeMenu = ()=>{
    if(isOpen){
        line2.style.display = "none";
        line1.style.transform = "rotate(45deg)";
        line3.style.transform = "rotate(-45deg)";
        line1.style.marginLeft = "1px"
        line3.style.marginTop = "-12.5px"
        line1.style.marginTop = "15px"
        line1.style.transition = "2s ease"
        line3.style.transition = "2s ease"
        isOpen= false;
    }
    else{
        line2.style.display = "block";
        line1.style.transform = "rotate(0deg)"
        line3.style.transform = "rotate(0deg)"
        line3.style.marginTop = "0px"
        line1.style.marginTop = "0px"
        isOpen= true;
    }
}