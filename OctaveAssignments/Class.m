clc;
clear all;
close all;

t= linspace(-pi, pi, 100); 
y= cos(2*pi*t);
subplot(2,1,2);
plot(t,y);
xlabel('a(n)');
ylabel('Amplitude');
title('Discrete Time Cosine Signal');
