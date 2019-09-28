#include&lt;iostream.h&gt;

#include&lt;graphics.h&gt;

#include&lt;stdio.h&gt;

#include&lt;conio.h&gt;

#include&lt;dos.h&gt;

#include&lt;stdlib.h&gt;

#include&lt;string.h&gt;

#
define X getmaxx()# define Y getmaxy()# define grnd Y * 0.65
void loading();
void scroll();
void menu();
int option();
void slokas();
// function members of this class displays the various
// basic yoga postures one must know before going ahead
class basics {
   public:
      void man(int x) {
         //ground
         line(150, grnd, X - 150, grnd);
         //head
         circle(x, grnd - 70, 10);
         //body
         line(x, grnd - 60, x, grnd - 30);
         //hands
         line(x, grnd - 50, x - 15, grnd - 40);
         line(x, grnd - 50, x + 15, grnd - 40);
         //legs
         line(x, grnd - 30, x - 10, grnd);
         line(x, grnd - 30, x + 10, grnd);
         delay(1750);
         cleardevice();
      }
   void tadasana(int x) {
      //HEAD
      circle(x, grnd - 60, 10);
      //BODY
      line(x, grnd - 50, x, grnd - 20);
      //HAND
      line(x, grnd - 50, x - 9, grnd - 50);
      line(x, grnd - 50, x + 9, grnd - 50);
      // UPPER HANDS
      line(x - 9, grnd - 50, x - 12, grnd - 100);
      line(x + 9, grnd - 50, x + 12, grnd - 100);

      //LEGS
      line(x, grnd - 20, x + 5, grnd);
      delay(1750);
      cleardevice();
   }
   void bhagiratasana(int x) {
      //HEAD
      circle(x, grnd - 60, 10);
      //BODY
      line(x, grnd - 50, x, grnd);
      //HAND
      line(x, grnd - 50, x - 5, grnd - 50);
      line(x, grnd - 50, x + 5, grnd - 50);
      // UPPER HANDS
      line(x - 9, grnd - 50, x - 12, grnd - 100);
      line(x + 9, grnd - 50, x + 12, grnd - 100);
      //LEGS
      line(x, grnd - 30, x - 25, grnd - 15);
      line(x - 25, grnd - 15, x, grnd - 20);
      delay(1750);
      cleardevice();
   }
   void navasana(int x) {
      //HEAD
      circle(x - 20, grnd - 60, 10);
      //BODY
      line(x - 20, grnd - 50, x - 10, grnd);
      line(x - 10, grnd, x + 20, grnd - 50);
      //HAND
      line(x - 20, grnd - 50, x + 20, grnd - 50);
      delay(1750);
      cleardevice();
   }
   void urdravanukasana(int x) {
      //head
      circle(x + 15, grnd - 25, 10);
      //body
      line(x + 15, grnd - 10, x - 15, grnd - 10);
      //legs
      line(x - 15, grnd - 10, x - 30, grnd - 2);
      //hands
      line(x + 15, grnd - 15, x + 15, grnd - 2);
      line(x + 15, grnd - 2, x + 20, grnd - 3);
      delay(1750);
      cleardevice();
   }
   void utkatasana(int x) {
      //head
      circle(x, grnd - 40, 10);
      //body
      line(x, grnd - 30, x - 3, grnd - 1);
      //legs

      line(x - 3, grnd - 1, x + 10, grnd - 20);
      line(x + 10, grnd - 20, x + 15, grnd - 1);
      //hands
      line(x - 1, grnd - 20, x + 15, grnd - 35);
      line(x - 1, grnd - 20, x - 15, grnd - 35);
      delay(1750);
      cleardevice();
   }
   void adhm(int x) {
      //HEAD
      circle(x + 20, grnd - 10, 10);
      //BODY
      line(x - 20, grnd, x, grnd - 60);
      line(x, grnd - 60, x + 20, grnd - 20);
      //HAND
      line(x + 20, grnd, x + 30, grnd);
      line(x + 30, grnd, x + 40, grnd);
      delay(1750);
      cleardevice();
   }
   void upp(int x) {
      //HEAD
      circle(x, grnd - 12, 10);
      //BODY
      line(x, grnd - 2, x + 30, grnd - 2);
      //HAND
      line(x - 20, grnd - 2, x, grnd - 2);
      //LEGS
      line(x + 30, grnd - 2, x + 30, grnd - 50);
      line(x + 30, grnd - 50, x + 35, grnd - 60);
      delay(1750);
      cleardevice();
   }
   void utt(int x) {
      //HEAD
      circle(x + 10, grnd - 30, 10);
      //BODY
      line(x, grnd - 50, x, grnd);
      line(x, grnd - 50, x + 10, grnd - 50);
      line(x + 10, grnd - 50, x + 10, grnd - 40);
      //HAND
      line(x + 10, grnd - 20, x + 10, grnd);
      line(x + 10, grnd, x + 9, grnd);
      //LEG
      line(x, grnd, x + 5, grnd);
      delay(1750);
      cleardevice();
   }
   void autt(int x) {
      //HEAD
      circle(x + 25, grnd - 50, 10);

      //BODY
      line(x, grnd - 50, x, grnd);
      line(x, grnd - 50, x + 15, grnd - 50);
      //HAND
      line(x + 35, grnd - 50, x + 45, grnd - 50);
      //LEG
      line(x, grnd, x + 5, grnd);
      delay(1750);
      cleardevice();
   }
   void vas(int x) {
      //HEAD
      circle(x + 30, grnd - 60, 10);
      //BODY
      line(x - 20, grnd, x, grnd - 60);
      line(x, grnd - 60, x + 20, grnd - 60);
      //HAND
      line(x + 20, grnd - 120, x + 20, grnd);
      delay(1750);
      cleardevice();
   }
   void apasana(int x) {
      //head
      circle(x, grnd - 12, 10);
      //body
      line(x + 1, grnd - 2, x + 31, grnd - 2);
      //legs
      line(x + 31, grnd - 2, x + 15, grnd - 16);
      line(x + 15, grnd - 16, x + 24, grnd - 18);
      //hands
      line(x + 5, grnd - 2, x + 15, grnd - 16);
      delay(1750);
      cleardevice();
   }
   void sarvagasana(int x) {
      //head
      circle(x, grnd - 12, 10);
      //body
      line(x + 3, grnd - 2, x + 20, grnd - 5);
      line(x + 20, grnd - 5, x + 20, grnd - 30);
      //legs
      line(x + 20, grnd - 30, x + 8, grnd - 50);
      //hands
      line(x + 20, grnd - 5, x + 28, grnd - 2);
      line(x + 28, grnd - 2, x + 21, grnd - 16);
      line(x + 21, grnd - 16, x + 23, grnd - 18);
      delay(1750);
      cleardevice();
   }
   void carkravahasana(int x) {

      //head
      circle(x + 39, grnd - 24, 10);
      //body
      line(x, grnd - 18, x + 30, grnd - 18);
      //legs
      line(x, grnd - 2, x, grnd - 18);
      line(x, grnd - 2, x - 22, grnd - 2);
      //hands
      line(x + 25, grnd - 18, x + 25, grnd - 2);
      line(x + 25, grnd - 2, x + 29, grnd - 2);
      delay(1750);
      cleardevice();
   }
   void parsena_uttanasana(int x) {
      //head
      circle(x + 10, grnd - 25, 10);
      //body
      line(x, grnd - 25, x - 25, grnd - 25);
      //legs
      line(x - 25, grnd - 25, x - 35, grnd - 3);
      line(x - 25, grnd - 25, x - 15, grnd - 3);
      line(x - 35, grnd - 3, x - 32, grnd - 3);
      line(x - 15, grnd - 3, x - 12, grnd - 3);
      //hands
      line(x - 2, grnd - 25, x + 8, grnd - 3);
      line(x + 8, grnd - 3, x + 11, grnd - 3);
      delay(1750);
      cleardevice();
   }
};
// type coordinate
struct Point {
   int x, y;
};
const int MAX_SEGMENTS = 10;
//for setting coordinates and drawing hands, legs, body
struct Chain {
   int num;
   // number of segments used for each body part (hands, legs, body)
   Point points[MAX_SEGMENTS + 1];
   // an array of points (coordinates) for each body part
   void draw(int);
};
void Chain::draw(int color = WHITE)
//draws a segment of a part (hand or leg or body)
{
   setcolor(color);
   for (int i = 0; i & lt; num; i++)
      line(points[i].x, points[i].y, points[i + 1].x, points[i + 1].y);
}

//for setting coordinates and drawing head
struct Circle {
   Point center;
   int radius;
   void draw(int color = WHITE) {
      setcolor(color);
      circle(center.x, center.y, radius);
   }
};#
define LEFT 0# define RIGHT 1
//draws all the body parts for each asana and animates the asanas
class Asana {
   public:
      Circle head;
   Chain body, hand[2], leg[2];
   // draws the human with the given coordinates
   void draw(int color = WHITE) {
      head.draw(color);
      body.draw(color);
      hand[LEFT].draw(color);
      hand[RIGHT].draw(color);
      leg[LEFT].draw(color);
      leg[RIGHT].draw(color);
   }
   void clear() // erases the human with the given coordinates
   {
      draw(BLACK);
   }
   int loop_length;
   //no of iterations needed for the animation to be completed
   public:
      virtual void initialize() {}
   // gives the initial coordinates for each posture / asana
   virtual void move() {}
   // gives how the coordinates of different body parts should move
   void animation();
};
void Asana::animation() {
   initialize(); // gives the coordinates
   draw(); // draws the human
   for (int t = 0; t & lt; loop_length; t++) {
      clear(); // erases the human with old coordinates
      move(); // changes body coordinates
      draw(); // draws human with new coordinates
      delay(500);
      if (kbhit()) break;
   }
   delay(1500);
   clear();
}

// A separate class for each asana is created,
// each of which inherits from `Asana`
// initialize and move functions are overridden
class Man: public Asana {
   public: void initialize() {
      //set no of segments for each body part
      body.num = 1;
      hand[LEFT].num = 1;
      hand[RIGHT].num = 1;
      leg[LEFT].num = 1;
      leg[RIGHT].num = 1;
      //LEGS...
      leg[LEFT].points[0].x = 295;
      leg[LEFT].points[0].y = grnd - 20;
      leg[RIGHT].points[0].x = 295;
      leg[RIGHT].points[0].y = grnd - 20;
      leg[LEFT].points[1].x = 295;
      leg[LEFT].points[1].y = grnd - 2;
      leg[RIGHT].points[1].x = 295;
      leg[RIGHT].points[1].y = grnd - 2;
      //HANDS...
      hand[RIGHT].points[0].x = 295;
      hand[RIGHT].points[0].y = grnd - 50;
      hand[LEFT].points[0].x = 295;
      hand[LEFT].points[0].y = grnd - 50;
      hand[RIGHT].points[1].x = 295;
      hand[RIGHT].points[1].y = grnd - 20;
      hand[LEFT].points[1].x = 295;
      hand[LEFT].points[1].y = grnd - 20;
      //HEAD...
      head.center.x = 295;
      head.center.y = grnd - 60;
      head.radius = 10;
      //BODY...
      body.points[0].x = 295;
      body.points[0].y = grnd - 50;
      body.points[1].x = 295;
      body.points[1].y = grnd - 20;
      // set loop_length to number of iterations for the animation to complete
      loop_length = 5;
   }
   void move() {
      // move the person by incrementing the coordinates
      hand[LEFT].points[1].x -= 2;
      hand[RIGHT].points[1].x += 2;
      leg[LEFT].points[1].x -= 1;
      leg[LEFT].points[1].y = grnd - 2;
      leg[RIGHT].points[1].x += 1;

      leg[RIGHT].points[1].y = grnd - 2;
   }
};
class TadAsana: public Asana {
   public: void initialize() {
      //set no of segments for each body part
      body.num = 1;
      hand[LEFT].num = 1;
      hand[RIGHT].num = 0;
      leg[RIGHT].num = 0;
      leg[LEFT].num = 2;
      //LEGS...
      leg[LEFT].points[0].x = 315;
      leg[LEFT].points[0].y = grnd - 2;
      leg[LEFT].points[1].x = 318;
      leg[LEFT].points[1].y = grnd - 2;
      leg[LEFT].points[2].x = 322;
      leg[LEFT].points[2].y = grnd - 2;
      //HANDS...
      hand[LEFT].points[0].x = 315;
      hand[LEFT].points[0].y = grnd - 50;
      hand[LEFT].points[1].x = 324;
      hand[LEFT].points[1].y = grnd - 25;
      //HEAD...
      head.center.x = 315;
      head.center.y = grnd - 60;
      head.radius = 10;
      //BODY...
      body.points[0].x = 315;
      body.points[0].y = grnd - 50;
      body.points[1].x = 315;
      body.points[1].y = grnd - 2;
      // set loop_length to number of iterations for the animation to complete
      loop_length = 10;
   }
   void move() {
      // move the person by incrementing the coordinates
      hand[LEFT].points[0].y -= 1;
      hand[LEFT].points[1].x += 2;
      hand[LEFT].points[1].y -= 5;
      body.points[0].y -= 1;
      body.points[1].y -= 1;
      head.center.y -= 1;
      leg[LEFT].points[0].y -= 1;
      leg[LEFT].points[1].x += 0.2;
   }
};
class ulti: public Asana

{
   public: void initialize() {
      //set no of segments for each body part
      body.num = 1;
      hand[LEFT].num = 0;
      hand[RIGHT].num = 0;
      leg[RIGHT].num = 0;
      leg[LEFT].num = 1;
      //HEAD...
      head.center.x = 325;
      head.radius = 10;
      head.center.y = grnd - 62;
      //LEGS...
      leg[LEFT].points[0].x = 315;
      leg[LEFT].points[0].y = grnd - 50;
      leg[LEFT].points[1].x = 315;
      leg[LEFT].points[1].y = grnd - 60;
      //BODY...
      body.points[0].x = 315;
      body.points[1].x = 315;
      body.points[0].y = grnd - 50;
      body.points[1].y = grnd - 2;
      // set loop_length to number of iterations for the animation to complete
      loop_length = 9;
   }
   void move() {
      // move the person by incrementing the co-ordinates
      if (head.center.x & lt; = 340) {
         head.center.x += 5;
         leg[LEFT].points[1].x += 5;
      } else {
         leg[LEFT].points[1].y += 10;
         head.center.y += 10;
         head.radius = 10;
      }
   }
};
class bhuj: public Asana {
   public: void initialize() {
      //set no of segments for each body part
      body.num = 1;
      leg[LEFT].num = 1;
      leg[RIGHT].num = 0;
      hand[LEFT].num = 0;
      hand[RIGHT].num = 0;
      //HEAD...
      head.center.x = 340;

      head.center.y = grnd - 12;
      head.radius = 10;
      //LEGS...
      leg[LEFT].points[0].x = 315;
      leg[LEFT].points[0].y = grnd - 50;
      leg[LEFT].points[1].x = 330;
      leg[LEFT].points[1].y = grnd - 10;
      //BODY...
      body.points[0].x = 315;
      body.points[0].y = grnd - 2;
      body.points[1].x = 315;
      body.points[1].y = grnd - 50;
      // set loop_length to number of iterations for the animation to complete
      loop_length = 10;
   }
   void move() {
      // move the person by incrementing the co-ordinates
      if (body.points[1].y & lt; = grnd - 6) {
         body.points[0].x -= 8;
         body.points[1].y += 8;
         leg[LEFT].points[0].y += 8;
      } else {
         leg[LEFT].points[1].y -= 8;
         head.center.y -= 8;
         head.radius = 10;
      }
   }
};
class carkra: public Asana {
   public: void initialize() {
      //set no of segments for each body part
      body.num = 1;
      leg[LEFT].num = 2;
      leg[RIGHT].num = 0;
      hand[LEFT].num = 1;
      hand[RIGHT].num = 0;
      //HEAD...
      head.center.x = 340;
      head.center.y = grnd - 34;
      head.radius = 10;
      //BODY...
      body.points[0].x = 315;
      body.points[0].y = grnd - 2;
      body.points[1].x = 330;
      body.points[1].y = grnd - 34;
      //LEGS...
      leg[LEFT].points[0].x = 267;

      leg[LEFT].points[0].y = grnd - 2;
      leg[LEFT].points[1].x = 295;
      leg[LEFT].points[1].y = grnd - 2;
      leg[LEFT].points[2].x = 315;
      leg[LEFT].points[2].y = grnd - 2;
      //HANDS...
      hand[LEFT].points[0].x = 330;
      hand[LEFT].points[0].y = grnd - 34;
      hand[LEFT].points[1].x = 330;
      hand[LEFT].points[1].y = grnd - 34;
      // set loop_length to number of iterations for animation to get over
      loop_length = 10;
   }
   void move() {
      // move the person by incrementing the co-ordinates
      leg[LEFT].points[2].x -= 2;
      leg[LEFT].points[2].y -= 2;
      body.points[0].x -= 2;
      body.points[0].y -= 2;
      body.points[1].x -= 0.5;
      body.points[1].y += 1.2;
      hand[LEFT].points[0].x -= 0.5;
      hand[LEFT].points[0].y += 1.2;
      hand[LEFT].points[1].x -= 0.5;
      hand[LEFT].points[1].y += 3.2;
      head.center.x -= 0.5;
      head.center.y += 1.2;
      head.radius = 10;
   }
};
class ulti2: public Asana {
   public: void initialize() {
      //set no of segments for each body part
      body.num = 1;
      leg[LEFT].num = 2;
      leg[RIGHT].num = 0;
      hand[LEFT].num = 1;
      hand[RIGHT].num = 0;
      //LEGS...
      leg[LEFT].points[0].x = 267;
      leg[LEFT].points[0].y = grnd - 2;
      leg[LEFT].points[1].x = 295;
      leg[LEFT].points[1].y = grnd - 2;
      leg[LEFT].points[2].x = 295;
      leg[LEFT].points[2].y = grnd - 22;
      //BODY...
      body.points[0].x = 295;
      body.points[0].y = grnd - 22;
      body.points[1].x = 325;
      body.points[1].y = grnd - 22;

      //HEAD...
      head.center.x = 335;
      head.center.y = grnd - 22;
      head.radius = 10;
      //HANDS...
      hand[LEFT].points[0].x = 325;
      hand[LEFT].points[0].y = grnd - 22;
      hand[LEFT].points[1].x = 325;
      hand[LEFT].points[1].y = grnd - 2;
      // set loop_length to number of iterations for the animation to complete

      loop_length = 5;

   }
   void move() {
      // move the person by incrementing the co-ordinates
      leg[LEFT].points[1].x -= 2.4;
      leg[LEFT].points[1].y -= 4;
      leg[LEFT].points[2].y -= 4;
      body.points[0].y -= 4;
      body.points[1].x -= 3;
      body.points[1].y += 2;
      head.center.x -= 3;
      head.center.y += 2;
      hand[LEFT].points[0].x -= 3;
      hand[LEFT].points[0].y += 2;
      hand[LEFT].points[1].x -= 3;
      hand[LEFT].points[1].y -= 2;
   }
};
class tada2: public Asana {
   public: void initialize() {
      //set no of segments for each body part
      body.num = 2;
      leg[LEFT].num = 0;
      leg[RIGHT].num = 0;
      hand[LEFT].num = 0;
      hand[RIGHT].num = 0;
      //BODY...
      body.points[0].x = 267;
      body.points[0].y = grnd - 2;
      body.points[1].x = 295;
      body.points[1].y = grnd - 42;
      body.points[2].x = 310;
      body.points[2].y = grnd - 12;
      //HEAD...
      head.center.x = 320;
      head.center.y = grnd - 12;
      head.radius = 10;

      // set loop_length to number of iterations for the animation to complete
      loop_length = 4 + 3 + 5;
   }
   void move() {
      //move the person by incrementing the coordinates
      if (body.points[0].x & lt; 295)
         body.points[0].x += 7;
      else {
         if (head.center.y & gt; grnd - 42) {
            head.center.y -= 10;
            body.points[2].y -= 10;
         } else {
            body.points[2].y -= 2;
            body.points[2].x -= 3;
            head.center.y -= 4;
            head.center.x -= 5;
         }
      }
   }
};
class ManAsana: public Asana {
   public: void initialize() {
      body.num = 1;
      hand[LEFT].num = 1;
      hand[RIGHT].num = 1;
      leg[LEFT].num = 1;
      leg[RIGHT].num = 1;
      hand[RIGHT].points[0].x = 315;
      hand[LEFT].points[0].x = 315;
      hand[RIGHT].points[1].x = 315;
      hand[LEFT].points[1].x = 315;
      leg[LEFT].points[0].x = 315;
      leg[LEFT].points[1].x = 315;
      leg[RIGHT].points[0].x = 315;
      leg[RIGHT].points[1].x = 315;
      leg[LEFT].points[0].y = grnd - 20;
      leg[LEFT].points[1].y = grnd - 2;
      leg[RIGHT].points[0].y = grnd - 20;
      leg[RIGHT].points[1].y = grnd - 2;
      hand[LEFT].points[0].y = grnd - 50;
      hand[RIGHT].points[0].y = grnd - 50;
      hand[LEFT].points[1].x += 9;
      hand[LEFT].points[1].y = grnd - 25;
      hand[RIGHT].points[1].x -= 9;
      hand[RIGHT].points[1].y = grnd - 25;
      //CIRCLE...
      head.center.x = 315;
      head.center.y = grnd - 60;

      head.radius = 10;
      //BODY...
      body.points[0].x = 315;
      body.points[0].y = grnd - 50;
      body.points[1].x = 315;
      body.points[1].y = grnd;
      loop_length = 5;
   }
   void move() {
      // move the person by incrementing the co-ordinates
      hand[LEFT].points[1].x -= 2;
      hand[LEFT].points[1].y = grnd - 25; // left hand
      hand[RIGHT].points[1].x += 2; // right hand
      hand[RIGHT].points[1].y = grnd - 25;
      leg[LEFT].points[1].x = 315;
      leg[LEFT].points[1].y = grnd;
   }
};
class BhagiratAsana: public Asana {
   public: void initialize() {
      body.num = 1;
      hand[LEFT].num = 1;
      hand[RIGHT].num = 1;
      leg[LEFT].num = 2;
      leg[RIGHT].num = 0;
      leg[LEFT].points[0].x = 315;
      leg[LEFT].points[1].x = 315;
      leg[LEFT].points[1].x = 315;
      leg[LEFT].points[0].y = grnd - 20;
      leg[LEFT].points[1].y = grnd - 10;
      leg[LEFT].points[2].y = grnd;
      body.points[0].x = 315;
      body.points[1].x = 315;
      body.points[1].y = grnd;
      body.points[0].y = grnd - 50;
      //point 0 ini to 315
      hand[RIGHT].points[0].x = 315;
      hand[LEFT].points[0].x = 315;
      //point 1 ini to 315
      hand[RIGHT].points[1].x = 315;
      hand[LEFT].points[1].x = 315;
      hand[LEFT].points[0].y = grnd - 50;
      hand[RIGHT].points[0].y = grnd - 50;
      hand[LEFT].points[1].x += 9;
      hand[LEFT].points[1].y = grnd - 25;
      hand[RIGHT].points[1].x -= 9;
      hand[RIGHT].points[1].y = grnd - 25;
      head.center.x = 315;
      head.center.y = grnd - 60;
      head.radius = 10;

      loop_length = 10;
   }
   void move() {
      hand[LEFT].points[1].x += 2;
      hand[LEFT].points[1].y -= 2; // left hand
      hand[RIGHT].points[1].x -= 2; // right hand
      hand[RIGHT].points[1].y -= 2;
      leg[LEFT].points[1].y = grnd - 14;
      leg[LEFT].points[1].x -= 2;
      leg[LEFT].points[2].y = grnd - 8;
      leg[LEFT].points[2].x = 315;
   }
};
class SIRA: public Asana {
   public: void initialize() {
      body.num = 2;
      leg[LEFT].num = 0;
      leg[RIGHT].num = 0;
      hand[LEFT].num = 0;
      hand[RIGHT].num = 0;
      body.points[0].x = 267;
      body.points[0].y = grnd - 2;
      body.points[1].x = 295;
      body.points[1].y = grnd - 42;
      body.points[2].x = 310;
      body.points[2].y = grnd - 12;
      head.center.x = 320;
      head.center.y = grnd - 12;
      head.radius = 10;
      loop_length = 5;
   }
   void move() {
      body.points[1].x += 3;
      body.points[0].y -= 12;
      body.points[0].x += 7;
      body.points[2].x += 2;
      body.points[2].y -= 1;
   }
};
class nav: public Asana {
   public: void initialize() {
      body.num = 1;
      hand[LEFT].num = 1;
      hand[RIGHT].num = 1;
      leg[LEFT].num = 1;
      leg[RIGHT].num = 1;

      hand[RIGHT].points[0].x = 315;
      hand[LEFT].points[0].x = 315;
      hand[RIGHT].points[1].x = 315;
      hand[LEFT].points[1].x = 315;
      hand[LEFT].points[0].y = grnd - 50;
      hand[RIGHT].points[0].y = grnd - 50;
      hand[LEFT].points[1].x += 9;
      hand[LEFT].points[1].y = grnd - 25;
      hand[RIGHT].points[1].x -= 9;
      hand[RIGHT].points[1].y = grnd - 25;
      leg[LEFT].points[0].x = 315;
      leg[LEFT].points[1].x = 315;
      leg[RIGHT].points[0].x = 315;
      leg[RIGHT].points[1].x = 315;
      leg[LEFT].points[0].y = grnd;
      leg[LEFT].points[1].y = grnd - 20;
      leg[LEFT].points[1].x = 315;
      leg[RIGHT].points[0].y = grnd;
      leg[RIGHT].points[1].y = grnd - 20;
      leg[RIGHT].points[1].x = 315;
      head.center.x = 315;
      head.center.y = grnd - 60;
      head.radius = 10;
      body.points[0].x = 315;
      body.points[0].y = grnd - 50;
      body.points[1].x = 315;
      body.points[1].y = grnd;
      loop_length = 5;
   }
   void move() {
      if (leg[RIGHT].points[1].x & lt; 345) {
         leg[RIGHT].points[1].x += 5;
         hand[LEFT].points[1].x += 3;
         hand[LEFT].points[1].y -= 5; // left hand
         hand[RIGHT].points[1].x += 3; // right hand
         hand[RIGHT].points[1].y -= 5;
      } else {
         leg[RIGHT].points[1].x -= 5;
         hand[LEFT].points[1].x -= 3;
         hand[LEFT].points[1].y += 5; // left hand
         hand[RIGHT].points[1].x -= 3; // right hand
         hand[RIGHT].points[1].y += 5;
      }
   }
};
class SRA: public Asana {
   public: void initialize() {
      body.num = 1;

      leg[LEFT].num = 0;
      leg[RIGHT].num = 0;
      hand[LEFT].num = 0;
      hand[RIGHT].num = 0;
      body.points[0].x = 318;
      body.points[0].y = grnd - 2;
      body.points[1].x = 290;
      body.points[1].y = grnd - 2;
      body.points[2].x = 300;
      body.points[2].y = grnd - 2;
      head.center.x = 320;
      head.center.y = grnd - 12;
      head.radius = 10;
      loop_length = 8;
   }
   void move() {
      body.points[2].y -= 5;
      body.points[2].x -= 2;
   }
};
class sitting: public Asana {
   public: void initialize() {
      body.num = 1;
      hand[LEFT].num = 1;
      hand[RIGHT].num = 1;
      leg[LEFT].num = 2;
      leg[RIGHT].num = 2;
      hand[LEFT].points[0].x = 315;
      hand[LEFT].points[0].y = grnd - 32;
      hand[RIGHT].points[0].x = 315;
      hand[RIGHT].points[0].y = grnd - 32;
      hand[LEFT].points[1].x = 315 - 8;
      hand[LEFT].points[1].y = grnd - 7;
      hand[RIGHT].points[1].x = 315 + 8;
      hand[RIGHT].points[1].y = grnd - 7;
      leg[LEFT].points[0].x = 315;
      leg[LEFT].points[0].y = grnd - 12;
      leg[RIGHT].points[0].x = 315;
      leg[RIGHT].points[0].y = grnd - 12;
      leg[LEFT].points[1].x = 304;
      leg[LEFT].points[1].y = grnd - 2;
      leg[RIGHT].points[1].x = 326;
      leg[RIGHT].points[1].y = grnd - 2;
      leg[LEFT].points[2].x = 314;
      leg[LEFT].points[2].y = grnd - 2;
      leg[RIGHT].points[2].x = 312;
      leg[RIGHT].points[2].y = grnd;

      //BODY...
      body.points[0].x = 315;
      body.points[1].x = 315;
      body.points[0].y = grnd - 32;
      body.points[1].y = grnd - 12;
      //HEAD...
      head.center.x = 315;
      head.center.y = grnd - 42;
      head.radius = 10;
      loop_length = 5;
   }
   void move() {
      leg[LEFT].points[2].x += 1;
      leg[LEFT].points[2].y -= 1;
      leg[RIGHT].points[2].x -= 1;
      leg[RIGHT].points[2].y -= 1;
   }
};
int main() {
   /* initialize graphics mode */
   int g = DETECT, d, errorcode;
   initgraph( & amp; g, & amp; d, & quot; C: \\turboc3\\ bgi & quot;);
   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk) /* an error occurred */ {
      printf( & quot; Graphics error: % s\ n & quot;, grapherrormsg(errorcode));
      printf( & quot; Press any key to halt: & quot;);
      getch();
      exit(1); /* terminate with an error code */
   }
   int a;
   cleardevice();
   loading();
   do {
      cleardevice();
      menu();
      scroll();
      a = option();
   } while (a);
   cleardevice();
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
   settextjustify(1, 1);
   setcolor(WHITE);
   outtextxy(315, Y / 2, & quot; THANK YOU!!! & quot;);
   delay(1000);
   closegraph();
   cout & lt; & lt; & quot;
   PRESS ENTER TO QUIT & quot;;
   getch();
   return 0;
}

void loading() {
   int x, y, i;
   x = getmaxx() / 2;
   y = getmaxy() / 2;
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
   setbkcolor(rand());
   setcolor(4);
   int c = 150;
   for (int e = 0; e & lt; 15; e++) //Change 15 to your desired value
   {
      for (i = 50; i & lt; 100; i++) {
         setcolor(3);
         settextstyle(SMALL_FONT, HORIZ_DIR, 10);
         outtextxy(x, y, & quot; Loading... & quot;);
         settextstyle(SMALL_FONT, HORIZ_DIR, 5);
         outtextxy(x + 5, y + 5, & quot; Please Wait... & quot;);
         circle(x, y, i);
         circle(x, y, c);
         c--;
         cleardevice();
      }
   }
}
void scroll() {
   char * str, ch;
   int i, j, location, n, c = 10;
   strcpy(str, & quot; Welcome to Yoga Tutor & quot;);
   for (i = 0; !kbhit(); i++) {
      setfillstyle(SOLID_FILL, BLACK);
      bar(50, 50, 600, 90);
      //two-color banner
      if (c == 3)
         c = WHITE;
      else
         c = 3;
      setcolor(c);
      settextstyle(GOTHIC_FONT, HORIZ_DIR, 2);
      outtextxy(50, 50, str);
      delay(350);
      ch = str[0];
      //substring logic
      n = strlen(str);
      location = 0;
      for (j = location; j & lt; n; j++)
         str[j] = str[j + 1];
      //appending char at end
      str[n - 1] = ch;
      str[n] = NULL;
   }
}
int option() {
   int a, x = 315;
   a = getch();
   cleardevice();
   if (a == & #39;B&# 39; || a == & #39;b&# 39;)

   {
      basics b;
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS APANASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.apasana(x);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS UTKATASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.utkatasana(x);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS SARVANGASANA & quot;);
      //grnd
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.sarvagasana(x);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS CARKRAVAKASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.carkravahasana(x);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS URDVAMUKHASVANASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.urdravanukasana(x);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS PARSVA UTTANASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.parsena_uttanasana(x);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS TADASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.tadasana(x);
      setcolor(3);

      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS BHAGIRATASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.bhagiratasana(x);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS NAVASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.navasana(x);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS ADHOMUKHASVANASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.adhm(x);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS URDVA PRASITA PADASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.upp(x);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS UTTANASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.utt(x);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS ARDHA UTTANASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.autt(x);
      setcolor(3);
      settextjustify(1, 1);
      outtextxy(315, 30, & quot; THIS IS VASISTASANA & quot;);
      //ground
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      b.vas(x);
      cleardevice();
   } else if (a == & #39;C&# 39; || a == & #39;c&# 39;) {
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
      settextjustify(1, 1);
      setcolor(3);

      outtextxy(315, 50, & quot; THIS IS SURYANAMASKARAM & quot;);
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      // Run the animation:
      TadAsana s1;
      s1.animation();
      ulti s2;
      s2.animation();
      bhuj s3;
      s3.animation();
      carkra r;
      r.animation();
      ulti2 u;
      u.animation();
      tada2 t;
      t.animation();
      Man s;
      s.animation();
      cleardevice();

   } else if (a == & #39;D&# 39; || a == & #39;d&# 39;) {
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
      SETTEXTJUSTIFY(1, 1);
      setcolor(3);
      outtextxy(315, 50, ”PRACTICE THESE ASANAS EVERYDAY”);
      line(150, grnd, X - 150, grnd);
      setcolor(WHITE);
      ManAsana s;
      s.animation();
      TadAsana t;
      t.animation();
      BhagiratAsana s1;
      s1.animation();
      SIRA s2;
      s2.animation();
      nav s3;
      s3.animation();
      bhuj b;
      b.animation();
      sitting s5;
      s5.animation();
      SRA s4;
      s4.animation();
      cleardevice();
   } else if (a == & #39;s&# 39; || a == & #39;S&# 39;) {
      slokas();
      cleardevice();
   } else if (a == & #39;q&# 39; || a == & #39;Q&# 39;) {
      cleardevice();
      return 0;
   } else
      return 0;

   setbkcolor(BLACK);
   setcolor(WHITE);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
   settextjustify(1, 1);
   outtextxy(getmaxx() / 2, getmaxy() / 2, & quot; Press & lt; enter & gt; to go back to main menu & quot;);
   if (getch())
      return 1;
   return 0;
}
void menu() {
   int x = getmaxx() / 2, y = getmaxy() / 2;
   setcolor(WHITE);
   rectangle(x - 60, y - 60, x + 60, y - 30);
   rectangle(x - 60, y - 20, x + 60, y + 10);
   rectangle(x - 60, y + 20, x + 60, y + 50);
   rectangle(x - 60, y + 60, x + 60, y + 90);
   rectangle(x - 60, y + 100, x + 60, y + 130);
   setcolor(3);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
   settextjustify(1, 1);
   outtextxy(x, y - 120, & quot; MENU & quot;);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   outtextxy(x, y - 45, & quot; Basics & quot;);
   outtextxy(x, y - 5, & quot; Courses & quot;);
   outtextxy(x, y + 75, & quot; Daily practice & quot;);
   outtextxy(x, y + 35, & quot; Slokas & quot;);
   outtextxy(x, y + 115, & quot; Quit & quot;);
   outtextxy(x, y + 175, ”Press‘ B’
      for basics, ‘C’
      for courses”);
   outtextxy(x, y + 185, ”’S’
      for slokas, ‘D’
      for daily practice”);
   outtextxy(x, y + 195, ”and’ Q’
      for quit”);
   settextjustify(0, 2);
}
void slokas() {
   int x = getmaxx() / 2, y = getmaxy() / 2;
   settextjustify(1, 1);
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
   setbkcolor(BLUE);
   outtextxy(x, y - 190, & quot; HERE ARE THE SLOKAS WHICH YOU CAN & quot;);
   outtextxy(x, y - 170, & quot; RECITE AS YOU PRACTISE SURYANAMASKAR & quot;);
   outtextxy(x, y - 130, & quot; STEP 1: Om Mitraaya Namaha & quot;);
   outtextxy(x, y - 100, & quot; STEP 2: Om Ravaye Namaha & quot;);
   outtextxy(x, y - 70, & quot; STEP 3: Om Suryaya Namaha & quot;);
   outtextxy(x, y - 40, & quot; STEP 4: Om Bhaanave Namaha & quot;);
   outtextxy(x, y - 10, & quot; STEP 5: Om Khagaya Namaha & quot;);
   outtextxy(x, y + 20, & quot; STEP 6: Om Pooshne Namaha & quot;);
   outtextxy(x, y + 50, & quot; STEP 7: Om Hiranyagarbhaaya Namaha & quot;);
   outtextxy(x, y + 80, & quot; STEP 8: Om Mareechaye Namaha & quot;);
   outtextxy(x, y + 110, & quot; STEP 9: Om Aadityaaya Namaha & quot;);
   outtextxy(x, y + 140, & quot; STEP 10: Om Savitre Namaha & quot;);
   outtextxy(x, y + 170, & quot; STEP 11: Om Aarkaaya Namaha & quot;);
   outtextxy(x, y + 200, & quot; STEP 12: Om Bhaaskaraya Namaha & quot;);
   getch();
}