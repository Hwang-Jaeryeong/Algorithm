n = int(input())
words = []

for i in range(n):
    w = input()
    if w not in words:
        words.append(w)

sorted_words = sorted(words, key=lambda word: (len(word), word))

for word in sorted_words:
    print(word)