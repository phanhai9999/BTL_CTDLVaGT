let arr = document.getElementsByTagName('input');
        
let email = arr[0]
let rating = arr[1]
let arr1 = document.getElementById('com')
let comment = arr1;
let send = arr[2];
send.addEventListener('click',function(){
    if(email.value=="" || rating.value == "" || comment.value == ""){
        alert("Khong duoc bo trong");
    }
    else {
        var filter = /^([a-zA-Z0-9_\.\-])+ @(([a-zA-Z0-9\-])+\.) + ([a-zA-Z0-9]{2,4}) + $/;
        if(!filter.test(email.value)){
            alert('Hay nhap dia chi email hop le');
            email.focus;
        }

        if(isNaN(rating.value)){
            alert("Rating pai nhap so");
        }
    }
})
