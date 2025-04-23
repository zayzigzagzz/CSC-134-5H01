/*
CSC-134-5H01
Isaiah McNeill
4-23-25
M6LAB2 - data structures
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    LIVING_ROOM = 0,
    BATHROOM = 1,
    KITCHEN = 2,
    BEDROOM = 3,
    BACKYARD = 4,
    NUM_ROOMS = 5
};

int main() {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Living Room",
        "Bathroom",
        "Kitchen",
        "Bedroom",
        "Backyard"
    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "A small, yet spacious room full of leather furniture.",
        "A nauseating smell emits from the room, which is full of shredded toilet paper.",
        "A spacious room with an old stove and wooden counter.",
        "An nice and well kempt room with Sonic The Hedgehog merchandise all around.",
        "A luscious and flowery yard with a trampoline and playground."
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the connections between rooms using the Room enum
    // Living room connections
    connections[LIVING_ROOM][NORTH] = KITCHEN;    // Entrance Hall -> North -> Library
    connections[LIVING_ROOM][EAST] = -1;     // Entrance Hall -> East -> Kitchen
    connections[LIVING_ROOM][SOUTH] = BACKYARD;         // No connection south
    connections[LIVING_ROOM][WEST] = BATHROOM;      // Entrance Hall -> West -> Garden
    
    // Bathroom connections
    connections[BATHROOM][NORTH] = BEDROOM;               // No connection north
    connections[BATHROOM][EAST] = LIVING_ROOM;                // No connection east
    connections[BATHROOM][SOUTH] = -1;    // Library -> South -> Entrance Hall
    connections[BATHROOM][WEST] = -1;                // No connection west
    
    // Kitchen connections
    connections[KITCHEN][NORTH] = -1;               // No connection north
    connections[KITCHEN][EAST] = BACKYARD;                // No connection east
    connections[KITCHEN][SOUTH] = LIVING_ROOM;         // Kitchen -> South -> Basement
    connections[KITCHEN][WEST] = BEDROOM;     // Kitchen -> West -> Entrance Hall
    
    // Bedroom connections
    connections[BEDROOM][NORTH] = -1;                // No connection north
    connections[BEDROOM][EAST] = KITCHEN;      // Garden -> East -> Entrance Hall
    connections[BEDROOM][SOUTH] = BATHROOM;                // No connection south
    connections[BEDROOM][WEST] = -1;                 // No connection west
    
    // Backyard connections
    connections[BACKYARD][NORTH] = -1;         // Basement -> North -> Kitchen
    connections[BACKYARD][EAST] = -1;               // No connection east
    connections[BACKYARD][SOUTH] = LIVING_ROOM;              // No connection south
    connections[BACKYARD][WEST] = KITCHEN;               // No connection west
    
    // Game state
    int currentRoom = LIVING_ROOM; // Start in the Entrance Hall
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}