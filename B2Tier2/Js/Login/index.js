
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