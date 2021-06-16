
with open('random_30000.txt', 'r') as tf:
    lines = tf.read().split('\n')

for line in lines:
    print(line)
