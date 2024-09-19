9th September 24
######################################
You are working your way through your cs50 files in your repo to tidy them up and create a simpler folder system. 

The file prefixed with an x is the file you are currently working on. 

Refer to written notes as you progress through harder and harder ifelse code. 

Test yourself with try.c for current and every new function you come accross. Then add the function to the try.c task list and also add the function into a categorized folder within cs50 rating it from 1 to n accordingly (see below) 

each file is ordered from 01 to 02 03 04.....to rate the difficulty (within each folder). Generaly 01 is for writing directly into main, 02 is for creating your own function, 03 is for beginning to be aware of inputs and outputs and 04 is for using the output.


#####################################

Below are your running notes. Latest on top
15th September 24
try.c has your latest code to work on. You are trying a more difficult version with usefule input output.

11th September 24
You successfully wrote a function in cs50x/ifelse/02.ifelse. You need to right up your errors and fixes inside an error file and also figure out if you can return something more useful than simply return 0;
You might try and re-create your errors. 
1. One curly bracket was the wrong way round
2. You forgot a comma at the end of the first printf variable (x)
3. "Control reaches end of non void function" You forgot to add "return 0" at the end of your function. 
So, re-create these errors and paste the error message in your error log.

 
9th september 24
Shall we now organise your code into neat folders? Lets try. 

You have renamed the current file you are working through by adding an x at the beginning, (xifelse). So you know which one to come back to. 
The plan is to put the code in the xifelse file into your newly created ifelse folder and number them for ease of difficulty. Difficulty may simply mean puttin g your code into its own function and calling it in main.

Before moving your code over to its own file inside the ie ifelse folder, test the code in try.c first. Tip: It helps to hand write the code before typing it.  
Also keep the instruction in try.c so you can repeat these collected instructions (one per visit).

24th April 24

lets test a push

You are currently trying to work out the contents of the make file and the notes for this is in 'make'

Below hash block stays on top but can be changed. Updates are latest on top.
#####################
You are going to be working on the files in this repo to convert them into a more digestible and easy-to-access resource for introductory C code.

This file explains where you are. It will also be a chronological reference point as to the tasks you've had to carry out such as cloning github locally and using the cs50 library locally etc, and where you have put instructions/guides on how to do these. 

I'll try and keep quick reference info at the top of this file and otherwise show a chronological block of important notes with the latest on top. 

So I should be able to know fairly quickly, what stage I am at in this repo by looking at the most up to date block of info.

Status: Working through 2.basics file.
#######################

23rd April 2024
Working through chat gpt, currently trying to understand symbols and their use in programming. % $ etc.



9th April 24
Then move onto working through the 2.basics file.



Looking forward, Should we consider simplifying this repo into an easy look-up reference for C code?







OLDER
12th february 24
A VERY IMPORTANT UPDATE
You have created a cs50_story file which offers a more comprehensive reference to your journey through coding and all it entails. Once you feel you have a decent mastery of something then it can be added to other files in a more susinct way.

So this has become your first port of call for now. 

gedit --new-window /home/bodhi/Desktop/Cs50x_practice_21/1.cs50_story

8th January 24
This file is the first port of call when doing cs50 practice 21 so you know where you are overall. After all, it's easy to get lost!

You are currently updating your github basics file locally on Carl's laptop :Desktop git_cs50_practice_2021 > git_basics  (Same location as this file)
As normal, there should be a 'stopped here' location as your starting point.









Below to be checked at a later date. 
# C_practice

For beginners who are overwhelemed with coding! Or someone who just wants a bit of practice.

My Simple Practice Tasks in C (Cs50x Harvard Course 2020)

This is a random selection of brief tasks I added to my repo whilst working through the Harvard CS50 introduction to computer science course 2020.

I'm not inventing anything here. I got the code mostly from the cs50 course and the broader internet. I have mostly isolated smaller sections of the code into easily digestible bite-size manageable sections.

So this is what I recomend. 
1) Open a file and read through the code and comments. 
2) Try to recreate the code without looking, testing it in the cs50 IDE.
3) Where you have made mistakes (and there will be many), make a note of them in a separate 'common error' file. (Read this every now and then to refresh your memory)

The 'common error' file is particularly useful if you paste the error massage alongside the fix you made. This has saved me many hours of working out a problem I had previously dealt with weeks or months ago that I had forgotten about.


So the goal is to be able to recreate the code in a blank file so you build up the brain muscle as you move forward onto more complex stuff. 

It's important you tackle things in small steps and give yourself lots of breaks.

When things go wrong (which is fairly common) Just remember that your brain is not a computer so don't be disapointed when it doesn't act like one.

If you become disolusioned because you are spendig such a long time on coding the 'simplest' of tasks, be aware that taking this time builds solid foundations.

Think of this exercise as building a menu of tools you can use for future coding jobs. The more time you spend understanding loops/arrrays/strings etc the more you can see which tool (or combination of tools) is best suited for the specific task.

Just to point out that there are times when I have added ALL the libraries (at the top) for every task, regardless of whether or not they are required. There is no particular reason for this other than laziness in not having to think about which functions come from which libraries. 
Yes, this is lazy and I plan over time to only introduce libraries as and when required. 

I am not a teacher. I created these tasks to improve my muscle memory and -as i said - develop a deeper understanding of how memory works, before working on more complex algorythms.

I believe that getting a solid grounding on the basic concepts of C, will help me better understand abstraction and really grasp the fact that when I type a line of code, a lot is happening under the hood related to C. This gets more exciting when delving into other higher level languages.

My code won't be perfect and I welcome feedback from others. (If I don't get feedback then how can I learn?)

My explanations may not be accurate but they have helped me to understand every step of the code.

I try, whenever I can, to run a program in main then run the same program as my own function. This isn't alwys straight forward and is well worth the practice. I am particularly thinking about the 'swap' task.

Anyway, I hope beginners have a go and find this useful.

##############################
In order to run your code locally, you downloaded the cs50 library and compiled
the libraries and also create your own makefile(Using chatgpt), to run your code
 using thecs50 library.
You have managed to do this successfully.

The way you have structured this is to have the libcs50 library inside the Cs50x
_practice_21 repo. Your try.c file is in the same main Cs50x_practice_21 folder
along with the makefile. This is the file you initially use to try out your code
.

The makefile (with instructions including cloning the cs50 library) are at drive
/coding/makefile_carl.

You also have written notes in the office.
#############################
