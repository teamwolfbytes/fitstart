# fitstart

An app to start fitness, written in C++


## What it does

### Why is it special?

## How it works

Uses the traditional client/server model. The end result is to have a server
that stores all user data, and have users use a client to access it and change
it.

In the [src](https://github.com/teamwolfbytes/fitstart/tree/main/src) directory,
you will find two folders named server and client. Inside those directories, you
will find two programs named `server.cpp` and `client.cpp`. Those files are the
source for the server-side application and the client-side application.

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

Open source stuff

How friending and grouping works

## Todo

### General project

#### short term

- [ ] write a good summary
- [ ] finish prototype program
- [ ] polish example GUI

#### long term


### Programming

#### short term

- [ ] map username to id. id to username is easy but not the other way around
for now.
- [ ] write up friend system
- [ ] write up group system
- [ ] write client-side application

#### long term

- [ ] make client and server interact
  - [ ] through the shell
  - [ ] over a network
- [ ] create GUI
