from tkinter import *
import time

# Define the window size and the colors used in the animation
WINDOW_SIZE = 800
BACKGROUND_COLOR = 'white'
ACTIVE_COLOR = 'red'
SORTED_COLOR = 'green'
DEFAULT_COLOR = 'blue'

# Define the delay time (in milliseconds) between each step of the algorithm
DELAY = 10

class MergeSortVisualization:
    def __init__(self, master):
        self.master = master
        self.canvas = Canvas(self.master, width=WINDOW_SIZE, height=WINDOW_SIZE, bg=BACKGROUND_COLOR)
        self.canvas.pack()
        self.elements = []
        self.width = None
        self.initialize_elements()

    def initialize_elements(self):
        input_str = input("Enter the list of numbers (separated by spaces): ")
        self.elements = list(map(int, input_str.split()))
        self.width = WINDOW_SIZE // len(self.elements)
        self.draw_elements()

    def draw_elements(self):
        self.canvas.delete('all')
        for i in range(len(self.elements)):
            x0 = i * self.width
            y0 = WINDOW_SIZE - self.elements[i]
            x1 = (i + 1) * self.width
            y1 = WINDOW_SIZE
            self.canvas.create_rectangle(x0, y0, x1, y1, fill=DEFAULT_COLOR)
        self.master.update()

    def merge(self, start, mid, end):
        left_half = self.elements[start:mid+1]
        right_half = self.elements[mid+1:end+1]

        i, j, k = 0, 0, start

        while i < len(left_half) and j < len(right_half):
            if left_half[i] <= right_half[j]:
                self.elements[k] = left_half[i]
                i += 1
            else:
                self.elements[k] = right_half[j]
                j += 1
            self.color_element(k, ACTIVE_COLOR)
            k += 1

        while i < len(left_half):
            self.elements[k] = left_half[i]
            self.color_element(k, ACTIVE_COLOR)
            i += 1
            k += 1

        while j < len(right_half):
            self.elements[k] = right_half[j]
            self.color_element(k, ACTIVE_COLOR)
            j += 1
            k += 1

        for i in range(start, end+1):
            self.color_element(i, SORTED_COLOR)

    def merge_sort(self, start, end):
        if start >= end:
            return

        mid = (start + end) // 2
        self.merge_sort(start, mid)
        self.merge_sort(mid+1, end)
        self.merge(start, mid, end)

    def color_element(self, index, color):
        x0 = index * self.width
        y0 = WINDOW_SIZE - self.elements[index]
        x1 = (index + 1) * self.width
        y1 = WINDOW_SIZE
        self.canvas.create_rectangle(x0, y0, x1, y1, fill=color)
        self.master.update()
        time.sleep(DELAY/1000)

    def sort(self):
        self.merge_sort(0, len(self.elements)-1)
        self.color_all_elements(SORTED_COLOR)

    def color_all_elements(self, color):
        for i in range(len(self.elements)):
            self.color_element(i, color)

root = Tk()
root.title('Merge Sort Visualization')
app = MergeSortVisualization(root)
root.after(0, app.sort)
root.mainloop()
