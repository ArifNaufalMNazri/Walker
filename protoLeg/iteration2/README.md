# Iteration2-Button test on first prototype leg
## Sample video
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotVideos/legButtonTestVideo.gif">

## Description

- Attached the leg to a cupboard so leg movement could be seen

- Moved each joint during testing (ankle joint movement not shown in video)

- Link to code: [View code](https://github.com/ArifNaufalMNazri/Walker/blob/main/code/legButtonTest.ino)

## Problems encountered
The knee servo moved in the <i>opposite</i> direction to the other servos because of its orientation. This prevented me from creating a function that would update the angle of the servos, so I resorted to this long chain of <i>if-else statements</i>: 

<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/codeScreenshots/CodeProblem1ScreenShot.png">

## What's next
I'm currently happy with how the leg moves. I'll leave the servo orientation as it is now, but I might have to change it in the future. Next, I'll work on: 
- Inverse kinematics calculations
- Putting the inverse kinematics calculations into code

