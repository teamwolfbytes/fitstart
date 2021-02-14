# fitstart

An app to start fitness, written in C++  
Created for the Innovation Project in the FIRST® LEGO® League Challenge

## What it does

### Why is it special?

## How it works

Uses the traditional client/server model. The end result is to have a server
that stores all user data, and have users use a client to access it and change
it.

There are two files named [`server.cpp`](https://www.github.com/teamwolfbytes/fitstart/blob/main/src/server/server.cpp)
and [`client.cpp`](https://www.github.com/teamwolfbytes/fitstart/blob/main/src/client/client.cpp).
Those files are the source files for the server-side application and the
client-side application.

The server program will listen for commands like "make a user",
"friend this user", etc. These commands are sent by the client-side application.
When a user downloads the app and makes a new profile, that will send the "make
a user" command to the server, and the server will make a new user. For another
example, if a user wants to make a friend with someone, they can click a button
and type in the username (currently we have no GUI to do this), and the client
will send the server a "friend this user" message. The server will take this
message and forward it to the user to be befriended.

### Pros of the client/server model

Using this server/client model, we can make sure that users are legitimately
earning points and badges.

### Cons of the client/server model

By using one central server, we would have access to all user data. This is a
cause for worry, since most of the time it's not really desirable to have a
group of strangers able to see your personal fitness level.

### Structure of server application

TBA

## Todo

### General

#### Short term

- [ ] write a good summary
- [ ] polish example GUI
- [ ] finish up binder

#### Long term

- [ ] make wiki

### Programming

#### Short term

~~map username to id. id to username is easy but not the other way around
for now.~~ id to be removed
- [ ] write up friend system
  - [x] make friends
  - [ ] interpret meaning of return codes
- [ ] write up group system
- [ ] write client-side application
- [ ] write server-side application
- [x] add username system, remove id
- [x] make persistent storage
- [x] split up `server.cpp` into multiple components

#### Long term

- [ ] make client and server interact
  - [ ] through the shell
  - [ ] over a network
- [ ] make it more secure
- [ ] create GUI - unlikely to be finished by qualifiers
