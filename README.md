# MPPT-Neural_Network
A mppt neural network project for  Danilo's class
Este projeto contem um Bando de dado com V,I,Rad,Temp e Duty

# Installing TensorFlow with Anaconda #

The Anaconda installation is community supported, not officially supported.
Take the following steps to install TensorFlow in an Anaconda environment:
Follow the instructions on the Anaconda download site to download and install Anaconda.
Create a conda environment named tensorflow by invoking the following command:

> C:> conda create -n tensorflow pip python=3.5 

Activate the conda environment by issuing the following command:

> C:> activate tensorflow

(tensorflow)C:>  # Your prompt should change 
Issue the appropriate command to install TensorFlow inside your conda environment. To install the CPU-only version of TensorFlow, enter the following command:

> (tensorflow)C:> pip install --ignore-installed --upgrade tensorflow 

To install the GPU version of TensorFlow, enter the following command (on a single line):

> (tensorflow)C:> pip install --ignore-installed --upgrade tensorflow-gpu 

## Validate your installation ##
Start a terminal.

If you installed through Anaconda, activate your Anaconda environment.

Invoke python from your shell as follows:

> python

Enter the following short program inside the python interactive shell:

> import tensorflow as tf

> hello = tf.constant('Hello, TensorFlow!')

> sess = tf.Session()

> print(sess.run(hello))

If the system outputs the following, then you are ready to begin writing TensorFlow programs:

> Hello, TensorFlow!

ImportError: Could not find 'cudart64_90.dll'. TensorFlow requires that this DLL be installed in a directory that is named in your %PATH% environment variable. Download and install CUDA 9.0 from this URL: https://developer.nvidia.com/cuda-toolkit

## Exemplos ##

https://github.com/aymericdamien/TensorFlow-Examples/tree/master/examples
