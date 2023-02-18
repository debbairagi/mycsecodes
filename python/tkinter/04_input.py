from tkinter import *

root = Tk()

e = Entry(root, width=50, borderwidth=5)
e.pack()
e.insert(0, "Enter your Name:  ")

def myclick():
    hello = "Hello " + e.get()
    myLabel = Label(root, text= hello)
    myLabel.pack()

myButton = Button(root, text = "Enter your name Stock Quote", command=myclick,fg="blue", bg="red")
myButton.pack()

root.mainloop()
