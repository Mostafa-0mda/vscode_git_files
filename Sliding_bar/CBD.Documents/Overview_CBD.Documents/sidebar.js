// Function to toggle the "showMenu" class on arrow click
function toggleMenu(e) {
  const arrow = e.target;
  const arrowContainer = arrow.parentElement.parentElement;
  const containerHasShowMenuClass = arrowContainer.classList.contains("showMenu");
  if (containerHasShowMenuClass) {
    arrowContainer.classList.remove("showMenu");
  } else {
    arrowContainer.classList.add("showMenu");
  }
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
