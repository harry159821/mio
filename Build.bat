@echo off
SET VS90COMNTOOLS=%VS100COMNTOOLS%
%~dp0\swigwin-3.0.5\swig.exe -c++ -python -modern -new_repr -I./include -o cmio_wrap.cpp cmio.i
python setup.py build
pause