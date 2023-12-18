// coding implementation
// end coding implementation

document.querySelector("form").addEventListener('submit',function(event){
    event.preventDefault();

    let emailInput = document.querySelector('#email');
    let comInput = document.querySelector('#com');
    let ratelInput = document.querySelector('#rate');
    let regex = /^[^\s@]+@+[^\s@].+$/

    let emaill = emailInput.value;
    let comm = comInput.value;
    let ratee = ratelInput.value;

    if(emaill.trim() ==''){
        alert('Nhap vao email');
    }
    else {
        if(!regex.test(emaill))
            alert('Email sai dinh dang');
    }
    if(comm.trim()=='')
       alert('Nhap vao comment')
    if(ratee.trim()=='')
       alert('Nhap vao rate ')

    if(emaill && regex.test(emaill) && comm && ratee){
           emailInput.value = '';comInput.value = '' ; ratelInput.value= '';
           alert('Thong tin da duoc luu')
    }
})