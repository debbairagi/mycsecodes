from tkinter import *

root = Tk()

def myclick():
    myLabel = Label(root, text="Look! I clicked a button!!")
    myLabel.pack()

myButton = Button(root, text = "click me!", command=myclick,fg="blue", bg="red")
myButton.pack()

root.mainloop()