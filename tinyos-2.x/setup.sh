export TOSROOT=/opt/tinyos-2.x
export TOSDIR=$TOSROOT/tos
export MAKERULES=$TOSROOT/support/make/Makerules
export JAVA_HOME=/usr/lib/jvm/java-6-openjdk/
export CLASSPATH=$TOSROOT/support/sdk/java/tinyos.jar:$JAVA_HOME/commapi/jar/comm.jar:.
export PATH=/opt/msp430-gcc-4.4.5/bin/:$JAVA_HOME/jre/bin:$JAVA_HOME/bin/:$PATH
export LD_LIBRARY_PATH=$JAVA_HOME/commapi/lib:$JAVA_HOME/jre/lib:$LD_LIBRARY_PATH
export MOTECOM=serial@/dev/ttyUSB1:57600
