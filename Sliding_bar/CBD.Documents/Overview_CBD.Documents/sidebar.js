// Function to toggle the "showMenu" class on arrow click
function toggleMenu(e) {
  const arrowParent = e.target.parentElement.parentElement; // Selecting main parent of arrow
  arrowParent.classList.toggle("showMenu");
}

// Add click event listeners to all elements with the class "arrow"
const arrows = document.querySelectorAll(".arrow");
arrows.forEach((arrow) => {
  arrow.addEventListener("click", toggleMenu);
});

// Toggle the "close" class on the sidebar when the sidebarBtn is clicked
const sidebar = document.querySelector(".sidebar");
const sidebarBtn = document.querySelector(".bx-menu");

sidebarBtn.addEventListener("click", () => {
  sidebar.classList.toggle("close");
});
