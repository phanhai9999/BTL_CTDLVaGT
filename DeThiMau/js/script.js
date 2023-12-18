

// let arr = document.getElementsByTagName('input');

// let email = arr[0]
// let rating = arr[1]

// let arr1 = document.getElementById('com');

// let comment = arr1;

// let send = arr[2];

// send.addEventListener('click', function () {
//     if (email.value == "" || rating.value == "" || comment.value == "") {
//         alert("Không Được Bỏ Trống");
//     }
//     else {
//         var filter = /^([a-zA-Z0-9_\.\-])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;
//         if (!filter.test(email.value)) {
//             alert('Hãy Nhập Địa Chỉ Email Hợp Lệ!.');
//             email.focus;
//         }

//         if (isNaN(rating.value)) {
//             alert("Rating Phải Nhập Số!");
//         }
//     }
// })
document.addEventListener('DOMContentLoaded', function(){
    var form = document.getElementsByTagName('form')[0]; // Fix: Removed the second variable declaration

    form.addEventListener('submit', function(event){
        if(!isEmailValid()){
            alert("Vui lòng nhập một địa chỉ email hợp lệ");
            event.preventDefault();
        }
        if(!isCommmentValid()){
            alert("Vui lòng nhập bình luận");
            event.preventDefault();
        }
        if(!isRatingValid()){
            alert("Vui lòng nhập đánh giá bằng số");
            event.preventDefault();
        }
    });

    function isEmailValid(){
        var email = document.getElementById('email').value;
        var emailPattern = /^[a-zA-Z0-9.-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,4}$/;
        if(email == "" || !emailPattern.test(email)){
            return false;
        }
        return true;
    }

    function isCommmentValid(){
        var comment = document.getElementById('com').value;
        if(comment == ""){
            return false;
        }
        return true;
    }

    function isRatingValid(){
        var rating = document.getElementById('rating').value;
        if(rating == "" || isNaN(rating)){
            return false;
        }
        return true;
    }
});





















