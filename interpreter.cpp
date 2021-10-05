#if 0
CXX=clang++
CXXFLAGS="-O2 -Wall -Werror -std=c++17"
CXXARGS="-xc++ -emit-llvm -c -o -"
CXXCMD="$CXX $CXXFLAGS $CXXARGS $0"
LLICMD="lli -force-interpreter -fake-argv0=$0"
exec $LLICMD <($CXXCMD) "$@"
#endif
  
// sudo dnf install llvm
