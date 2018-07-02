% radiacao.time = [0 1 1 2 2 3 3 4 4];
% radiacao.signals.values = [1000 1000 500 500 300 300 900 900 1050]';
% radiacao.signals.dimensions = 1;
% radiacao.signals.label = 'radiacao';
% save radiacao.mat radiacao
% 
% temperatura.time = [0.5 1 1 2 2 3 3 4 4];
% temperatura.time = temperatura.time - 0.5;
% temperatura.signals.values = [25 25 30 30 15 15 42 42 50]';
% temperatura.signals.dimensions = 1;
% temperatura.signals.label = 'temperatura';
% save temperatura.mat temperatura

s = 3000;
radiacao2.time = zeros(s*2,1);
radiacao2.signals.values = zeros(s*2,1);
radiacao2.signals.dimensions = 1;
radiacao2.signals.label = 'teste';
radiacao2.time(1) = 0;
radiacao2.signals.values(1)= 1000;
radiacao2.signals.values(2)= 1000;
for i = 2:2:s*2-1
    radiacao2.time(i) = (i)/2;
    radiacao2.time(i+1) = (i)/2;
end
for i = 3:2:s*2
    rando = randi([350,1100],1,1) ;
    radiacao2.signals.values(i)= rando;
    radiacao2.signals.values(i+1)= rando;
end
radiacao2.time(6000) = 3000;
save radiacao2.mat radiacao2

temperatura2.time = zeros(s*2,1);
temperatura2.time = temperatura2.time - 0.5;
temperatura2.signals.values = zeros(s*2,1);
temperatura2.signals.dimensions = 1;
temperatura2.signals.label = 'temperatura';

temperatura2.signals.values(1)= 25;
temperatura2.signals.values(2)= 25;
for i = 2:2:s*2-1
    temperatura2.time(i) = (i)/2;
    temperatura2.time(i+1) = (i)/2;
end
for i = 3:2:s*2
    rando = randi([10,60],1,1) ;
    temperatura2.signals.values(i)= rando;
    temperatura2.signals.values(i+1)= rando;
end
temperatura2.time = temperatura2.time - 0.5;
temperatura2.time(1) = 0;
temperatura2.time(6000) = 3000;
save temperatura2.mat temperatura2