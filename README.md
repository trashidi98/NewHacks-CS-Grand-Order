# About this Hackathon/Project 

## What was the goal of this Hackathon?

The goal of this hackathon was to introduce programmers to the idea of hackathons. I thought it was a great idea and applied. 

## What project did you choose to do?

There were a couple of challenges listed at the hackathon, the one we chose was the IOT hack. The issue we saw was that IOT was good and growing market, but adding an 
element of machine learning could probably solidify IOT products and make them as important and as needed as the television in the 90's. 

## What was your solution 

Our solution was two-fold. First, I, being the Computer Engineering student used Arduino to model a simple IOT model. The model is supposed to be one of many IOT solutions 
in a home IOT kit.  It mimicked a sensor that would open the blinds when a person walked in and then closed them as the person walked out. 

Then we brainstormed how IOT sensors and data could be used in tandem with machine learning to create smarter IOT solutions. The use-case we chose to present was predicting 
wake up times. This would allow IOT devices to change lighting, open blinds and whatnot according to resident's wake-up times.

Here are some pictures of our model...

---

![Image](https://github.com/trashidi98/NewHacks-CS-Grand-Order/blob/master/Front%20View.png)


---

![Image](https://github.com/trashidi98/NewHacks-CS-Grand-Order/blob/master/Side%20View.png)

## The Goal for the final Product 

__Our final product was supposed to be an IOT kit that residents could buy. The kit contains sensors and data collecting instruments that are connected to a microcontroller 
within the house. Machine learning generally takes a lot of computational power. We would include a processing unit like a _Rasberry Pi_ that processes the data centrally 
so the data is not leaving the premises and has a lower chance of being intercepted. Or using a platform like NVIDIA Cloud ML we could send the data to NVIDIA servers to 
be processed at high speeds.__ 

__We were also planning other features like emergency alerts, if the resident isn't home and isn't expecting visitors the resident may get a text from the IOT system 
notifying them about a potential robbery__ 
 

## How does your solution work

Well the model was built with an Arduino UNO board and some sensors and a servo motor. The code is included in this repository. It's functionality was explained above. 

The machine learning model was a little bit harder to do. We created a set of data based on one of our own daily wake-up times. The result we noticed was cyclical, and 
therefor could be modelled by a sinusoidal model. 

___Could this be an issue of over-fitting?___

Possibly, but I don't think so. Over-fitting means that a model cannot be extrapolated to fit other sets of data. Fortunately _most_ people have cyclical sleep patterns 
(minus my brother maybe) and therefor I would say it works! 


## What did you learn?

I learned a couple of important topics

- IOT and its applications 
- Arduino prototyping 
- Machine Learning 
	- Curve fitting 
	- Reinforcement Learning 
	- Classification 
	- Data sets
	- Training 
- Using Jupyter notebooks 
- Matplotlib and numpy 
- Presentation skills 
- Working with total strangers and still getting it done 
