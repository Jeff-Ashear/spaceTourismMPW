var menus = document.getElementsByClassName('hamburger-menu');

[].forEach.call(menus, function(m) {
    m.addEventListener('click', function() {
        m.classList.toggle('open')
    });
})

function menuOnClick() {   
    document.getElementById('navMenu').classList.toggle('show')
}

