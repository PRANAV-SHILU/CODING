let form = document.getElementById("myform");

form.addEventListener('submit', function (e) {

    e.preventDefault();

    let valid = 0;

    let fname = document.getElementById("fname").value.trim();
    let fnameMsg = document.getElementById("fnameMsg")

    let lname = document.getElementById("lname").value.trim();
    let lnameMsg = document.getElementById("lnameMsg")

    let number = document.getElementById("number").value.trim();
    let numberMsg = document.getElementById("numberMsg")

    let email = document.getElementById("email").value.trim();
    let emailMsg = document.getElementById("emailMsg")

    let radio = document.querySelectorAll('input[type="radio"]:checked');
    let radioMsg = document.getElementById("radioMsg")

    let hobby = document.querySelectorAll('input[type="checkbox"]:checked');
    let hobbyMsg = document.getElementById("hobbyMsg")

    let img = document.getElementById("img")
    let imgMsg = document.getElementById("imgmsg")

    let namePattern = /^[A-Za-z]{3,25}$/;
    let numPattern = /^[0-9]{10}$/
    let emailPattern = /^[a-zA-Z0-9._%+\-]+@[a-zA-Z0-9.\-]+\.[a-zA-Z]{2,10}$/


    if (!namePattern.test(fname)) {
        fnameMsg.innerHTML = "Enter a valid first name";
        valid = 0;
    }
    else {
        fnameMsg.innerHTML = ""
        valid++;
    }


    if (!namePattern.test(lname)) {
        lnameMsg.innerHTML = "Enter a valid last name";
        valid = 0;
    }
    else {
        lnameMsg.innerHTML = ""
        valid++;
    }


    if (!numPattern.test(number)) {
        numberMsg.innerHTML = "Enter a 10 digit number ";
        valid = 0;
    }
    else {
        numberMsg.innerHTML = ""
        valid++;
    }


    if (!emailPattern.test(email)) {
        emailMsg.innerHTML = "Enter a valid email address ";
        valid = 0;
    }
    else {
        emailMsg.innerHTML = ""
        valid++;
    }


    if (radio.length === 0) {
        radioMsg.innerHTML = "Select at least one education"
        valid = 0;
    }
    else {
        radioMsg.innerHTML = ""
        valid++;
    }


    if (hobby.length === 0) {
        hobbyMsg.innerHTML = "Select at least one hobby"
        valid = 0;
    }
    else {
        hobbyMsg.innerHTML = ""
        valid++;
    }

    if (!img.files[0]) {
        imgMsg.innerHTML = "Select any one img"
        valid = 0;
    }
    else {
        imgMsg.innerHTML = ""
        valid++;
    }

    if (valid === 7) {
        form.submit();
        alert('Hello ' + (fname + " " + lname) + ' Form submitted successfully');
    }
})

function showImg() {

    let img = document.getElementById("img");   //takes input element
    let preview = document.getElementById("preview");  //takes preview img element

    const file = img.files[0];      // selects first img file inserted
    const reader = new FileReader();  // creates a filer reader

    reader.readAsDataURL(file);   // reads the url of img and invokes onload function

    reader.onload = (e) => {       // WHEN READER COMPLETES READING
        preview.src = e.target.result;   //e.target.url is src of img inserted
        preview.style.display = "block";
    };
}