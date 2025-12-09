const form = document.getElementById("form");
let info = document.getElementById("info")
let formBox = document.getElementsByClassName("formbox")

const email = document.getElementById('email');
const pass1 = document.getElementById('pass1');
const pass2 = document.getElementById('pass2');

const uname = document.getElementById('uname');
const fname = document.getElementById('fname');
const lname = document.getElementById('lname');

const cname = document.getElementById('cname');
const city = document.getElementById('city');
const designation = document.getElementById('designation');

const emailPattern = /^[a-zA-Z0-9._%+\-]+@[a-zA-Z0-9.\-]+\.[a-zA-Z]{2,10}$/
const namePattern = /^[A-Za-z]{3,25}$/;
const lastPattern = /^[A-Za-z ]{3,50}$/;

// form for from content 
let form1 = document.getElementById("form1")
let form2 = document.getElementById("form2")
let form3 = document.getElementById("form3")

// sec used for filling background color to the headers 
let sec1 = document.getElementById("step1")
let sec2 = document.getElementById("step2")
let sec3 = document.getElementById("step3")

// parts are used to check is form is valid or not 
let part1 = false, part2 = false, part3 = false;


setInterval(() => {
    if (part1)
        sec1.style.backgroundColor = "purple"
    else
        sec1.style.backgroundColor = "gray"

    if (part2)
        sec2.style.backgroundColor = "purple"
    else
        sec2.style.backgroundColor = "gray"

    if (part3)
        sec3.style.backgroundColor = "purple"
    else
        sec3.style.backgroundColor = "gray"
}, 100)

function validate1(e) {
    let valid = 0;
    part1 = false;

    if (!emailPattern.test(email.value.trim())) {
        email.nextElementSibling.innerHTML = "Enter a valid email address ";
        valid = 0;
    }
    else {
        email.nextElementSibling.innerHTML = ""
        valid++;
    }

    if (pass1.value.replaceAll(" ", "").length < 8) {
        pass1.nextElementSibling.innerHTML = "Enter at least 8 digit password without spaces ";
        valid = 0;
    }
    else {
        pass1.nextElementSibling.innerHTML = ""
        valid++;
    }

    if (pass1.value.replaceAll(" ", "") != pass2.value.replaceAll(" ", "")) {
        pass2.nextElementSibling.innerHTML = "does not match the above password ";
        valid = 0;
    }
    else {
        pass2.nextElementSibling.innerHTML = ""
        valid++;
    }


    if (valid === 3) {
        part1 = true;
        next(e);
    }
}

function validate2(e) {

    let valid = 0;
    part2 = false;

    if (uname.value.replaceAll(" ", "").length < 3) {
        uname.nextElementSibling.innerHTML = "Enter a valid user name without spaces";
        valid = 0;
    }
    else {
        uname.nextElementSibling.innerHTML = ""
        valid++;
    }

    if (!namePattern.test(fname.value.trim())) {
        fname.nextElementSibling.innerHTML = "Enter a valid first name";
        valid = 0;
    }
    else {
        fname.nextElementSibling.innerHTML = ""
        valid++;
    }

    if (!namePattern.test(lname.value.trim())) {
        lname.nextElementSibling.innerHTML = "Enter a valid last name";
        valid = 0;
    }
    else {
        lname.nextElementSibling.innerHTML = ""
        valid++;
    }


    if (valid === 3) {
        part2 = true;
        next(e);
    }
}

form.addEventListener('submit', function (e) {

    e.preventDefault();
    let valid = 0;
    part3 = false;

    if (!lastPattern.test(cname.value.trim())) {
        cname.nextElementSibling.innerHTML = "Enter a valid company name";
        valid = 0;
    }
    else {
        cname.nextElementSibling.innerHTML = ""
        valid++;
    }

    if (!lastPattern.test(city.value.trim())) {
        city.nextElementSibling.innerHTML = "Enter a valid city name";
        valid = 0;
    }
    else {
        city.nextElementSibling.innerHTML = ""
        valid++;
    }

    if (!lastPattern.test(designation.value.trim())) {
        designation.nextElementSibling.innerHTML = "Enter a valid designation name";
        valid = 0;
    }
    else {
        designation.nextElementSibling.innerHTML = ""
        valid++;
    }

    if (valid === 3) {
        display();
        part3 = true;
        setTimeout(() => {
            form.submit();
            alert("from submitted successfully")
        }, 50000)
    }
})

function next(element) {

    let currentForm = element.parentElement.parentElement;
    currentForm.style.display = "none"

    let nextForm = currentForm.nextElementSibling;
    nextForm.style.display = "grid";
}

function prev(element) {

    let currentForm = element.parentElement.parentElement;
    currentForm.style.display = "none"

    let prevForm = currentForm.previousElementSibling;
    prevForm.style.display = "grid";
}

function display() {
    info.innerHTML = `
    <h2>Filled information</h2>
    <span>This will appear only some seconds and then submitted</span>
    <p>User name : ${uname.value.replaceAll(" ", "")}</p>
    <p>First name : ${fname.value.trim()}</p>
    <p>Last name : ${lname.value.trim()}</p>
    <p>E-mail  : ${email.value.trim()}</p>
    <p>Password : ${pass1.value.replaceAll(" ", "")}</p>
    <p>Designation : ${designation.value.trim()}</p>
    <p>City : ${city.value.trim()}</p>
    <p>Company : ${cname.value.trim()}</p>
    `
}

function hide() {
    Array.from(formBox).forEach((e) => {
        e.style.display = "none"
    })
}

function step1() {
    hide();
    form1.style.display = "grid"
}

function step2() {
    if (part1) {
        hide();
        form2.style.display = "grid"
    }
}

function step3() {
    if (part1 == true && part2 == true) {
        hide();
        form3.style.display = "grid"
    }
}