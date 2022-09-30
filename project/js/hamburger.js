var menus = document.getElementsByClassName('hamburger-menu');
// var navMenu = document.getElementsByClassName('headerBorder');

[].forEach.call(menus, function(m) {
    m.addEventListener('click', function() {
        m.classList.toggle('open')
    });
})

function menuOnClick() {   
    console.log('clicked')
    document.getElementById('navMenu').classList.toggle('show')
}

