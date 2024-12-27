<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Ryan's Profile</title>
  <style>
    /* Keyframe for the text animation */
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
      text-align: center;
    }

    /* Style adjustments for the images and badges */
    img {
      margin: 5px;
    }

    /* Ensures the page is responsive */
    .centered-content {
      text-align: center;
    }
  </style>
</head>
<body>
  <!-- Animated Text -->
  <h2 class="animated-text">Hi 👋! My name is Ryan and I'm a CS student from Canada</h2>

  <br>

  <!-- Stats and Languages -->
  <div class="centered-content">
    <img src="https://github-readme-stats.vercel.app/api?username=ryanzhao2&hide_title=false&hide_rank=false&show_icons=true&include_all_commits=true&count_private=true&disable_animations=false&theme=omni&locale=en&hide_border=false" height="150" alt="stats graph" />
    <img src="https://github-readme-stats.vercel.app/api/top-langs?username=ryanzhao2&locale=en&hide_title=false&layout=compact&card_width=320&langs_count=5&theme=omni&hide_border=false" height="150" alt="languages graph" />
  </div>

  <br>

  <!-- Tech Stack Icons -->
  <div class="centered-content">
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" height="35" alt="python logo" />
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/java/java-original.svg" height="35" alt="java logo" />
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/javascript/javascript-original.svg" height="35" alt="javascript logo" />
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/react/react-original.svg" height="35" alt="react logo" />
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" height="35" alt="c logo" />
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/bash/bash-original.svg" height="35" alt="bash logo" />
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/html5/html5-original.svg" height="35" alt="html5 logo" />
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/css3/css3-original.svg" height="35" alt="css3 logo" />
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/amazonwebservices/amazonwebservices-line-wordmark.svg" height="35" alt="aws logo" />
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/mongodb/mongodb-original.svg" height="35" alt="mongodb logo" />
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/express/express-original.svg" height="35" alt="express logo" />
  </div>

  <br>

  <!-- Social Links -->
  <div class="centered-content">
    <a href="https://www.linkedin.com/in/ryanzhao2/" target="_blank">
      <img src="https://img.shields.io/static/v1?message=LinkedIn&logo=linkedin&label=&color=0077B5&logoColor=white&labelColor=&style=for-the-badge" height="35" alt="linkedin logo" />
    </a>
    <a href="https://mail.google.com/mail/u/0/#inbox" target="_blank">
      <img src="https://img.shields.io/static/v1?message=Gmail&logo=gmail&label=&color=D14836&logoColor=white&labelColor=&style=for-the-badge" height="35" alt="gmail logo" />
    </a>
  </div>

  <br>

  <!-- Snake Animation -->
  <img src="https://raw.githubusercontent.com/ryanzhao2/ryanzhao2/output/snake.svg" alt="Snake animation" />

  <br>

  <!-- Profile Counter -->
  <div class="centered-content">
    <img src="https://profile-counter.glitch.me/ryanzhao2/count.svg?" />
  </div>
</body>
</html>
