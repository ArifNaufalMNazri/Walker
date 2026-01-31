# Third servo-Update servo angle functions-Angle orientation-Second leg
A lot happened in this iteration. Let's go through them one by one. 
## Third servo
I added the third servo by orienting it at 90 degrees and putting it on its side, screwing it into the leg. 
<p align="center">
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/thirdservoscreenshot.jpg" height=600 width=500>
</p>

## Update servo angle functions
I created new functions to update the servos positions so they all can change at the same rate. They are called `step()` and `updateAngle()`
Further explanations are in comments in the code. 
<p align="center">
  
<i>step()</i>
  
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/codeScreenshots/step-screenshot.png">
</p>

<p align="center">
  
<i>updateAngle()</i>

<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/codeScreenshots/updateAngle-screenshot.png">
</p>

[Get code here](https://github.com/ArifNaufalMNazri/Walker/blob/main/code/legTestsCode2/legTests.ino)

## Angle orientation
I changed the leg lengths to be equal to form an isosceles triangle, making the calculations easier. I first started with updating the third servo angle as the leg was straight. 

<p align="center">
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/straight-legtest1-ezgif.com-video-to-gif-converter.gif" height=600 width=500>
</p>

Once I finished orienting that, I moved on to making the leg move up and down and maintaing the third servos parallel angle against the ground. 

<p align="center">
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/updown-legtest-gif.gif" height=600 width=500>
</p>

By adding a function `findC()` into the kinematics file, I could calculate the angle for the third servo.

<p align="center">

<i>findC</i>

<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/codeScreenshots/findC-screenshot.png">

</p>

## The second leg 
After I finished orienting the angles of the third servo, I built an identical leg as the first one to serve as the second leg
<p align="center">
<img src="https://github.com/ArifNaufalMNazri/Walker/blob/main/media/robotImages/two-legsphoto.jpg">
  
<i>Second leg on left, first leg on right</i>
</p>

## What's next
I am going to do some final tests with the first and second leg to see whether all the angles are calculated correctly. Then, afterwards, I'll start building the actual robot. The project is nearing completion. 
