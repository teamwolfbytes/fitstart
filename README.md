# fitstart

An app to start fitness, written in C++  
Created for the Innovation Project in the FIRST® LEGO® League Challenge

## Installation

## Definitions

"FitStart" is the name of the overall project.  
`fitstart` is the name of the client-side command-line tool: it's the backbone
of the app.  
The GUI binary (if it ever comes into existence) will be called `fitstart_c`
(as in `fitstart` `client`). This will be a wrapper around the `fitstart`
binary that just calls the appropriate command when a certain button is
pressed.

The server is called `fitstart_s` (as in `fitstart` `server`).

## How it works

Uses the traditional client/server model. The end result is to have a server
that stores all user data, and have users use a client to access it and change
it.

There are two files named [`server.cpp`](https://www.github.com/teamwolfbytes/fitstart/blob/main/src/server/server.cpp)
and [`client.cpp`](https://www.github.com/teamwolfbytes/fitstart/blob/main/src/client/client.cpp).
Those files are the source files for the server-side application and the
client-side application.

The server program will listen for commands like "make a user", "friend this
user", etc. These commands are sent by the client-side application. When a user
downloads the app and makes a new profile, that will send the "make a user"
command to the server, and the server will make a new user. For another example,
if a user wants to make a friend with someone, they can click a button and type
in the username (currently we have no GUI to do this), and the client will send
the server a "friend this user" message. The server will take this message and
forward it to the user to be befriended.

## Todo

### General

#### Short term

- [ ] write a good summary
- [ ] polish example GUI
- [ ] finish up binder: update it to current

#### Long term

- [ ] make wiki

### Programming

#### Short term

~~map username to id. id to username is easy but not the other way around
for now.~~ id removed
- [ ] write up friend system
  - [x] make friends
  - [ ] interpret meaning of return codes
- [ ] write up group system
- [ ] write client-side application
  - [x] finish framework for interpreting commands
- [ ] write server-side application
- [x] add username system, remove id
- [x] make persistent storage
- [ ] split up `server.cpp` into multiple components

#### Long term

- [ ] make client and server interact
  - [ ] through the shell
  - [ ] over a network
- [ ] make it more secure
- [ ] create GUI - unlikely to be finished by qualifiers
