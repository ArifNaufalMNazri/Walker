# Stepping tests--Negative x_axis and Triangle Step
I adjusted my code so that I could make the leg move in the negative x-axis, tried out a triangular stepping sequence, and adjusted my stand
<p align="center"><img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/LegTest1Iteration6-ezgif.com-video-to-gif-converter.gif" height=500 width=300></p>

## Adjusting my stand
I added supports underneath my stand so it would not shake as theleg swung
<p align="center">
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/AddedStands.jpg" height=600 width=300>
</p>

## Code adjustments
I changed how my code took in -x values so that it would return a different value for the servo angles. BY changing what angles I took and what I subtracted, I was able to correctly transalate the position of the foot in the -x axis. 
<p align="center">
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/codeScreenshots/CodeAdjustmentScreenshot(Iteration5).png">
</p>


| Positive x-axis | Negative x-axis |
|:---------------:|:---------------:|
|<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/LegTestIteration6PositiveXAxis-ezgif.com-video-to-gif-converter.gif" height=500 width=300>|<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/LegTestIteration6NegativeXAxis-ezgif.com-video-to-gif-converter.gif" height=500 width=300>|

## Triangle Stepping Sequence
Afterwards, I created a function that took two x and y values, one for the triangles step, and one for the homing step. The triangle step caused the foot to move in a triangle based on the kinematics calculations. The homing step gave the triangle the third point it needed to create a triangle, and also served as an anchor position for the foot for reference. 
<p align="center"><i>Triangle step function</i></p>
<p align="center"><img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/codeScreenshots/CodeAdjustment2(Iteration5).png"></p>

<p align="center"><i>Leg triangle step(Video was cut off, but the actual video shows the leg moving to its homing position after travelling to the -x axis</i></p>
<p align="center"><img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/LegTestItration6TriangleSequence-ezgif.com-video-to-gif-converter.gif" height=500 width=300></p>

## What's next
I'm planning on finally integrating the foot servo into the leg. I'll have to create new functions and workout new equations to allow the foot to always maintain its 90 degree angle position. 
- Integrate 3rd Servo to leg
- Create new kinematics equation to allow 3rd servo to maintain 90 degree orientation
- Transalate calculations into code

