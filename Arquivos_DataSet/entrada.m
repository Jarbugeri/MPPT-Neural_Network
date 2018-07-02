s = 1000; %amostras geradas

radiacao.time = zeros(s*2,1);
radiacao.signals.values = zeros(s*2,1);
radiacao.signals.dimensions = 1;
radiacao.signals.label = 'teste';
radiacao.time(1) = 0;
radiacao.signals.values(1)= 1000;
radiacao.signals.values(2)= 1000;
for i = 2:2:s*2-1
    radiacao.time(i) = (i)/2;
    radiacao.time(i+1) = (i)/2;
end
for i = 3:2:s*2
    rando = randi([300,1100],1,1) ;
    radiacao.signals.values(i)= rando;
    radiacao.signals.values(i+1)= rando;
end
radiacao.time(2000) = 1000;
save radiacao.mat radiacao

temperatura.time = zeros(s*2,1);
temperatura.time = temperatura.time - 0.5;
temperatura.signals.values = zeros(s*2,1);
temperatura.signals.dimensions = 1;
temperatura.signals.label = 'temperatura';

temperatura.signals.values(1)= 25;
temperatura.signals.values(2)= 25;
for i = 2:2:s*2-1
    temperatura.time(i) = (i)/2;
    temperatura.time(i+1) = (i)/2;
end
for i = 3:2:s*2
    rando = randi([10,60],1,1) ;
    temperatura.signals.values(i)= rando;
    temperatura.signals.values(i+1)= rando;
end
temperatura.time = temperatura.time - 0.5;
temperatura.time(1) = 0;
temperatura.time(2000) = 1000;
save teste.mat radiacao
save temperatura.mat temperatura