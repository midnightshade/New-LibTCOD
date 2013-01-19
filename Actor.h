#ifndef ACTOR_H
#define ACTOR_H


class Actor
{
public:
   int x, y; //position on map
   int ch; // ascii code its an int becasue it can store more than 256 chars
   TCODColor col; // color

   Actor(int x, int y, int ch, const TCODColor &col);
   void render()const;
};

#endif // ACTOR_H
