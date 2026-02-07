# Walker

<p align="center"> 
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/Robot%20photo.jpg" height=500 width=500>
</p>

## Project Overview 🔍
I created a 2-legged walking robot to learn how inverse kinematics works, robot design, and motor control. This project is intended as an experiment to explore robotics and moving systems. 

## Repository files 📁
- /designs: Designs for the robot, including sketches and CAD
- /code: Test code for the robot
- /media: Photos and videos of tests

## Problems I solved & Build process🗒️

### Design

- I had to come up with designs for the robot. I started with an initial sketch of the robot, shown in the link below.

➡️ [View Iteration 1](https://github.com/ArifNaufalMNazri/Walker/blob/main/designs/iteration1/README.md)

- I represented the drawing in CAD to better visualize it. 

➡️[View Iteration 2](https://github.com/ArifNaufalMNazri/Walker/blob/main/designs/iteration2/README.md)


### Leg Prototype

- With the design completed, I moved on to building a prototype leg to test movement. 

➡️[View Iteration 1](https://github.com/ArifNaufalMNazri/Walker/blob/main/protoLeg/iteration1/README.md)

- I conducted button tests with the leg to see how each servo moved. 

➡️[View Iteration 2](https://github.com/ArifNaufalMNazri/Walker/blob/main/protoLeg/iteration2/README.md)

- Kinematics equations were derived and implemented into the program. A new stand for leg testing was built to test more dynamic movement.

➡️[View Iteration 3](https://github.com/ArifNaufalMNazri/Walker/blob/main/protoLeg/iteration3/README.md)

- The hip servo was not handling the weight well, so it was replaced witha stronger servo. New stand made of cardboard was made for transportability.

➡️[View Iteration 4](https://github.com/ArifNaufalMNazri/Walker/blob/main/protoLeg/iteration4/README.md)

- The calculations for movement in the negative x-axis were corrected and a basic triangle-stepping sequence was tested

➡️[View Iteration 5](https://github.com/ArifNaufalMNazri/Walker/blob/main/protoLeg/iteration5/README.md)

- I added the ankle servo and calculated new equations to determine its angle in space

➡️[View Iteration 6](https://github.com/ArifNaufalMNazri/Walker/blob/main/protoLeg/iteration6/README.md)

### Final Robot
I connected the two servos with duct tape and used a new stepping sequence for walking. Finally, the robot walked as intended, albeit shakily. The experiment was deemed a success. 

<p align="center">
  <img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/RobotWalkingVideo%20-%20Made%20with%20Clipchamp%20(1).gif" height=500 width=500>
</p>

Link to code: ➡️[View Code](https://github.com/ArifNaufalMNazri/Walker/blob/main/WalkerCode.ino)

## Last thoughts 🧠
I am glad that the robot managed to walk on its own two feet. It is my first experiment into moving robot systems, so I was not surprised it came off a bit shaky. The problems I solved, however, taught me a lot about trigonometry, code, inverse kinematics and motor control. I plan to use this knowledge and more to create even better projects in the future. That's all from me for now. Thank you for reading. 
