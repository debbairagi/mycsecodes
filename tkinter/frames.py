from tkinter import *
from PIL import ImageTk, Image

root = Tk()
root.title('Frames')
root.iconbitmap('I:/Debbindu/mycsecodes/tkinter/logo.ico')

frames = LabelFrame(root, text="This is my frame", padx=5, pady=5)

frames.pack(padx=10, pady=10)

b = Button(frames, text="Don't click here!")



root.mainloop()