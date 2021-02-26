function makeJava -d "Automate compiling and packaging Java programs"
     command javac **.java
     command jar cfe $argv *
end
