clear all;
clc;
%X_test=csvread('data.csv');
pesos = csvread('pesos.csv');
bias = csvread('bias.csv');
x= [1000 25 6.81870091226517 29.7825061861631];
x_norm = (x - mean(x))/std(x);
W1= pesos(:,1:4);
W2= pesos(:,5:8);
WO= pesos(:,9);
b1= bias(1:4,:);
b2= bias(5:8,:);
b3= bias(9,:);
duty_esperado=0.485;
%Entrada
 
for i=1:4
    Neu =  dot( x_norm ,W1(1:4,i)  ) ; %Produto interno
    X1(1,i)  =  tanh( Neu + b1(i,1) )  ;
end
for i=1:1:4 % 5 to 8
    Neu2 =  dot( X1 , ( W2(1:4,i) ) ) ;
    X2(1,i)  =  tanh( Neu2 + b2(i,1) )  ;
end

duty = ( dot( X2,(WO) ) + b3 );
