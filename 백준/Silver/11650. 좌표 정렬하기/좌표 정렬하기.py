n = int(input())
points = []

#points 리스트에 (x, y) 형태의 튜플이 저장됨
for i in range(n):
    x, y = map(int, input().split())
    points.append((x, y))

# x 좌표를 기준으로 정렬하되, x 좌표가 동일한 경우 y 좌표를 기준으로 정렬
sorted_points = sorted(points, key=lambda point: (point[0], point[1]))

# sorted_points에는 x와 y 좌표가 함께 정렬되어 저장됨

# x와 y 좌표를 순회하면서 출력
for point in sorted_points:
    print(point[0], point[1])