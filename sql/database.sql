{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 1,
   "metadata": {},
   "outputs": [
    {
     "ename": "SyntaxError",
     "evalue": "invalid syntax (662299305.py, line 1)",
     "output_type": "error",
     "traceback": [
      "\u001b[1;36m  Cell \u001b[1;32mIn[1], line 1\u001b[1;36m\u001b[0m\n\u001b[1;33m    CREATE TABLE student (\u001b[0m\n\u001b[1;37m           ^\u001b[0m\n\u001b[1;31mSyntaxError\u001b[0m\u001b[1;31m:\u001b[0m invalid syntax\n"
     ]
    }
   ],
   "source": [
    "CREATE TABLE student (\n",
    "    student_id int PRIMARY KEY,\n",
    "    name varchar(20),\n",
    "    major varchar(20)\n",
    ");"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "drop table student;"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "ALTER TABLE student ADD gpa decimal\n"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "ALTER TABLE student DROP COLUMN gpa;"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "INSERT INTO student VALUES(1, 'Jack', 'Biology');\n",
    "INSERT INTO student VALUES(2, 'Jack', 'Socialogy');\n",
    "INSERT INTO student(student_id, name) VALUES(3, 'Claire');\n",
    "INSERT INTO student VALUES(4, 'Jack', 'Biology');\n",
    "INSERT INTO student VALUES(5, 'Mike', 'Computer Science');"
   ]
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.11.2"
  },
  "orig_nbformat": 4,
  "vscode": {
   "interpreter": {
    "hash": "e8a7989adf5969ac944ea0d01faadbc566a5702dba254062d02e69ec8f957a1a"
   }
  }
 },
 "nbformat": 4,
 "nbformat_minor": 2
}
