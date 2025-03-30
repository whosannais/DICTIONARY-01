DATA = {
    "GENERATOR": "A machine that turns mechanical energy into electrical energy",
    "GEAR": "A rotating wheel with teeth that transfers motion and force",
    "FREQUENCY": "How often something happens in a given time, like sound waves",
    "FRICTION": "A force that slows down moving objects when they touch something",
    "ENERGY": "The ability to do work or cause change",
    "ELASTICITY": "The ability of a material to return to its original shape after stretching",
    "DYNAMICS": "The study of forces and motion",
    "DIODE": "An electronic component that allows current to flow in one direction",
    "DENSITY": "How much mass is packed into a certain space",
    "CURRENT": "The flow of electric charge in a circuit",
    "CONDUCTOR": "A material that allows electricity or heat to pass through",
    "ACCELERATION": "The rate at which speed changes over time",
    "ALGORITHM": "A set of steps to solve a problem or complete a task",
    "AMPLITUDE": "The height of a wave, showing its strength",
    "BATTERY": "A device that stores and provides electrical energy",
    "BEAM": "A long, strong structure that supports weight",
    "BLUEPRINT": "A detailed technical drawing of a design or structure",
    "CAPACITOR": "An electrical component that stores and releases energy",
    "CIRCUIT": "A closed path where electricity flows",
    "COMPRESSION": "A force that pushes materials together",
    "GRAVITY": "The force that pulls objects toward each other, like Earth's pull on us",
    "HYDRAULICS": "The use of liquid pressure to create movement or force",
    "INDUCTOR": "A coil of wire that stores energy in a magnetic field",
    "KINETIC ENERGY": "Energy an object has because it is moving",
    "LOAD": "The weight or force applied to a structure.",
    "MOMENTUM": "The motion of an object, based on its mass and speed",
    "RESISTOR": "A component that controls the flow of electricity in a circuit",
    "TORQUE": "A force that causes rotation",
    "TRANSFORMER": "A device that changes the voltage of electricity",
    "VELOCITY": "The speed of something in a specific direction",
}

a = input("Say: ")
if a in DATA:
    print(DATA[a])
else:
    print("No word is found")
