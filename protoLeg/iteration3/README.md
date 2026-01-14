# Iteration3-Test Kinematics and New Leg Stand
## Kinematics calculations
I needed a way to calculate the angles the servos needed to turn in order to change the foot's position. In order to do that, I ignored the turning the foot for now and focused more on turning the hip and knee servos. Here are the diagrams of my calculations: 

<p>
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/calculations/KinematicsCalculations1.jpg" height=225 width=225>
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/calculations/KinematicsCalculations2.jpg" height=400 width=225>
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/calculations/KinematicsCalculations3.jpg" height=400 width=225>
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/calculations/KinematicsCalculations4.jpg" height=400 width=225>
</p>

<i>Images clearer in media folder</i>

## Description
I used **cosine** and **sin** rules in my calculations, along with a coordinate system to get the desired angles. All the angles calculated lead up to the calculation of angle a and b. I also broke down the calculations step by step, which made it easier for me to transalate it into code. 

<p align="center"><img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/codeScreenshots/KinematicsCodeScreenshot.png" height=400></p>

## Changing the leg stand
I realized the leg stand I used on my cupboard was too flimsy, so I changed it to balance on a stick laying between a lamp and a tissue box, which do not appear in this photo. 

<p align="center">
  <i>Old stand</i>
</p>
<p align="center">
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/LegTest(OldStand).jpg" height=300 width=300>
</p>

<p align="center">
  <i>New stand</i>
</p>
<p align="center">
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/LegTest(NewStand).jpg" height=300 width=300>
</p>

## Problems encountered
- **Hip** servo too **weak** to carry weight of leg and **jitters**. Need to replace with stronger servo
- New stand **uncomfortable** to move around and **weak**. Need to build a stronger one.
- Remove ankle servo for testing

## What's next
- Buy a **stronger servo** to replace the hip servo.
- Build **new stand** for leg testing
