clear all;
clc;
%X_test=csvread('data.csv');
%pesos = csvread('pesos.csv');
%bias = csvread('bias.csv');

x= [1000 25 6.81870091226517 29.7825061861631]; %%6.81870091226517 29.7825061861631
mean_=[730.65487572  35.59751434 5.14613337  27.86261631  ];%5.14613337  27.86261631
std_=[4.59565912e+04 2.10900147e+02 2.34331624e+00 4.32227478e+00 ]; %2.34331624e+00 4.32227478e+00

for i=1:2
    x_norm(i) =(x(i) - mean_(i))/std_(i);
end    

    W1= csvread('pesos_0.csv');
    W2= csvread('pesos_1.csv');
    W3= csvread('pesos_2.csv');
    W0= csvread('pesos_3.csv');
    b1= csvread('bias_0.csv');
    b2= csvread('bias_1.csv');
    b3= csvread('bias_2.csv');
    b0= csvread('bias_3.csv');
duty_esperado=0.485;
%Entrada
 
% for i=1:4
%     x_norm(i) =(x(i) - mean_(i))/std_(i);
% end

for i=1:150
    Neu =  dot( x ,W1(1:4,i)) ; %Produto interno
    X1(1,i)  = tanh( Neu + b1(i,1))   ;
end
for i=1:1:150 % 5 to 8
    Neu2 =  dot( X1 , ( W2(1:150,i) ) ) ;
    X2(1,i)  =  tanh( Neu2 + b2(i,1) )  ;
end
for i=1:1:150 % 5 to 8
    Neu3 =  dot( X2 , ( W3(1:150,i) ) ) ;
    X3(1,i)  =  tanh( Neu3 + b3(i,1) )  ;
end

D = ( dot( X3,(W0) ) + b0 );


