.hamburger-menu {
  font-size: 30px;
  padding: 4px;
  width: 1em;
  height: 1em;
  position: absolute;
  right: 6.4vw;
  top: 4vh;
  z-index: 10;
}
.hamburger-menu div {
  width: 1em;
  height: 0.1em;
  background-color: white;
  margin-bottom: 0.3em;
  transition: all 0.3s ease-out;
}
.hamburger-menu.open .one {
  transform: translateY(0.4em) rotate(45deg);
}
.hamburger-menu.open .two {
  opacity: 0;
}
.hamburger-menu.open .three {
  transform: translateY(-0.4em) rotate(-45deg);
}
@media screen and (min-width: 768px) {
  .hamburger-menu {
    display: none;
  }
}

/*# sourceMappingURL=burger.c.map */
