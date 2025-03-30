#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    
    cout << "Say: ";
    cin >> a;
    
    if (a == "GENERATOR") {
        cout << "A machine that turns mechanical energy into electrical energy";
    } else if (a == "GEAR") {
        cout << "A rotating wheel with teeth that transfers motion and force";
    } else if (a == "FREQUENCY") {
        cout << "How often something happens in a given time, like sound waves";
    } else if (a == "FRICTION") {
        cout << "A force that slows down moving objects when they touch something";
    } else if (a == "ENERGY") {
        cout << "The ability to do work or cause change";
    } else if (a == "ELASTICITY") {
        cout << "The ability of a material to return to its original shape after stretching";
    } else if (a == "DYNAMICS") {
        cout << "The study of forces and motion";
    } else if (a == "DIODE") {
        cout << "An electronic component that allows current to flow in one direction";
    } else if (a == "DENSITY") {
        cout << "How much mass is packed into a certain space";
    } else if (a == "CURRENT") {
        cout << "The flow of electric charge in a circuit";
    } else if (a == "CONDUCTOR") {
        cout << "A material that allows electricity or heat to pass through";
    } else if (a == "ACCELERATION") {
        cout << "The rate at which speed changes over time";
    } else if (a == "ALGORITHM") {
        cout << "A set of steps to solve a problem or complete a task";
    } else if (a == "AMPLITUDE") {
        cout << "The height of a wave, showing its strength";
    } else if (a == "BATTERY") {
        cout << "A device that stores and provides electrical energy";
    } else if (a == "BEAM") {
        cout << "A long, strong structure that supports weight";
    } else if (a == "BLUEPRINT") {
        cout << "A detailed technical drawing of a design or structure";
    } else if (a == "CAPACITOR") {
        cout << "An electrical component that stores and releases energy";
    } else if (a == "CIRCUIT") {
        cout << "A closed path where electricity flows";
    } else if (a == "COMPRESSION") {
        cout << "A force that pushes materials together";
    } else if (a == "GRAVITY") {
        cout << "The force that pulls objects toward each other, like Earth's pull on us";
    } else if (a == "HYDRAULICS") {
        cout << "The use of liquid pressure to create movement or force";
    } else if (a == "INDUCTOR") {
        cout << "A coil of wire that stores energy in a magnetic field";
    } else if (a == "KINETIC ENERGY") {
        cout << "Energy an object has because it is moving";
    } else if (a == "LOAD") {
        cout << "The weight or force applied to a structure.";
    } else if (a == "MOMENTUM") {
        cout << "The motion of an object, based on its mass and speed";
    } else if (a == "RESISTOR") {
        cout << "A component that controls the flow of electricity in a circuit";
    } else if (a == "TORQUE") {
        cout << "A force that causes rotation";
    } else if (a == "TRANSFORMER") {
        cout << "A device that changes the voltage of electricity";
    } else if (a == "VELOCITY") {
        cout << "The speed of something in a specific direction";
    } else {
        cout << "No word is found";
    }

    return 0;
}
