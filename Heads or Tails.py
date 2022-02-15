#Python - Small Project By Erol Gelbul - Heads or Tails

import random

def heads_or_tails():
    guess = input('Pick heads or tails and then press enter to play: ')
    if random() > 0.5:
        return 'tails'
    else:
        return 'heads'

print(heads_or_tails() + ' wins' + '!')