clear all;
close all;
clc;

t = (-10:0.01:10)';

impulse = t==0;
figure(1)
plot(t,[impulse])
unitstep = t>=0;
figure(2)
plot(t,[unitstep])
ramp = t.*unitstep;
figure(3)
plot(t,[ramp])
expo = exp(t).*unitstep;
figure(4)
plot(t,[expo])
figure(5)
sqwave = 0.81*square(4*pi*t);
plot(t,sqwave)
figure(6)
sinwave = 0.81*sin(4*pi*t);
plot(t,sqwave)
