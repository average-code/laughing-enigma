clear

x = -10:0.01:10;
sig1 = sin(x)
sig2 = x.*(x>=0);

additn = sig1.+sig2;
subtrn = sig1.-sig2;
multipln = sig1.*sig2;

figure(1);
subplot(5, 1, 1)
plot(x, sig1);
title('Sine functioh');
subplot(5,1,2);
plot(x, sig2);
title("Ramp function");
subplot(5, 1, 3)
plot(x, additn);
title('Addition')
subplot(5,1,4);
plot(x, subtrn);
title('Substraction');
subplot(5,1,5)
plot(x, multipln);
title("Multiplication");
