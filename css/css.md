# Box Model 

##  Extrinsic vs Intrinsic sizing 
- When you set height and width to a box 
- with Extrinsic sizing Box size remain same, child element can not alter box size 
- It controls the sizing of its child content.
- but if child element is large from box, content/child overflow from box 


### One way to prevent overflow is to allow the box to be intrinsically sized by either 
	- unsetting the width
	- setting the `width: min-content` 

- you can use overflow with extrinsic sizing
- it's much more difficult for there to overflow with intrensic property because our box will resize with its content 

 
--------------------------------------------------------------------------------------------

## Controlling the box model 
### display : inline , inline-block , block 
- inline : does nit effect if width and height is given 
- inline-block : width and height is appear
- block : width and height is appear and line end also 



- box-sizing : content-box , border-box
** default value for box-sizing is content-box 

- Having content-box as the value of box-sizing means that when you set dimensions, such as a width and height, they will be applied to the content box. If you then set padding and border, these values will be added to the content box's size.

----------------------------------------------------------------------------------------------

# selector 

selector cheat sheet : https://drive.google.`  `1		`1	xcom/file/d/1LED5oRVfC9_sA9JQJsrzQGEQsGveImO_/view?usp=drive_link
>

----------------------------------------------------------------------------------------------

# The Cascade 
- 
----------------------------------------------------------------------------------------------
# specificity 
- css algorithm about specificity describe which rule is applicable 
- ex: suppose on same element 2 diffrent rule applied 
  `	<button class="branding">Hello, Specificity!</button>`
  `button {
  color: red;
  }

  .branding {
  color: blue;
  }
  `
	On these situation specificity algorithm help 
	It depennd on specificity scoring 
	- Every selector type have different scoring 

	1. universal selector (*) :                              1 point 
	2. element (div) :                                       1 point 
	3. pseudo element selector (::selection ) :              1 point 
	4. class (.my_button) :                                  10 point 
	5. pseudo class (:hover) :                               10 point 
	6. attribute ([href='#']) : 														 10 point 
	7. ID selector (#my_button)															 100 point 
	8. Inline css (<div style="color: red"></div>) :         1000 point 
	9. !important 																					 1000 point 

## Specificity in context
- The specificity of each selector that matches an element is added together. Consider this example HTML:
	<a class="my-class another-class" href="#">A link</a>
	1. a = 1	
	2. a.my-class = 11
	3. a.my-class.another-class = 21
	4. a.my-class.another-class[href] = 31 
	5. a.my-class.another-class[href]:hover = 41 
   
## Visualizing specificity
- only class ko dekh kr direct specificity score kaise nikale 

	#my_id   -    .my_class 			-        div 
								[attribute]      				 ::selection 
								:hover 
	most specific  ---------------------> least specific 

	ex : 
	1. a.my-class.another-class[href]:hover : 0-4-1

## Pragmatically increasing specificity
- Kisi ka bhi specificity score kaise increase kr sakte hai by program 
	$ simple usko double krke 

	.my-button and .my-button.my-button

	both both work similary but second selector has more specificity score
	
### if 2 program have same specificity score than new instance win 

----------------------------------------------------------------------------------------------------------
# inheritance 

----------------------------------------------------------------------------------------------------------
# sizing unit 


----------------------------------------------------------------------------------------------------------
# shortcut key in vs code 
- add margin : m0
- add padding : p0 
- add marging + add padding : m0+p0
- marging top right bottom left : m1-2-3
- add div with class : .class_name  
- add div with id : .id_name  
  
