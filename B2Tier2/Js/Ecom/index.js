
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
let navLinks = document.getElementById("navLinks")
let navIcons = document.getElementById("navIcons")
let sidebar = document.getElementById("sidebar")
let contentPage = document.getElementById("contentPage")
let isOpen= true;
const closeMenu = ()=>{
    if(isOpen){
        sidebar.style.transition = "2s ease"
        sidebar.style.width = "20vw"
        contentPage.style.width = "77vw"        
        line2.style.display = "none";
        line1.style.transform = "rotate(45deg)";
        line3.style.transform = "rotate(-45deg)";
        line1.style.marginLeft = "1px"
        line3.style.marginTop = "-12.5px"
        line1.style.marginTop = "15px"
        line1.style.transition = "2s ease"
        line3.style.transition = "2s ease"
        navIcons.style.display = "none"
        navLinks.style.display = "flex"
        navLinks.style.flexDirection = "column"
        contentPage.style.marginLeft="15vw"
        
        isOpen= false;
    }
    else{        
        contentPage.style.width = "92vw"
        sidebar.style.transition = "2s ease"
        sidebar.style.width = "5vw"
        line2.style.display = "block";
        line1.style.transform = "rotate(0deg)"
        line3.style.transform = "rotate(0deg)"
        line3.style.marginTop = "0px"
        line1.style.marginTop = "0px"
        navLinks.style.display = "none"
        navIcons.style.display = "flex"
        navIcons.style.flexDirection = "column"
        contentPage.style.marginLeft="0px"
        
        isOpen= true;
    }
}