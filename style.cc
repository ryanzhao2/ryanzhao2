@keyframes fadeInMove {
  0% {
    opacity: 0;
    transform: translateY(-20px);
  }
  100% {
    opacity: 1;
    transform: translateY(0);
  }
}

.animated-text {
  animation: fadeInMove 2s ease-in-out;
}
