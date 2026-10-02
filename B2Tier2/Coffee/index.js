const hamburgerBtn = document.getElementById('hamburgerBtn');
const navLinks = document.getElementById('navLinks');

hamburgerBtn.addEventListener('click', () => {
    navLinks.classList.toggle('active');
    const icon = hamburgerBtn.querySelector('i');
    if (navLinks.classList.contains('active')) {
        icon.className = 'fa-solid fa-xmark';
    } else {
        icon.className = 'fa-solid fa-bars';
    }
});

document.querySelectorAll('.nav-item').forEach(link => {
    link.addEventListener('click', () => {
        navLinks.classList.remove('active');
        hamburgerBtn.querySelector('i').className = 'fa-solid fa-bars';
    });
});

function scrollToSection(id) {
    document.getElementById(id).scrollIntoView({ behavior: 'smooth' });
}

function filterMenu(category, element) {
    document.querySelectorAll('.tabBtn').forEach(btn => btn.classList.remove('active'));
    element.classList.add('active');

    const cards = document.querySelectorAll('.menuCard');
    cards.forEach(card => {
        if (category === 'all' || card.getAttribute('data-category') === category) {
            card.style.display = 'flex';
        } else {
            card.style.display = 'none';
        }
    });
}

function addToCart(itemName) {
    showToast(`${itemName} added to your order!`);
}

function handleFormSubmit(event) {
    event.preventDefault();
    showToast("Thank you! Your message/reservation has been sent.");
    document.getElementById('contactForm').reset();
}

function showToast(message) {
    const toast = document.getElementById('toastNotification');
    const toastMsg = document.getElementById('toastMsg');
    toastMsg.innerText = message;
    toast.classList.add('show');

    setTimeout(() => {
        toast.classList.remove('show');
    }, 3000);
}