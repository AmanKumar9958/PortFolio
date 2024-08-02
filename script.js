// For sticky navbar
window.addEventListener('scroll', function(){
    const navbar = this.document.getElementById('navbar');
    const page1 = this.document.getElementById('home').offsetHeight;
    
    if(this.window.scrollY >= page1){
        navbar.classList.add('sticky');
    }
    else{
        navbar.classList.remove('sticky');
    }
})

// for complete page scrolling
document.addEventListener('DOMContentLoaded', () => {
    let currentPage = 0;
    const pages = document.querySelectorAll('.page');
    const totalPages = pages.length;
    const navbarLinks = document.querySelectorAll('#navbar a');

    function scrollPage(direction) {
        currentPage = Math.max(0, Math.min(totalPages - 1, currentPage + direction));
        pages[currentPage].scrollIntoView({ behavior: 'smooth' });
        setActiveLink();
    }

    function setActiveLink() {
        navbarLinks.forEach(link => link.classList.remove('active'));
        const activeLink = document.querySelector(`.navbar a[href="#${pages[currentPage].id}"]`);
        if (activeLink) {
            activeLink.classList.add('active');
        }
    }

    window.addEventListener('wheel', (event) => {
        if (event.deltaY > 0) {
            scrollPage(1);
        } else {
            scrollPage(-1);
        }
    });

    window.addEventListener('keydown', (event) => {
        if (event.key === 'ArrowDown') {
            scrollPage(1);
        } else if (event.key === 'ArrowUp') {
            scrollPage(-1);
        }
    });
    setActiveLink();
});
