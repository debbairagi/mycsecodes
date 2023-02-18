# In school life, every student has experienced the historical pen 
# fight game. In this game, two or more players play with their
#  pens on any surface like table and hit their pen with finger
#   to knock down opposition’s pen. Now a pen fight competition
#    is going to take place for girls in Bangladesh.

# The rule of this game is pretty different from typical pen
#  fight game. Here each competent indexed from 1 to N is 
#  given one pen each indexed from 1 to N initially i.e. 
#  ith competent will get ith pen. The judge of this
#   tournament assigns score for each pen which is 
#   given as an array S of N elements S = {S1, S2, S3…., Sn}
#    where Si denotes the score of ith pen. At each round,
#     only two players play against each other. The player 
#     who has pens with total scores greater than other one,
#      will win this round and take all the pens of opponent 
#      and all the opponent's score will be added with the winner's score. 
#      Note that, if two players have pens with same score or any of the
#       players has no pen, no round will take place and nothing will happen.

# Now Muna is a spectator of this event and very fond of query. 
# She has been given three types of query based on this tournament. 
# First format of query is 1 X Y which means X will play against Y.
#  Second query is 2 X – the number of pen Xth player currently owns. 
#  And the third type of query is 3 X– the index of the player who 
#  currently holds the Xth pen. There will be no output for query 
#  type 1, only for query type 2 and 3, corresponding output has to be printed. Help Muna.


# Input
# There is an integer T in the first line which represents the 
# number of test cases. Next line will contain N which represents 
# the number of players followed by N space separated integers which 
# represents the scores of pens. ith integer represents the ith pen's
#  score. Next line will contain an integer Q which represents the number
#   of query Muna has to answer. Next Q lines will contain the three types
#    of query discussed above (See sample test case for more clarification)


# Constraint
# 1 ≤ T ≤ 15
# 1 ≤ N ≤ 105
# 1 ≤ Q ≤ 104
# 1 ≤ S[i] ≤ 102


# Output
# Output the answer of second and third type query in each line.


# Sample
# Input	Output
# 1 
# 5 
# 3 4 5 8 7 
# 3 
# 1 1 2 
# 2 2 
# 3 1 	2 2

# In above case, in first query, player 1 and 2 play 
# against each other. As player 1 has pen with score 
# 3 and player 2 has pen with score 4, player 2 will 
# win and take the pen of score 3 from player 1. After
#  this round, player 2 will gain total score 4 + 3 = 7 and player 
#  1's score will be 0. In the second query, player 2 owns 2 pens 
#  (pen with score 3 and score 4). In the third query, 1st pen (score 3) is owned by player 2 now.

# Use faster Input/Output method.