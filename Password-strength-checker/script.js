function checkPassword() {

    let password = document.getElementById("password").value;

    let result = document.getElementById("result");

    if (password.length < 6) {

        result.innerHTML = "Weak Password ❌";
        result.style.color = "red";
    }

    else if (
        password.match(/[A-Z]/) &&
        password.match(/[0-9]/) &&
        password.match(/[^A-Za-z0-9]/)
    ) {

        result.innerHTML = "Strong Password ✅";
        result.style.color = "lightgreen";
    }

    else {

        result.innerHTML = "Medium Password ⚠️";
        result.style.color = "yellow";
    }
}