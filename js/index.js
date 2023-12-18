let total = 0;
let count = 0;

document.querySelectorAll('.add-cart').forEach(function(button) {
    button.addEventListener('click', function(event) {
        event.preventDefault();
        let price = parseFloat(this.parentElement.querySelector('.price-number .rupees').textContent.replace('$', ''));
        total += price;
        count++;
        document.querySelector('#dd').textContent = `${count} item(s) - $${total.toFixed(2)}`;
    });
});
