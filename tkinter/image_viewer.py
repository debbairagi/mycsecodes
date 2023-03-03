from tkinter import*
from PIL import ImageTk, Image

root = Tk()
root.title('Images & Icons')
root.iconbitmap('I:/Debbindu/mycsecodes/tkinter/logo.ico')
root.geometry('1280x720')


my_img1 = ImageTk.PhotoImage(Image.open("I:/Debbindu/mycsecodes/tkinter/sort.png"))
my_img2 = ImageTk.PhotoImage(Image.open("I:/Debbindu/mycsecodes/tkinter/pic2.png"))
my_img3 = ImageTk.PhotoImage(Image.open("I:/Debbindu/mycsecodes/tkinter/pic1.png"))

image_list = [my_img1,my_img2, my_img3]



my_level = Label(image=my_img1)
my_level.grid(row=0, column=0, columnspan=3)


def forward(image_number):
    global my_level
    global button_forward
    global button_back

    my_level.grid_forget()
    my_level = Label(image=image_list[image_number-1])

def back():
    global my_level
    global button_forward
    global button_back

button_back = Button(root, text="<<" ,command=back)
button_exit = Button(root, text='Exit Program', command=root.quit)
button_forward = Button(root, text=">>", command=forward)


button_back.grid(row=1, column=0)
button_exit.grid(row=1, column=1)
button_forward.grid(row=1, column=2)

root.mainloop()