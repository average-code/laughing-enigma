clear
cla
clf
clc

t = linspace(-1, 2*pi, 50)

y = sin(t);
z = (t>=0).*t;

add = y .+ z
multip = y .* z
substract = z .- y
subplot(3, 1, 1)
plot(t, add)
title("Addition")

subplot(3, 1, 2)
plot(t, substract)
title("Substraction")

subplot(3, 1, 3)
plot(t, multip)
title("Multiplication")

