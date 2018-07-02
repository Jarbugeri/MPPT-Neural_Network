
%%load matlab.mat;
n=length(DATA);
Data_down=zeros(round(2000),7);
for i=2:2:n/2
    Data_down(i/2,[1 2 3 4 5 6 7])=DATA(i,[1 2 3 4 5 6 7]);
end
Data= array2table(Data_down,'VariableNames',{'Input_current','Output_voltage','Input_voltage','Duty_Cycle','Power','Irradiance','Temperature'});
writetable(Data,'data_train.csv');