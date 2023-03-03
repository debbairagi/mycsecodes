from tkinter import*
from PIL import ImageTk, Image

root = Tk()
root.title('Images & Icons')
root.iconbitmap('I:/Debbindu/mycsecodes/tkinter/logo.ico')
root.geometry('1280x720')


my_img = ImageTk.PhotoImage(Image.open("I:/Debbindu/mycsecodes/tkinter/sort.png"))
my_level = Label(image=my_img)
my_level.pack()



root.mainloop()