# static 
- has obtain defualt position
- top/bottom/left/right/z-index has no effect 

# relative 
- obtain normal flow of positioning 
- top/bottom/left/right/z-index will work 
- it doesn't alter other box 

# Absolute 
- it is removed from flow 
- it is relative position to its first non static ancestor 
- t/b/l/r/z work 

# fixed 
- similar to absolute element 
- it is relative to browser window 

# sticky 
- it is combinaiton of relative + fixed 
- this element is position based on user scroll position ( jaise hi scroll over ho jaeyga , then it is moving as a normal flow of DOM )