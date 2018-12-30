
#include<SFML/Graphics.hpp>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include <SFML/Audio.hpp>
using namespace sf;
int randomnumber();


int main()
{
    int c=1;
    int player;
    int sounddec;

     SoundBuffer sbuffer;
    sbuffer.loadFromFile("LADDER.wav");
    Sound sound(sbuffer);
    sound.setVolume(80);

   SoundBuffer sounbuffer;
    sounbuffer.loadFromFile("snake.wav");
    Sound sound1(sounbuffer);
    sound1.setVolume(80);

     SoundBuffer soubuffer;
    soubuffer.loadFromFile("rolldice.wav");
    Sound sound2(soubuffer);
    sound2.setVolume(80);

    SoundBuffer mus;
    mus.loadFromFile("music.wav");
    Sound music(mus);
    music.setVolume(1);

    RenderWindow win(VideoMode::getDesktopMode(),"welcome page",Style::Default);
    Texture openingbox;

    openingbox.loadFromFile("openingbox.png");
    Vector2u openingboxsize=openingbox.getSize();
    float openingboxw=static_cast<float>(openingboxsize.x);
    float openingboxh=static_cast<float>(openingboxsize.y);
    RectangleShape openingbox1(Vector2f(1050,1050));
    openingbox1.setTexture(&openingbox);



     while (win.isOpen())
    {

    win.clear();

    win.draw(openingbox1);
    win.display();
              //creating event ev
        Event eev;
        while(win.pollEvent(eev))
        {
            if (eev.key.code == Keyboard:: Escape)//to close using escape
                       {
                          win.close();
                       }
            if(eev.type == Event::Closed)
                {
                        win.close();
                }
            if(eev.mouseButton.x>670&&eev.mouseButton.x<800 &&eev.mouseButton.y>70 &&eev.mouseButton.y<140)
            {
                sounddec=1;
                std::cout<<"sound yes \n";
            }

            if(eev.mouseButton.x>850&&eev.mouseButton.x<980 &&eev.mouseButton.y>70 &&eev.mouseButton.y<140)
            {
                 sounddec=0;
                std::cout<<"sound no \n";
            }

            if(eev.mouseButton.x>90&&eev.mouseButton.x<270 &&eev.mouseButton.y>400 &&eev.mouseButton.y<470)
            {
                 player=2;
                std::cout<<"player two \n";
            }

            if(eev.mouseButton.x>90&&eev.mouseButton.x<270 &&eev.mouseButton.y>500 &&eev.mouseButton.y<570)
            {
                 player=3;
                std::cout<<"player three \n";
            }
            if(eev.mouseButton.x>90&&eev.mouseButton.x<270 &&eev.mouseButton.y>600 &&eev.mouseButton.y<670)
            {
                 player=4;
                std::cout<<"player four \n";
            }
// for board 1
            if(eev.mouseButton.x>660&&eev.mouseButton.x<1000 &&eev.mouseButton.y>300 &&eev.mouseButton.y<420)
            {
               win.close();




    int dir1=1;
    int dir2=1;
    int dir3=1;
    int dir4=1;
    // for random function call
    int y;
    int i;


    RenderWindow window(VideoMode(1530, 1130), "Real Game!");
    // this is for token
    RectangleShape rect1(Vector2f(50,50));
    rect1.setFillColor(Color::Green);
    rect1.setOrigin(Vector2f(75,50));
    rect1.setPosition(Vector2f(0,1000));

    RectangleShape rect2(Vector2f(50,50));
    rect2.setFillColor(Color::Red);
    rect2.setOrigin(Vector2f(75,50));
    rect2.setPosition(Vector2f(0,1000));

    RectangleShape rect3(Vector2f(50,50));
    rect3.setFillColor(Color::Yellow);
    rect3.setOrigin(Vector2f(75,50));
    rect3.setPosition(Vector2f(0,1000));

    RectangleShape rect4(Vector2f(50,50));
    rect4.setFillColor(Color::Blue);
    rect4.setOrigin(Vector2f(75,50));
    rect4.setPosition(Vector2f(0,1000));




    //this is for dice
    RectangleShape dice(Vector2f(100,100));
    dice.setPosition(Vector2f(1200,500));
    Texture one1;
    one1.loadFromFile("1one.png");
    Texture two1;
    two1.loadFromFile("1two.png");
    Texture three1;
    three1.loadFromFile("1three.png");
    Texture four1;
    four1.loadFromFile("1four.png");
    Texture five1;
    five1.loadFromFile("1five.png");
    Texture six1;
    six1.loadFromFile("1six.png");

    Texture one2;
    one2.loadFromFile("2one.png");
    Texture two2;
    two2.loadFromFile("2two.png");
    Texture three2;
    three2.loadFromFile("2three.png");
    Texture four2;
    four2.loadFromFile("2four.png");
    Texture five2;
    five2.loadFromFile("2five.png");
    Texture six2;
    six2.loadFromFile("2six.png");


    Texture one3;
    one3.loadFromFile("3one.png");
    Texture two3;
    two3.loadFromFile("3two.png");
    Texture three3;
    three3.loadFromFile("3three.png");
    Texture four3;
    four3.loadFromFile("3four.png");
    Texture five3;
    five3.loadFromFile("3five.png");
    Texture six3;
    six3.loadFromFile("3six.png");

    Texture one4;
    one4.loadFromFile("4one.png");
    Texture two4;
    two4.loadFromFile("4two.png");
    Texture three4;
    three4.loadFromFile("4three.png");
    Texture four4;
    four4.loadFromFile("4four.png");
    Texture five4;
    five4.loadFromFile("4five.png");
    Texture six4;
    six4.loadFromFile("4six.png");




    Texture texture;
    if(!texture.loadFromFile("size2.png"))
    {
        printf("error");

    }
    Sprite sprite(texture);
    Time deltaTime;
    Clock clock;



/*
    Texture two;
    one.loadFromFile("two.png");
    Vector2u textureSize2=two.getSize();
    float w2=static_cast<float>(textureSize2.x);
    float h2=static_cast<float>(textureSize2.y);
    RectangleShape two2(Vector2f(w2,h2));
    two2.setTexture(&two);

    Texture three;
    one.loadFromFile("three.png");
    Vector2u textureSize3=three.getSize();
    float w3=static_cast<float>(textureSize3.x);
    float h3=static_cast<float>(textureSize3.y);
    RectangleShape three3(Vector2f(w3,h3));
    three3.setTexture(&three);

    Texture four;
    one.loadFromFile("four.png");
    Vector2u textureSize4=four.getSize();
    float w4=static_cast<float>(textureSize4.x);
    float h4=static_cast<float>(textureSize4.y);
    RectangleShape four4(Vector2f(w4,h4));
    four4.setTexture(&four);

    Texture five;
    one.loadFromFile("five.png");
    Vector2u textureSize5=one.getSize();
    float w5=static_cast<float>(textureSize5.x);
    float h5=static_cast<float>(textureSize5.y);
    RectangleShape five5(Vector2f(w5,h5));
    five5.setTexture(&five);

    Texture six;
    one.loadFromFile("six.png");
    Vector2u textureSize6=one.getSize();
    float w6=static_cast<float>(textureSize6.x);
    float h6=static_cast<float>(textureSize6.y);
    RectangleShape six6(Vector2f(w6,h6));
    six6.setTexture(&six);


    Sprite o1(one);
    Sprite o2(two);
    Sprite o3(three);
    Sprite o4(four);
    Sprite o5(five);
    Sprite o6(six);

*/



    while (window.isOpen())
    {
        deltaTime=clock.restart();
        float deltaassec=deltaTime.asSeconds();
        Event ev;

        while(window.pollEvent(ev))

        {

            if (ev.key.code == Keyboard:: Escape)//to close using escape
                {
                window.close();


                }

        if(ev.type == Event::Closed)
        {
        window.close();
        }
          if (sounddec== 1){music.play();}


  if(ev.type==Event::MouseButtonPressed && c==1)
{

         if(ev.type==Event::MouseButtonPressed)
    {

            y=randomnumber();
            std::cout<<y<<std::endl;
            std::cout<<"a"<<std::endl;

    }

        if(y==1)
    {
        dice.setTexture(&one1);
         if (sounddec== 1){sound2.play();}


    }
        if(y==2)
    {
        dice.setTexture(&two1);
         if (sounddec== 1){sound2.play();}


    }

        if(y==3)
    {
        dice.setTexture(&three1);
        if (sounddec== 1){sound2.play();}

    }
        if(y==4)
    {
        dice.setTexture(&four1);
 if (sounddec== 1){sound2.play();}
    }
        if(y==5)
    {
        dice.setTexture(&five1);
         if (sounddec== 1){sound2.play();}

    }

        if(y==6)
    {
        dice.setTexture(&six1);
         if (sounddec== 1){sound2.play();}
    }


if(rect1.getPosition().x==0 && rect1.getPosition().y==1000)
    {
        if(y==1)
            rect1.setPosition(101.5, 1000);
    }
else if(rect1.getGlobalBounds().left >190 && rect1.getGlobalBounds().left<250 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 || y==3))
{

 }
else if(rect1.getGlobalBounds().left >290 && rect1.getGlobalBounds().left<350 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 ))
{

 }
else if(rect1.getGlobalBounds().left >390 && rect1.getGlobalBounds().left<450 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6 || y==5 ))
{

 }
else if(rect1.getGlobalBounds().left >490 && rect1.getGlobalBounds().left<550 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6))
{

 }
else if(rect1.getGlobalBounds().left >0 && rect1.getGlobalBounds().left<150 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6))
{
    Texture gif;
    if(!texture.loadFromFile("gameover.gif"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;

 }
else
    {


  for (i=1; i<=y;i++)
{
                  if(rect1.getGlobalBounds().left>900 && dir1==1)
                 {

                 if(ev.type==Event::MouseButtonPressed)
                 {


                     rect1.move(0,-100);
                        dir1=-1;
                }
                 }




           else  if(rect1.getGlobalBounds().left<75 && dir1==-1)
               {
                   if(ev.type==Event::MouseButtonPressed)
                   {


                        rect1.move(0,-100);
                        dir1=1;
                 }
                }

            else
            {
                if(ev.type==Event::MouseButtonPressed)
                {
                rect1.move(dir1*101.5,0);

                }


            }
}
//for ladder at 3
if(rect1.getGlobalBounds().left>200 && rect1.getGlobalBounds().left<230 && rect1.getGlobalBounds().top<970 && rect1.getGlobalBounds().top>930)
                    {


                rect1.setPosition(Vector2f(609,500));
                 dir1=-1;
                 if (sounddec== 1){sound.play();}

                    }

//for ladder at 6
if(rect1.getGlobalBounds().left>500 && rect1.getGlobalBounds().left<550 && rect1.getGlobalBounds().top<970 && rect1.getGlobalBounds().top>930)
                    {


                rect1.setPosition(Vector2f(609,900));
                 dir1=-1;
if (sounddec== 1){sound.play();}
                    }

//for ladder at 8
if(rect1.getGlobalBounds().left>700 && rect1.getGlobalBounds().left<750 && rect1.getGlobalBounds().top<970 && rect1.getGlobalBounds().top>930)
                    {


                rect1.setPosition(Vector2f(812,700));
                 dir1=-1;
if (sounddec== 1){sound.play();}
                    }

//for snake at 17
if(rect1.getGlobalBounds().left>300 && rect1.getGlobalBounds().left<350 && rect1.getGlobalBounds().top<870 && rect1.getGlobalBounds().top>830)
                    {


                rect1.setPosition(Vector2f(812,1000));
                 dir1=1;
  if (sounddec== 1){sound1.play();}
                    }

//for ladder at 19
if(rect1.getGlobalBounds().left>100 && rect1.getGlobalBounds().left<150 && rect1.getGlobalBounds().top<870 && rect1.getGlobalBounds().top>830)
                    {


                rect1.setPosition(Vector2f(101.5,700));
                 dir1=-1;
if (sounddec== 1){sound.play();}
                    }

//for ladder at 25
if(rect1.getGlobalBounds().left>400 && rect1.getGlobalBounds().left<450 && rect1.getGlobalBounds().top<770 && rect1.getGlobalBounds().top>730)
                    {


                rect1.setPosition(Vector2f(406,400));
                 dir1=1;
if (sounddec== 1){sound.play();}
                    }

//for snake at 29
if(rect1.getGlobalBounds().left>800 && rect1.getGlobalBounds().left<850 && rect1.getGlobalBounds().top<770 && rect1.getGlobalBounds().top>730)
                    {


                rect1.setPosition(Vector2f(1015,1000));
                 dir1=1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 41
if(rect1.getGlobalBounds().left>0 && rect1.getGlobalBounds().left<50 && rect1.getGlobalBounds().top<570 && rect1.getGlobalBounds().top>530)
                    {


                rect1.setPosition(Vector2f(304.5,700));
                 dir1=-1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 38
if(rect1.getGlobalBounds().left>200 && rect1.getGlobalBounds().left<250 && rect1.getGlobalBounds().top<670 && rect1.getGlobalBounds().top>630)
                    {


                rect1.setPosition(Vector2f(203,500));
                 dir1=-1;
if (sounddec== 1){sound.play();}
                    }

//for snake at 48
if(rect1.getGlobalBounds().left>700 && rect1.getGlobalBounds().left<750 && rect1.getGlobalBounds().top<570 && rect1.getGlobalBounds().top>530)
                    {


                rect1.setPosition(Vector2f(701.5,800));
                 dir1=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 49
if(rect1.getGlobalBounds().left>800 && rect1.getGlobalBounds().left<850 && rect1.getGlobalBounds().top<670 && rect1.getGlobalBounds().top>630)
                    {


                rect1.setPosition(Vector2f(1015,200));
                 dir1=1;
if (sounddec== 1){sound.play();}
                    }


//for snake at 52
if(rect1.getGlobalBounds().left>800 && rect1.getGlobalBounds().left<850 && rect1.getGlobalBounds().top<470 && rect1.getGlobalBounds().top>430)
                    {


                rect1.setPosition(Vector2f(1015,700));
                 dir1=-1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 54
if(rect1.getGlobalBounds().left>600 && rect1.getGlobalBounds().left<650 && rect1.getGlobalBounds().top<470 && rect1.getGlobalBounds().top>430)
                    {


                rect1.setPosition(Vector2f(710.5,200));
                 dir1=1;
if (sounddec== 1){sound.play();}
                    }

//for snake at 66
if(rect1.getGlobalBounds().left>500 && rect1.getGlobalBounds().left<550 && rect1.getGlobalBounds().top<370 && rect1.getGlobalBounds().top>330)
                    {


                rect1.setPosition(Vector2f(609,800));
                 dir1=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 72
if(rect1.getGlobalBounds().left>800 && rect1.getGlobalBounds().left<850 && rect1.getGlobalBounds().top<270 && rect1.getGlobalBounds().top>230)
                    {


                rect1.setPosition(Vector2f(913.5,100));
                 dir1=-1;
if (sounddec== 1){sound.play();}
                    }

//for ladder at 75
if(rect1.getGlobalBounds().left>500 && rect1.getGlobalBounds().left<550 && rect1.getGlobalBounds().top<270 && rect1.getGlobalBounds().top>230)
                    {


                rect1.setPosition(Vector2f(507.5,100));
                 dir1=-1;
if (sounddec== 1){sound.play();}
                    }

//for snake at 79
if(rect1.getGlobalBounds().left>100 && rect1.getGlobalBounds().left<150 && rect1.getGlobalBounds().top<270 && rect1.getGlobalBounds().top>230)
                    {


                rect1.setPosition(Vector2f(203,500));
                 dir1=-1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 78
if(rect1.getGlobalBounds().left>200 && rect1.getGlobalBounds().left<250 && rect1.getGlobalBounds().top<270 && rect1.getGlobalBounds().top>230)
                    {


                rect1.setPosition(Vector2f(304.5,100));
                 dir1=-1;
if (sounddec== 1){sound.play();}
                    }

//for snake at 86
if(rect1.getGlobalBounds().left>500 && rect1.getGlobalBounds().left<550 && rect1.getGlobalBounds().top<170 && rect1.getGlobalBounds().top>130)
                    {


                rect1.setPosition(Vector2f(406,300));
                 dir1=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 93
if(rect1.getGlobalBounds().left>700 && rect1.getGlobalBounds().left<750 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>30)
                    {


                rect1.setPosition(Vector2f(710.5,400));
                 dir1=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 99
if(rect1.getGlobalBounds().left>100 && rect1.getGlobalBounds().left<150 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>30)
                    {


                rect1.setPosition(Vector2f(406,1000));
                 dir1=1;
 if (sounddec== 1){sound.play();}
                    }


        }
if((rect1.getGlobalBounds().left>0 || rect1.getGlobalBounds().left==0) && rect1.getGlobalBounds().left<50 && rect1.getGlobalBounds().top>30 && rect1.getGlobalBounds().top<130)
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;
}


c=2;
if(y==6 || y==1)
    c=1;


if((rect1.getGlobalBounds().left>0 || rect1.getGlobalBounds().left==0) && rect1.getGlobalBounds().left<50 && rect1.getGlobalBounds().top>930 && rect1.getGlobalBounds().top<970)
{
}
else if(rect1.getPosition().x==rect2.getPosition().x && rect1.getPosition().y==rect2.getPosition().y)
{
    rect2.setPosition(Vector2f(0,1000));
    dir2=1;
}

else if(rect1.getPosition().x==rect3.getPosition().x && rect1.getPosition().y==rect3.getPosition().y)
{
    rect3.setPosition(Vector2f(0,1000));
    dir3=1;
}

else if(rect1.getPosition().x==rect4.getPosition().x && rect1.getPosition().y==rect4.getPosition().y)
{
    rect4.setPosition(Vector2f(0,1000));
    dir4=1;
}


}

else if(ev.type==Event::MouseButtonPressed && c==2)
{
       if(ev.type==Event::MouseButtonPressed)
    {

            y=randomnumber();
            std::cout<<y<<std::endl;
            std::cout<<"a"<<std::endl;

    }

         if(y==1)
    {
        dice.setTexture(&one2);
         if (sounddec== 1){sound2.play();}

    }
        if(y==2)
    {
        dice.setTexture(&two2);
         if (sounddec== 1){sound2.play();}

    }

        if(y==3)
    {
        dice.setTexture(&three2);
         if (sounddec== 1){sound2.play();}

    }
        if(y==4)
    {
        dice.setTexture(&four2);
         if (sounddec== 1){sound2.play();}
;
    }
        if(y==5)
    {
        dice.setTexture(&five2);
        if (sounddec== 1){sound2.play();}

    }

        if(y==6)
    {
        dice.setTexture(&six2);
         if (sounddec== 1){sound2.play();}

    }

if(rect2.getPosition().x==0 && rect2.getPosition().y==1000)
    {
        if(y==1)
            rect2.setPosition(101.5, 1000);
    }
else if(rect2.getGlobalBounds().left >190 && rect2.getGlobalBounds().left<250 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 || y==3))
{

 }
else if(rect2.getGlobalBounds().left >290 && rect2.getGlobalBounds().left<350 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 ))
{

 }
else if(rect2.getGlobalBounds().left >390 && rect2.getGlobalBounds().left<450 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6 || y==5 ))
{

 }
else if(rect2.getGlobalBounds().left >490 && rect2.getGlobalBounds().left<550 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6))
{

 }
else if(rect2.getGlobalBounds().left >0 && rect2.getGlobalBounds().left<150 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6))
{

}
else
    {


  for (i=1; i<=y;i++)
{
                  if(rect2.getGlobalBounds().left>900 && dir2==1)
                 {

                 if(ev.type==Event::MouseButtonPressed)
                 {


                     rect2.move(0,-100);
                        dir2=-1;
                }
                 }




           else  if(rect2.getGlobalBounds().left<75 && dir2==-1)
               {
                   if(ev.type==Event::MouseButtonPressed)
                   {


                        rect2.move(0,-100);
                        dir2=1;
                 }
                }






            else
            {
                if(ev.type==Event::MouseButtonPressed)
                {
                rect2.move(dir2*101.5,0);
                }


            }
}
//for ladder at 3
if(rect2.getGlobalBounds().left>200 && rect2.getGlobalBounds().left<230 && rect2.getGlobalBounds().top<970 && rect2.getGlobalBounds().top>930)
                    {


                rect2.setPosition(Vector2f(609,500));
                 dir2=-1;
                  if (sounddec== 1){sound.play();}

                    }

//for ladder at 6
if(rect2.getGlobalBounds().left>500 && rect2.getGlobalBounds().left<550 && rect2.getGlobalBounds().top<970 && rect2.getGlobalBounds().top>930)
                    {


                rect2.setPosition(Vector2f(609,900));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 8
if(rect2.getGlobalBounds().left>700 && rect2.getGlobalBounds().left<750 && rect2.getGlobalBounds().top<970 && rect2.getGlobalBounds().top>930)
                    {


                rect2.setPosition(Vector2f(812,700));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 17
if(rect2.getGlobalBounds().left>300 && rect2.getGlobalBounds().left<350 && rect2.getGlobalBounds().top<870 && rect2.getGlobalBounds().top>830)
                    {


                rect2.setPosition(Vector2f(812,1000));
                 dir2=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 19
if(rect2.getGlobalBounds().left>100 && rect2.getGlobalBounds().left<150 && rect2.getGlobalBounds().top<870 && rect2.getGlobalBounds().top>830)
                    {


                rect2.setPosition(Vector2f(101.5,700));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 25
if(rect2.getGlobalBounds().left>400 && rect2.getGlobalBounds().left<450 && rect2.getGlobalBounds().top<770 && rect2.getGlobalBounds().top>730)
                    {


                rect2.setPosition(Vector2f(406,400));
                 dir2=1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 29
if(rect2.getGlobalBounds().left>800 && rect2.getGlobalBounds().left<850 && rect2.getGlobalBounds().top<770 && rect2.getGlobalBounds().top>730)
                    {


                rect2.setPosition(Vector2f(1015,1000));
                 dir2=1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 41
if(rect2.getGlobalBounds().left>0 && rect2.getGlobalBounds().left<50 && rect2.getGlobalBounds().top<570 && rect2.getGlobalBounds().top>530)
                    {


                rect2.setPosition(Vector2f(304.5,700));
                 dir2=-1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 38
if(rect2.getGlobalBounds().left>200 && rect2.getGlobalBounds().left<250 && rect2.getGlobalBounds().top<670 && rect2.getGlobalBounds().top>630)
                    {


                rect2.setPosition(Vector2f(203,500));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 48
if(rect2.getGlobalBounds().left>700 && rect2.getGlobalBounds().left<750 && rect2.getGlobalBounds().top<570 && rect2.getGlobalBounds().top>530)
                    {


                rect2.setPosition(Vector2f(701.5,800));
                 dir2=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 49
if(rect2.getGlobalBounds().left>800 && rect2.getGlobalBounds().left<850 && rect2.getGlobalBounds().top<670 && rect2.getGlobalBounds().top>630)
                    {


                rect2.setPosition(Vector2f(1015,200));
                 dir2=1;
 if (sounddec== 1){sound.play();}
                    }


//for snake at 52
if(rect2.getGlobalBounds().left>800 && rect2.getGlobalBounds().left<850 && rect2.getGlobalBounds().top<470 && rect2.getGlobalBounds().top>430)
                    {


                rect2.setPosition(Vector2f(1015,700));
                 dir2=-1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 54
if(rect2.getGlobalBounds().left>600 && rect2.getGlobalBounds().left<650 && rect2.getGlobalBounds().top<470 && rect2.getGlobalBounds().top>430)
                    {


                rect2.setPosition(Vector2f(710.5,200));
                 dir2=1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 66
if(rect2.getGlobalBounds().left>500 && rect2.getGlobalBounds().left<550 && rect2.getGlobalBounds().top<370 && rect2.getGlobalBounds().top>330)
                    {


                rect2.setPosition(Vector2f(609,800));
                 dir2=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 72
if(rect2.getGlobalBounds().left>800 && rect2.getGlobalBounds().left<850 && rect2.getGlobalBounds().top<270 && rect2.getGlobalBounds().top>230)
                    {


                rect2.setPosition(Vector2f(913.5,100));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 75
if(rect2.getGlobalBounds().left>500 && rect2.getGlobalBounds().left<550 && rect2.getGlobalBounds().top<270 && rect2.getGlobalBounds().top>230)
                    {


                rect2.setPosition(Vector2f(507.5,100));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 79
if(rect2.getGlobalBounds().left>100 && rect2.getGlobalBounds().left<150 && rect2.getGlobalBounds().top<270 && rect2.getGlobalBounds().top>230)
                    {


                rect2.setPosition(Vector2f(203,500));
                 dir2=-1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 78
if(rect2.getGlobalBounds().left>200 && rect2.getGlobalBounds().left<250 && rect2.getGlobalBounds().top<270 && rect2.getGlobalBounds().top>230)
                    {


                rect2.setPosition(Vector2f(304.5,100));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 86
if(rect2.getGlobalBounds().left>500 && rect2.getGlobalBounds().left<550 && rect2.getGlobalBounds().top<170 && rect2.getGlobalBounds().top>130)
                    {


                rect2.setPosition(Vector2f(406,300));
                 dir2=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 93
if(rect2.getGlobalBounds().left>700 && rect2.getGlobalBounds().left<750 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>30)
                    {


                rect2.setPosition(Vector2f(710.5,400));
                 dir2=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 99
if(rect2.getGlobalBounds().left>100 && rect2.getGlobalBounds().left<150 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>30)
                    {


                rect2.setPosition(Vector2f(406,1000));
                 dir2=1;
 if (sounddec== 1){sound.play();}
                    }

        }

if((rect2.getGlobalBounds().left>0 || rect2.getGlobalBounds().left==0) && rect2.getGlobalBounds().left<50 && rect2.getGlobalBounds().top>30 && rect2.getGlobalBounds().top<130)
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;
}

if(player==2)
{
    c=1;
}
else
{
    c=3;
}
if(y==6 || y==1)
    c=2;

if((rect2.getGlobalBounds().left>0 || rect2.getGlobalBounds().left==0) && rect2.getGlobalBounds().left<50 && rect2.getGlobalBounds().top>930 && rect2.getGlobalBounds().top<970)
{
}
else if(rect1.getPosition().x==rect2.getPosition().x && rect1.getPosition().y==rect2.getPosition().y)
{
    rect1.setPosition(Vector2f(0,1000));
    dir1=1;
}

else if(rect3.getPosition().x==rect2.getPosition().x && rect3.getPosition().y==rect2.getPosition().y)
{
    rect3.setPosition(Vector2f(0,1000));
    dir3=1;
}

else if(rect2.getPosition().x==rect4.getPosition().x && rect4.getPosition().y==rect2.getPosition().y)
{
    rect4.setPosition(Vector2f(0,1000));
    dir4=1;
}

}

   else if(ev.type==Event::MouseButtonPressed && c==3)
    {
        if(ev.type==Event::MouseButtonPressed)
    {

            y=randomnumber();
            std::cout<<y<<std::endl;
            std::cout<<"a"<<std::endl;
          /*  if (y==1)
                {
    Texture one11;
    if(!texture.loadFromFile("one.png"))
    {
        printf("error");

    }
    Sprite one1(one11);
    one1.setPosition(1200,500);

    window.draw(one1);
    window.clear();
    break;
            //sound.play();
    }*/
    }

         if(y==1)
    {
        dice.setTexture(&one3);
         if (sounddec== 1){sound2.play();}

    }
        if(y==2)
    {
        dice.setTexture(&two3);
         if (sounddec== 1){sound2.play();}

    }

        if(y==3)
    {
        dice.setTexture(&three3);
         if (sounddec== 1){sound2.play();}

    }
        if(y==4)
    {
        dice.setTexture(&four3);
         if (sounddec== 1){sound2.play();}

    }
        if(y==5)
    {
        dice.setTexture(&five3);
         if (sounddec== 1){sound2.play();}

    }

        if(y==6)
    {
        dice.setTexture(&six3);
         if (sounddec== 1){sound2.play();}

    }

if(rect3.getPosition().x==0 && rect3.getPosition().y==1000)
    {
        if(y==1)
            rect3.setPosition(101.5, 1000);
    }
else if(rect3.getGlobalBounds().left >190 && rect3.getGlobalBounds().left<250 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 || y==3))
{

 }
else if(rect3.getGlobalBounds().left >290 && rect3.getGlobalBounds().left<350 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 ))
{

 }
else if(rect3.getGlobalBounds().left >390 && rect3.getGlobalBounds().left<450 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6 || y==5 ))
{

 }
else if(rect3.getGlobalBounds().left >490 && rect3.getGlobalBounds().left<550 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6))
{

 }
else if(rect3.getGlobalBounds().left >0 && rect3.getGlobalBounds().left<150 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6))
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;

 }
else
    {


  for (i=1; i<=y;i++)
{
                  if(rect3.getGlobalBounds().left>900 && dir3==1)
                 {

                 if(ev.type==Event::MouseButtonPressed)
                 {


                     rect3.move(0,-100);
                        dir3=-1;
                }
                 }




           else  if(rect3.getGlobalBounds().left<75 && dir3==-1)
               {
                   if(ev.type==Event::MouseButtonPressed)
                   {


                        rect3.move(0,-100);
                        dir3=1;
                 }
                }

            else
            {
                if(ev.type==Event::MouseButtonPressed)
                {
                rect3.move(dir3*101.5,0);
                }


            }
}

//for ladder at 3
if(rect3.getGlobalBounds().left>200 && rect3.getGlobalBounds().left<230 && rect3.getGlobalBounds().top<970 && rect3.getGlobalBounds().top>930)
                    {


                rect3.setPosition(Vector2f(609,500));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 6
if(rect3.getGlobalBounds().left>500 && rect3.getGlobalBounds().left<550 && rect3.getGlobalBounds().top<970 && rect3.getGlobalBounds().top>930)
                    {


                rect3.setPosition(Vector2f(609,900));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 8
if(rect3.getGlobalBounds().left>700 && rect3.getGlobalBounds().left<750 && rect3.getGlobalBounds().top<970 && rect3.getGlobalBounds().top>930)
                    {


                rect3.setPosition(Vector2f(812,700));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 17
if(rect3.getGlobalBounds().left>300 && rect3.getGlobalBounds().left<350 && rect3.getGlobalBounds().top<870 && rect3.getGlobalBounds().top>830)
                    {


                rect3.setPosition(Vector2f(812,1000));
                 dir3=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 19
if(rect3.getGlobalBounds().left>100 && rect3.getGlobalBounds().left<150 && rect3.getGlobalBounds().top<870 && rect3.getGlobalBounds().top>830)
                    {


                rect3.setPosition(Vector2f(101.5,700));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 25
if(rect3.getGlobalBounds().left>400 && rect3.getGlobalBounds().left<450 && rect3.getGlobalBounds().top<770 && rect3.getGlobalBounds().top>730)
                    {


                rect3.setPosition(Vector2f(406,400));
                 dir3=1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 29
if(rect3.getGlobalBounds().left>800 && rect3.getGlobalBounds().left<850 && rect3.getGlobalBounds().top<770 && rect3.getGlobalBounds().top>730)
                    {


                rect3.setPosition(Vector2f(1015,1000));
                 dir3=1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 41
if(rect3.getGlobalBounds().left>0 && rect3.getGlobalBounds().left<50 && rect3.getGlobalBounds().top<570 && rect3.getGlobalBounds().top>530)
                    {


                rect3.setPosition(Vector2f(304.5,700));
                 dir3=-1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 38
if(rect3.getGlobalBounds().left>200 && rect3.getGlobalBounds().left<250 && rect3.getGlobalBounds().top<670 && rect3.getGlobalBounds().top>630)
                    {


                rect3.setPosition(Vector2f(203,500));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 48
if(rect3.getGlobalBounds().left>700 && rect3.getGlobalBounds().left<750 && rect3.getGlobalBounds().top<570 && rect3.getGlobalBounds().top>530)
                    {


                rect3.setPosition(Vector2f(701.5,800));
                 dir3=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 49
if(rect3.getGlobalBounds().left>800 && rect3.getGlobalBounds().left<850 && rect3.getGlobalBounds().top<670 && rect3.getGlobalBounds().top>630)
                    {


                rect3.setPosition(Vector2f(1015,200));
                 dir3=1;
 if (sounddec== 1){sound.play();}
                    }


//for snake at 52
if(rect3.getGlobalBounds().left>800 && rect3.getGlobalBounds().left<850 && rect3.getGlobalBounds().top<470 && rect3.getGlobalBounds().top>430)
                    {


                rect3.setPosition(Vector2f(1015,700));
                 dir3=-1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 54
if(rect3.getGlobalBounds().left>600 && rect3.getGlobalBounds().left<650 && rect3.getGlobalBounds().top<470 && rect3.getGlobalBounds().top>430)
                    {


                rect3.setPosition(Vector2f(710.5,200));
                 dir3=1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 66
if(rect3.getGlobalBounds().left>500 && rect3.getGlobalBounds().left<550 && rect3.getGlobalBounds().top<370 && rect3.getGlobalBounds().top>330)
                    {


                rect3.setPosition(Vector2f(609,800));
                 dir3=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 72
if(rect3.getGlobalBounds().left>800 && rect3.getGlobalBounds().left<850 && rect3.getGlobalBounds().top<270 && rect3.getGlobalBounds().top>230)
                    {


                rect3.setPosition(Vector2f(913.5,100));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 75
if(rect3.getGlobalBounds().left>500 && rect3.getGlobalBounds().left<550 && rect3.getGlobalBounds().top<270 && rect3.getGlobalBounds().top>230)
                    {


                rect3.setPosition(Vector2f(507.5,100));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 79
if(rect3.getGlobalBounds().left>100 && rect3.getGlobalBounds().left<150 && rect3.getGlobalBounds().top<270 && rect3.getGlobalBounds().top>230)
                    {


                rect3.setPosition(Vector2f(203,500));
                 dir3=-1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 78
if(rect3.getGlobalBounds().left>200 && rect3.getGlobalBounds().left<250 && rect3.getGlobalBounds().top<270 && rect3.getGlobalBounds().top>230)
                    {


                rect3.setPosition(Vector2f(304.5,100));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 86
if(rect3.getGlobalBounds().left>500 && rect3.getGlobalBounds().left<550 && rect3.getGlobalBounds().top<170 && rect3.getGlobalBounds().top>130)
                    {


                rect3.setPosition(Vector2f(406,300));
                 dir3=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 93
if(rect3.getGlobalBounds().left>700 && rect3.getGlobalBounds().left<750 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>30)
                    {


                rect3.setPosition(Vector2f(710.5,400));
                 dir3=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 99
if(rect3.getGlobalBounds().left>100 && rect3.getGlobalBounds().left<150 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>30)
                    {


                rect3.setPosition(Vector2f(406,1000));
                 dir3=1;
 if (sounddec== 1){sound.play();}
                    }

        }
if((rect3.getGlobalBounds().left>0 || rect3.getGlobalBounds().left==0) && rect3.getGlobalBounds().left<50 && rect3.getGlobalBounds().top>30 && rect3.getGlobalBounds().top<130)
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;
}

if(player==3)
{
    c=1;
}
else
{
    c=4;
}
if(y==6 || y==1)
    c=3;

if((rect3.getGlobalBounds().left>0 || rect3.getGlobalBounds().left==0) && rect3.getGlobalBounds().left<50 && rect3.getGlobalBounds().top>930 && rect3.getGlobalBounds().top<970)
{
}
else if(rect3.getPosition().x==rect2.getPosition().x && rect3.getPosition().y==rect2.getPosition().y)
{
    rect2.setPosition(Vector2f(0,1000));
    dir2=1;
}

else if(rect1.getPosition().x==rect3.getPosition().x && rect1.getPosition().y==rect3.getPosition().y)
{
    rect1.setPosition(Vector2f(0,1000));
    dir1=1;
}

else if(rect3.getPosition().x==rect4.getPosition().x && rect3.getPosition().y==rect4.getPosition().y)
{
    rect4.setPosition(Vector2f(0,1000));
    dir4=1;
}

}

else if(ev.type==Event::MouseButtonPressed && c==4)
{

    if(ev.type==Event::MouseButtonPressed)
    {

            y=randomnumber();
            std::cout<<y<<std::endl;
            std::cout<<"a"<<std::endl;

    }

         if(y==1)
    {
        dice.setTexture(&one4);
         if (sounddec== 1){sound2.play();}

    }
        if(y==2)
    {
        dice.setTexture(&two4);
         if (sounddec== 1){sound2.play();}
    }

        if(y==3)
    {
        dice.setTexture(&three4);
         if (sounddec== 1){sound2.play();}

    }
        if(y==4)
    {
        dice.setTexture(&four4);
         if (sounddec== 1){sound2.play();}

    }
        if(y==5)
    {
        dice.setTexture(&five4);
         if (sounddec== 1){sound2.play();}

    }

        if(y==6)
    {
        dice.setTexture(&six4);
         if (sounddec== 1){sound2.play();}

    }
if(rect4.getPosition().x==0 && rect4.getPosition().y==1000)
    {
        if(y==1)
            rect4.setPosition(101.5, 1000);
    }
else if(rect4.getGlobalBounds().left >190 && rect4.getGlobalBounds().left<250 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 || y==3))
{

 }
else if(rect4.getGlobalBounds().left >290 && rect4.getGlobalBounds().left<350 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 ))
{

 }
else if(rect4.getGlobalBounds().left >390 && rect4.getGlobalBounds().left<450 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6 || y==5 ))
{

 }
else if(rect4.getGlobalBounds().left >490 && rect4.getGlobalBounds().left<550 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6))
{

 }
else if(rect4.getGlobalBounds().left >0 && rect4.getGlobalBounds().left<150 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6))
{

}
else
    {


  for (i=1; i<=y;i++)
{
                  if(rect4.getGlobalBounds().left>900 && dir4==1)
                 {

                 if(ev.type==Event::MouseButtonPressed)
                 {


                     rect4.move(0,-100);
                        dir4=-1;
                }
                 }




           else  if(rect4.getGlobalBounds().left<75 && dir4==-1)
               {
                   if(ev.type==Event::MouseButtonPressed)
                   {


                        rect4.move(0,-100);
                        dir4=1;
                 }
                }






            else
            {
                if(ev.type==Event::MouseButtonPressed)
                {
                rect4.move(dir4*101.5,0);
                }


            }
}


//for ladder at 3
if(rect4.getGlobalBounds().left>200 && rect4.getGlobalBounds().left<230 && rect4.getGlobalBounds().top<970 && rect4.getGlobalBounds().top>930)
                    {


                rect4.setPosition(Vector2f(609,500));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 6
if(rect4.getGlobalBounds().left>500 && rect4.getGlobalBounds().left<550 && rect4.getGlobalBounds().top<970 && rect4.getGlobalBounds().top>930)
                    {


                rect4.setPosition(Vector2f(609,900));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 8
if(rect4.getGlobalBounds().left>700 && rect4.getGlobalBounds().left<750 && rect4.getGlobalBounds().top<970 && rect4.getGlobalBounds().top>930)
                    {


                rect4.setPosition(Vector2f(812,700));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 17
if(rect4.getGlobalBounds().left>300 && rect4.getGlobalBounds().left<350 && rect4.getGlobalBounds().top<870 && rect4.getGlobalBounds().top>830)
                    {


                rect4.setPosition(Vector2f(812,1000));
                 dir4=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 19
if(rect4.getGlobalBounds().left>100 && rect4.getGlobalBounds().left<150 && rect4.getGlobalBounds().top<870 && rect4.getGlobalBounds().top>830)
                    {


                rect4.setPosition(Vector2f(101.5,700));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 25
if(rect4.getGlobalBounds().left>400 && rect4.getGlobalBounds().left<450 && rect4.getGlobalBounds().top<770 && rect4.getGlobalBounds().top>730)
                    {


                rect4.setPosition(Vector2f(406,400));
                 dir4=1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 29
if(rect4.getGlobalBounds().left>800 && rect4.getGlobalBounds().left<850 && rect4.getGlobalBounds().top<770 && rect4.getGlobalBounds().top>730)
                    {


                rect4.setPosition(Vector2f(1015,1000));
                 dir4=1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 41
if(rect4.getGlobalBounds().left>0 && rect4.getGlobalBounds().left<50 && rect4.getGlobalBounds().top<570 && rect4.getGlobalBounds().top>530)
                    {


                rect4.setPosition(Vector2f(304.5,700));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 38
if(rect4.getGlobalBounds().left>200 && rect4.getGlobalBounds().left<250 && rect4.getGlobalBounds().top<670 && rect4.getGlobalBounds().top>630)
                    {


                rect4.setPosition(Vector2f(203,500));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 48
if(rect4.getGlobalBounds().left>700 && rect4.getGlobalBounds().left<750 && rect4.getGlobalBounds().top<570 && rect4.getGlobalBounds().top>530)
                    {


                rect4.setPosition(Vector2f(701.5,800));
                 dir4=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 49
if(rect4.getGlobalBounds().left>800 && rect4.getGlobalBounds().left<850 && rect4.getGlobalBounds().top<670 && rect4.getGlobalBounds().top>630)
                    {


                rect4.setPosition(Vector2f(1015,200));
                 dir4=1;
 if (sounddec== 1){sound.play();}
                    }


//for snake at 52
if(rect4.getGlobalBounds().left>800 && rect4.getGlobalBounds().left<850 && rect4.getGlobalBounds().top<470 && rect4.getGlobalBounds().top>430)
                    {


                rect4.setPosition(Vector2f(1015,700));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 54
if(rect4.getGlobalBounds().left>600 && rect4.getGlobalBounds().left<650 && rect4.getGlobalBounds().top<470 && rect4.getGlobalBounds().top>430)
                    {


                rect4.setPosition(Vector2f(710.5,200));
                 dir4=1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 66
if(rect4.getGlobalBounds().left>500 && rect4.getGlobalBounds().left<550 && rect4.getGlobalBounds().top<370 && rect4.getGlobalBounds().top>330)
                    {


                rect4.setPosition(Vector2f(609,800));
                 dir4=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 72
if(rect4.getGlobalBounds().left>800 && rect4.getGlobalBounds().left<850 && rect4.getGlobalBounds().top<270 && rect4.getGlobalBounds().top>230)
                    {


                rect4.setPosition(Vector2f(913.5,100));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 75
if(rect4.getGlobalBounds().left>500 && rect4.getGlobalBounds().left<550 && rect4.getGlobalBounds().top<270 && rect4.getGlobalBounds().top>230)
                    {


                rect4.setPosition(Vector2f(507.5,100));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 79
if(rect4.getGlobalBounds().left>100 && rect4.getGlobalBounds().left<150 && rect4.getGlobalBounds().top<270 && rect4.getGlobalBounds().top>230)
                    {


                rect4.setPosition(Vector2f(203,500));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 78
if(rect4.getGlobalBounds().left>200 && rect4.getGlobalBounds().left<250 && rect4.getGlobalBounds().top<270 && rect4.getGlobalBounds().top>230)
                    {


                rect4.setPosition(Vector2f(304.5,100));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 86
if(rect4.getGlobalBounds().left>500 && rect4.getGlobalBounds().left<550 && rect4.getGlobalBounds().top<170 && rect4.getGlobalBounds().top>130)
                    {


                rect4.setPosition(Vector2f(406,300));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 93
if(rect4.getGlobalBounds().left>700 && rect4.getGlobalBounds().left<750 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>30)
                    {


                rect4.setPosition(Vector2f(710.5,400));
                 dir4=1;
if (sounddec== 1){sound1.play();}
                    }

//for ladder at 99
if(rect4.getGlobalBounds().left>100 && rect4.getGlobalBounds().left<150 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>30)
                    {


                rect4.setPosition(Vector2f(406,1000));
                 dir4=1;
 if (sounddec== 1){sound.play();}
                    }

        }
if((rect4.getGlobalBounds().left>0 || rect4.getGlobalBounds().left==0) && rect4.getGlobalBounds().left<50 && rect4.getGlobalBounds().top>30 && rect4.getGlobalBounds().top<130)
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;
}

c=1;
if(y==6 || y==1)
    c=4;

if((rect4.getGlobalBounds().left>0 || rect4.getGlobalBounds().left==0)&& rect4.getGlobalBounds().left<50 && rect4.getGlobalBounds().top>930 && rect4.getGlobalBounds().top<970)
{
}
else if(rect4.getPosition().x==rect2.getPosition().x && rect4.getPosition().y==rect2.getPosition().y)
{
    rect2.setPosition(Vector2f(0,1000));
    dir2=1;
}

else if(rect4.getPosition().x==rect3.getPosition().x && rect4.getPosition().y==rect3.getPosition().y)
{
    rect3.setPosition(Vector2f(0,1000));
    dir3=1;
}

else if(rect1.getPosition().x==rect4.getPosition().x && rect1.getPosition().y==rect4.getPosition().y)
{
    rect1.setPosition(Vector2f(0,1000));
    dir1=1;
}
}
        }





        window.clear();


        window.draw(sprite);
        window.draw(rect1);
        window.draw(rect2);
        window.draw(rect3);
        window.draw(rect4);
        window.draw(dice);
        window.display();
    }
                   }

//for board 2
            if(eev.mouseButton.x>660&&eev.mouseButton.x<1000 &&eev.mouseButton.y>450 &&eev.mouseButton.y<560)
            {
 win.close();




    int dir1=1;
    int dir2=1;
    int dir3=1;
    int dir4=1;
    // for random function call
    int y;
    int i;


    RenderWindow window(VideoMode(1530, 1130), "Real Game!");
    // this is for token
    RectangleShape rect1(Vector2f(50,50));
    rect1.setFillColor(Color::Green);
    rect1.setOrigin(Vector2f(75,50));
    rect1.setPosition(Vector2f(0,1000));

    RectangleShape rect2(Vector2f(50,50));
    rect2.setFillColor(Color::Red);
    rect2.setOrigin(Vector2f(75,50));
    rect2.setPosition(Vector2f(0,1000));

    RectangleShape rect3(Vector2f(50,50));
    rect3.setFillColor(Color::Yellow);
    rect3.setOrigin(Vector2f(75,50));
    rect3.setPosition(Vector2f(0,1000));

    RectangleShape rect4(Vector2f(50,50));
    rect4.setFillColor(Color::Blue);
    rect4.setOrigin(Vector2f(75,50));
    rect4.setPosition(Vector2f(0,1000));




    //this is for dice
    RectangleShape dice(Vector2f(100,100));
    dice.setPosition(Vector2f(1200,500));
    Texture one1;
    one1.loadFromFile("1one.png");
    Texture two1;
    two1.loadFromFile("1two.png");
    Texture three1;
    three1.loadFromFile("1three.png");
    Texture four1;
    four1.loadFromFile("1four.png");
    Texture five1;
    five1.loadFromFile("1five.png");
    Texture six1;
    six1.loadFromFile("1six.png");

    Texture one2;
    one2.loadFromFile("2one.png");
    Texture two2;
    two2.loadFromFile("2two.png");
    Texture three2;
    three2.loadFromFile("2three.png");
    Texture four2;
    four2.loadFromFile("2four.png");
    Texture five2;
    five2.loadFromFile("2five.png");
    Texture six2;
    six2.loadFromFile("2six.png");


    Texture one3;
    one3.loadFromFile("3one.png");
    Texture two3;
    two3.loadFromFile("3two.png");
    Texture three3;
    three3.loadFromFile("3three.png");
    Texture four3;
    four3.loadFromFile("3four.png");
    Texture five3;
    five3.loadFromFile("3five.png");
    Texture six3;
    six3.loadFromFile("3six.png");

    Texture one4;
    one4.loadFromFile("4one.png");
    Texture two4;
    two4.loadFromFile("4two.png");
    Texture three4;
    three4.loadFromFile("4three.png");
    Texture four4;
    four4.loadFromFile("4four.png");
    Texture five4;
    five4.loadFromFile("4five.png");
    Texture six4;
    six4.loadFromFile("4six.png");

    //for audio
/*    SoundBuffer sbuffer;
    sbuffer.loadFromFile("start.wav");
    Sound sound(sbuffer);
    sound.setVolume(20);

    /*SoundBuffer mus;
    mus.loadFromFile("music.wav");
    Sound music(mus);
    music.setVolume(80);*/


    Texture texture;
    if(!texture.loadFromFile("size1.png"))
    {
        printf("error");

    }
    Sprite sprite(texture);
    Time deltaTime;
    Clock clock;



/*
    Texture two;
    one.loadFromFile("two.png");
    Vector2u textureSize2=two.getSize();
    float w2=static_cast<float>(textureSize2.x);
    float h2=static_cast<float>(textureSize2.y);
    RectangleShape two2(Vector2f(w2,h2));
    two2.setTexture(&two);

    Texture three;
    one.loadFromFile("three.png");
    Vector2u textureSize3=three.getSize();
    float w3=static_cast<float>(textureSize3.x);
    float h3=static_cast<float>(textureSize3.y);
    RectangleShape three3(Vector2f(w3,h3));
    three3.setTexture(&three);

    Texture four;
    one.loadFromFile("four.png");
    Vector2u textureSize4=four.getSize();
    float w4=static_cast<float>(textureSize4.x);
    float h4=static_cast<float>(textureSize4.y);
    RectangleShape four4(Vector2f(w4,h4));
    four4.setTexture(&four);

    Texture five;
    one.loadFromFile("five.png");
    Vector2u textureSize5=one.getSize();
    float w5=static_cast<float>(textureSize5.x);
    float h5=static_cast<float>(textureSize5.y);
    RectangleShape five5(Vector2f(w5,h5));
    five5.setTexture(&five);

    Texture six;
    one.loadFromFile("six.png");
    Vector2u textureSize6=one.getSize();
    float w6=static_cast<float>(textureSize6.x);
    float h6=static_cast<float>(textureSize6.y);
    RectangleShape six6(Vector2f(w6,h6));
    six6.setTexture(&six);


    Sprite o1(one);
    Sprite o2(two);
    Sprite o3(three);
    Sprite o4(four);
    Sprite o5(five);
    Sprite o6(six);

*/



    while (window.isOpen())
    {
        deltaTime=clock.restart();
        float deltaassec=deltaTime.asSeconds();
        Event ev;

        while(window.pollEvent(ev))

        {

            if (ev.key.code == Keyboard:: Escape)//to close using escape
                {
                window.close();


                }

        if(ev.type == Event::Closed)
        {
        window.close();
        }
        //music.play();

  if(ev.type==Event::MouseButtonPressed && c==1)
{

         if(ev.type==Event::MouseButtonPressed)
    {

            y=randomnumber();
            std::cout<<y<<std::endl;
            std::cout<<"a"<<std::endl;

    }

        if(y==1)
    {
        dice.setTexture(&one1);
         if (sounddec== 1){sound2.play();}

    }
        if(y==2)
    {
        dice.setTexture(&two1);
         if (sounddec== 1){sound2.play();}

    }

        if(y==3)
    {
        dice.setTexture(&three1);
         if (sounddec== 1){sound2.play();}

    }
        if(y==4)
    {
        dice.setTexture(&four1);
         if (sounddec== 1){sound2.play();}
   }
        if(y==5)
    {
        dice.setTexture(&five1);
 if (sounddec== 1){sound2.play();}
    }

        if(y==6)
    {
        dice.setTexture(&six1);
         if (sounddec== 1){sound2.play();}

    }


if(rect1.getPosition().x==0 && rect1.getPosition().y==1000)
    {
        if(y==1)
            rect1.setPosition(101.5, 1000);
    }
else if(rect1.getGlobalBounds().left >190 && rect1.getGlobalBounds().left<250 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 || y==3))
{

 }
else if(rect1.getGlobalBounds().left >290 && rect1.getGlobalBounds().left<350 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 ))
{

 }
else if(rect1.getGlobalBounds().left >390 && rect1.getGlobalBounds().left<450 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6 || y==5 ))
{

 }
else if(rect1.getGlobalBounds().left >490 && rect1.getGlobalBounds().left<550 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6))
{

 }
else if(rect1.getGlobalBounds().left >0 && rect1.getGlobalBounds().left<150 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6))
{
    Texture gif;
    if(!texture.loadFromFile("gameover.gif"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;

 }
else
    {


  for (i=1; i<=y;i++)
{
                  if(rect1.getGlobalBounds().left>900 && dir1==1)
                 {

                 if(ev.type==Event::MouseButtonPressed)
                 {


                     rect1.move(0,-100);
                        dir1=-1;
                }
                 }




           else  if(rect1.getGlobalBounds().left<75 && dir1==-1)
               {
                   if(ev.type==Event::MouseButtonPressed)
                   {


                        rect1.move(0,-100);
                        dir1=1;
                 }
                }

            else
            {
                if(ev.type==Event::MouseButtonPressed)
                {
                rect1.move(dir1*101.5,0);

                }


            }
}

//for ladder at 3
if(rect1.getGlobalBounds().left>200 && rect1.getGlobalBounds().left<230 && rect1.getGlobalBounds().top<970 && rect1.getGlobalBounds().top>930)
                    {


                rect1.setPosition(Vector2f(710.5,900));
                 dir1=-1;
 if (sounddec== 1){sound.play();}
                    }
//for snake at 17
if(rect1.getGlobalBounds().left>300 && rect1.getGlobalBounds().left<350 && rect1.getGlobalBounds().top<870 && rect1.getGlobalBounds().top>830)
                    {


                rect1.setPosition(Vector2f(609,1000));
                 dir1=1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 21
 if(rect1.getGlobalBounds().left>0 && rect1.getGlobalBounds().left<50 && rect1.getGlobalBounds().top<770 && rect1.getGlobalBounds().top>730)
                    {


                rect1.setPosition(Vector2f(507.5,500));
                 dir1=-1;
 if (sounddec== 1){sound.play();}
                    }




//for snake at 26
if(rect1.getGlobalBounds().left>500 && rect1.getGlobalBounds().left<550 && rect1.getGlobalBounds().top<770 && rect1.getGlobalBounds().top>730)
                    {


                rect1.setPosition(Vector2f(913.5,900));
                 dir1=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 43
if(rect1.getGlobalBounds().left>200 && rect1.getGlobalBounds().left<250 && rect1.getGlobalBounds().top<570 && rect1.getGlobalBounds().top>530)
                    {


                rect1.setPosition(Vector2f(101.5,700));
                 dir1=-1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 41
if(rect1.getGlobalBounds().left>0 && rect1.getGlobalBounds().left<50 && rect1.getGlobalBounds().top<570 && rect1.getGlobalBounds().top>530)
                    {


                rect1.setPosition(Vector2f(406,300));
                 dir1=-1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 47
if(rect1.getGlobalBounds().left>600 && rect1.getGlobalBounds().left<650 && rect1.getGlobalBounds().top<570 && rect1.getGlobalBounds().top>530)
                    {


                rect1.setPosition(Vector2f(609,400));
                 dir1=1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 50
if(rect1.getGlobalBounds().left>900 && rect1.getGlobalBounds().left<950 && rect1.getGlobalBounds().top<570 && rect1.getGlobalBounds().top>530)
                    {


                rect1.setPosition(Vector2f(812,300));
                 dir1=-1;
 if (sounddec== 1){sound.play();}
                    }
//for snake at 53
  if(rect1.getGlobalBounds().left>700 && rect1.getGlobalBounds().left<750 && rect1.getGlobalBounds().top<470 && rect1.getGlobalBounds().top>430)
                    {


                rect1.setPosition(Vector2f(1015,700));
                 dir1=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 62
if(rect1.getGlobalBounds().left>100 && rect1.getGlobalBounds().left<150 && rect1.getGlobalBounds().top<370 && rect1.getGlobalBounds().top>330)
                    {


                rect1.setPosition(Vector2f(609,700));
                 dir1=-1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 70
if(rect1.getGlobalBounds().left>900 && rect1.getGlobalBounds().left<950 && rect1.getGlobalBounds().top<370 && rect1.getGlobalBounds().top>330)
                    {


                rect1.setPosition(Vector2f(913.5,100));
                 dir1=-1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 85
if(rect1.getGlobalBounds().left>400 && rect1.getGlobalBounds().left<450 && rect1.getGlobalBounds().top<170 && rect1.getGlobalBounds().top>130)
                    {


                rect1.setPosition(Vector2f(406,100));
                 dir1=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 86
if(rect1.getGlobalBounds().left>500 && rect1.getGlobalBounds().left<550 && rect1.getGlobalBounds().top<170 && rect1.getGlobalBounds().top>130)
                    {


                rect1.setPosition(Vector2f(1015,300));
                 dir1=-1;
 if (sounddec== 1){sound1.play();}
                    }

//for snake at 99
if(rect1.getGlobalBounds().left>100 && rect1.getGlobalBounds().left<150 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0)
                    {


                rect1.setPosition(Vector2f(400,400));
                 dir1=1;
if (sounddec== 1){sound1.play();}
                    }
        }
if((rect1.getGlobalBounds().left>0 || rect1.getGlobalBounds().left==0) && rect1.getGlobalBounds().left<50 && rect1.getGlobalBounds().top>30 && rect1.getGlobalBounds().top<130)
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;
}


c=2;
if(y==6 || y==1)
    c=1;


if((rect1.getGlobalBounds().left>0 || rect1.getGlobalBounds().left==0) && rect1.getGlobalBounds().left<50 && rect1.getGlobalBounds().top>930 && rect1.getGlobalBounds().top<970)
{
}
else if(rect1.getPosition().x==rect2.getPosition().x && rect1.getPosition().y==rect2.getPosition().y)
{
    rect2.setPosition(Vector2f(0,1000));
    dir2=1;
}

else if(rect1.getPosition().x==rect3.getPosition().x && rect1.getPosition().y==rect3.getPosition().y)
{
    rect3.setPosition(Vector2f(0,1000));
    dir3=1;
}

else if(rect1.getPosition().x==rect4.getPosition().x && rect1.getPosition().y==rect4.getPosition().y)
{
    rect4.setPosition(Vector2f(0,1000));
    dir4=1;
}


}

else if(ev.type==Event::MouseButtonPressed && c==2)
{
       if(ev.type==Event::MouseButtonPressed)
    {

            y=randomnumber();
            std::cout<<y<<std::endl;
            std::cout<<"a"<<std::endl;

    }

         if(y==1)
    {
        dice.setTexture(&one2);
         if (sounddec== 1){sound2.play();}

    }
        if(y==2)
    {
        dice.setTexture(&two2);
        if (sounddec== 1){sound2.play();}
    }

        if(y==3)
    {
        dice.setTexture(&three2);
       if (sounddec== 1){sound2.play();}
    }
        if(y==4)
    {
        dice.setTexture(&four2);
         if (sounddec== 1){sound2.play();}
    }
        if(y==5)
    {
        dice.setTexture(&five2);
          if (sounddec== 1){sound2.play();}
    }

        if(y==6)
    {
        dice.setTexture(&six2);
         if (sounddec== 1){sound2.play();}
    }

if(rect2.getPosition().x==0 && rect2.getPosition().y==1000)
    {
        if(y==1)
            rect2.setPosition(101.5, 1000);
    }
else if(rect2.getGlobalBounds().left >190 && rect2.getGlobalBounds().left<250 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 || y==3))
{

 }
else if(rect2.getGlobalBounds().left >290 && rect2.getGlobalBounds().left<350 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 ))
{

 }
else if(rect2.getGlobalBounds().left >390 && rect2.getGlobalBounds().left<450 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6 || y==5 ))
{

 }
else if(rect2.getGlobalBounds().left >490 && rect2.getGlobalBounds().left<550 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6))
{

 }
else if(rect2.getGlobalBounds().left >0 && rect2.getGlobalBounds().left<150 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6))
{

}
else
    {


  for (i=1; i<=y;i++)
{
                  if(rect2.getGlobalBounds().left>900 && dir2==1)
                 {

                 if(ev.type==Event::MouseButtonPressed)
                 {


                     rect2.move(0,-100);
                        dir2=-1;
                }
                 }




           else  if(rect2.getGlobalBounds().left<75 && dir2==-1)
               {
                   if(ev.type==Event::MouseButtonPressed)
                   {


                        rect2.move(0,-100);
                        dir2=1;
                 }
                }






            else
            {
                if(ev.type==Event::MouseButtonPressed)
                {
                rect2.move(dir2*101.5,0);
                }


            }
}

//for ladder at 3
if(rect2.getGlobalBounds().left>200 && rect2.getGlobalBounds().left<230 && rect2.getGlobalBounds().top<970 && rect2.getGlobalBounds().top>930)
                    {


                rect2.setPosition(Vector2f(710.5,900));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }
//for snake at 17
if(rect2.getGlobalBounds().left>300 && rect2.getGlobalBounds().left<350 && rect2.getGlobalBounds().top<870 && rect2.getGlobalBounds().top>830)
                    {


                rect2.setPosition(Vector2f(609,1000));
                 dir2=1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 21
 if(rect2.getGlobalBounds().left>0 && rect2.getGlobalBounds().left<50 && rect2.getGlobalBounds().top<770 && rect2.getGlobalBounds().top>730)
                    {


                rect2.setPosition(Vector2f(507.5,500));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }




//for snake at 26
if(rect2.getGlobalBounds().left>500 && rect2.getGlobalBounds().left<550 && rect2.getGlobalBounds().top<770 && rect2.getGlobalBounds().top>730)
                    {


                rect2.setPosition(Vector2f(913.5,900));
                 dir2=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 43
if(rect2.getGlobalBounds().left>200 && rect2.getGlobalBounds().left<250 && rect2.getGlobalBounds().top<570 && rect2.getGlobalBounds().top>530)
                    {


                rect2.setPosition(Vector2f(101.5,700));
                 dir2=-1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 41
if(rect2.getGlobalBounds().left>0 && rect2.getGlobalBounds().left<50 && rect2.getGlobalBounds().top<570 && rect2.getGlobalBounds().top>530)
                {


                rect2.setPosition(Vector2f(406,300));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 47
if(rect2.getGlobalBounds().left>600 && rect2.getGlobalBounds().left<650 && rect2.getGlobalBounds().top<570 && rect2.getGlobalBounds().top>530)
                    {


                rect2.setPosition(Vector2f(609,400));
                 dir2=1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 50
if(rect2.getGlobalBounds().left>900 && rect2.getGlobalBounds().left<950 && rect2.getGlobalBounds().top<570 && rect2.getGlobalBounds().top>530)
                    {


                rect2.setPosition(Vector2f(812,300));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }
//for snake at 53
  if(rect2.getGlobalBounds().left>700 && rect2.getGlobalBounds().left<750 && rect2.getGlobalBounds().top<470 && rect2.getGlobalBounds().top>430)
                    {


                rect2.setPosition(Vector2f(1015,700));
                 dir2=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 62
if(rect2.getGlobalBounds().left>100 && rect2.getGlobalBounds().left<150 && rect2.getGlobalBounds().top<370 && rect2.getGlobalBounds().top>330)
                    {


                rect2.setPosition(Vector2f(609,700));
                 dir2=-1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 70
if(rect2.getGlobalBounds().left>900 && rect2.getGlobalBounds().left<950 && rect2.getGlobalBounds().top<370 && rect2.getGlobalBounds().top>330)
                    {


                rect2.setPosition(Vector2f(913.5,100));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 85
if(rect2.getGlobalBounds().left>400 && rect2.getGlobalBounds().left<450 && rect2.getGlobalBounds().top<170 && rect2.getGlobalBounds().top>130)
                    {


                rect2.setPosition(Vector2f(406,100));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 86
if(rect2.getGlobalBounds().left>500 && rect2.getGlobalBounds().left<550 && rect2.getGlobalBounds().top<170 && rect2.getGlobalBounds().top>130)
                    {


                rect2.setPosition(Vector2f(1015,300));
                 dir2=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 99
if(rect2.getGlobalBounds().left>100 && rect2.getGlobalBounds().left<150 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0)
                    {


                rect2.setPosition(Vector2f(400,400));
                 dir2=1;
if (sounddec== 1){sound1.play();}
                    }
        }

if((rect2.getGlobalBounds().left>0 || rect2.getGlobalBounds().left==0) && rect2.getGlobalBounds().left<50 && rect2.getGlobalBounds().top>30 && rect2.getGlobalBounds().top<130)
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;
}

if(player==2)
{
    c=1;
}
else
{
    c=3;
}
if(y==6 || y==1)
    c=2;

if((rect2.getGlobalBounds().left>0 || rect2.getGlobalBounds().left==0) && rect2.getGlobalBounds().left<50 && rect2.getGlobalBounds().top>930 && rect2.getGlobalBounds().top<970)
{
}
else if(rect1.getPosition().x==rect2.getPosition().x && rect1.getPosition().y==rect2.getPosition().y)
{
    rect1.setPosition(Vector2f(0,1000));
    dir1=1;
}

else if(rect3.getPosition().x==rect2.getPosition().x && rect3.getPosition().y==rect2.getPosition().y)
{
    rect3.setPosition(Vector2f(0,1000));
    dir3=1;
}

else if(rect2.getPosition().x==rect4.getPosition().x && rect4.getPosition().y==rect2.getPosition().y)
{
    rect4.setPosition(Vector2f(0,1000));
    dir4=1;
}

}

   else if(ev.type==Event::MouseButtonPressed && c==3)
    {
        if(ev.type==Event::MouseButtonPressed)
    {

            y=randomnumber();
            std::cout<<y<<std::endl;
            std::cout<<"a"<<std::endl;
          /*  if (y==1)
                {
    Texture one11;
    if(!texture.loadFromFile("one.png"))
    {
        printf("error");

    }
    Sprite one1(one11);
    one1.setPosition(1200,500);

    window.draw(one1);
    window.clear();
    break;
            //sound.play();
    }*/
    }

         if(y==1)
    {
        dice.setTexture(&one3);
         if (sounddec== 1){sound2.play();}
    }
        if(y==2)
    {
        dice.setTexture(&two3);
         if (sounddec== 1){sound2.play();}
    }

        if(y==3)
    {
        dice.setTexture(&three3);
         if (sounddec== 1){sound2.play();}
    }
        if(y==4)
    {
        dice.setTexture(&four3);
         if (sounddec== 1){sound2.play();}
    }
        if(y==5)
    {
        dice.setTexture(&five3);
         if (sounddec== 1){sound2.play();}
    }

        if(y==6)
    {
        dice.setTexture(&six3);
         if (sounddec== 1){sound2.play();}
    }

if(rect3.getPosition().x==0 && rect3.getPosition().y==1000)
    {
        if(y==1)
            rect3.setPosition(101.5, 1000);
    }
else if(rect3.getGlobalBounds().left >190 && rect3.getGlobalBounds().left<250 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 || y==3))
{

 }
else if(rect3.getGlobalBounds().left >290 && rect3.getGlobalBounds().left<350 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 ))
{

 }
else if(rect3.getGlobalBounds().left >390 && rect3.getGlobalBounds().left<450 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6 || y==5 ))
{

 }
else if(rect3.getGlobalBounds().left >490 && rect3.getGlobalBounds().left<550 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6))
{

 }
else if(rect3.getGlobalBounds().left >0 && rect3.getGlobalBounds().left<150 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6))
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;

 }
else
    {


  for (i=1; i<=y;i++)
{
                  if(rect3.getGlobalBounds().left>900 && dir3==1)
                 {

                 if(ev.type==Event::MouseButtonPressed)
                 {


                     rect3.move(0,-100);
                        dir3=-1;
                }
                 }




           else  if(rect3.getGlobalBounds().left<75 && dir3==-1)
               {
                   if(ev.type==Event::MouseButtonPressed)
                   {


                        rect3.move(0,-100);
                        dir3=1;
                 }
                }

            else
            {
                if(ev.type==Event::MouseButtonPressed)
                {
                rect3.move(dir3*101.5,0);
                }


            }
}

//for ladder at 3
if(rect3.getGlobalBounds().left>200 && rect3.getGlobalBounds().left<230 && rect3.getGlobalBounds().top<970 && rect3.getGlobalBounds().top>930)
                    {


                rect3.setPosition(Vector2f(710.5,900));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }
//for snake at 17
if(rect3.getGlobalBounds().left>300 && rect3.getGlobalBounds().left<350 && rect3.getGlobalBounds().top<870 && rect3.getGlobalBounds().top>830)
                    {


                rect3.setPosition(Vector2f(609,1000));
                 dir3=1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 21
 if(rect3.getGlobalBounds().left>0 && rect3.getGlobalBounds().left<50 && rect3.getGlobalBounds().top<770 && rect3.getGlobalBounds().top>730)
                    {


                rect3.setPosition(Vector2f(507.5,500));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }




//for snake at 26
if(rect3.getGlobalBounds().left>500 && rect3.getGlobalBounds().left<550 && rect3.getGlobalBounds().top<770 && rect3.getGlobalBounds().top>730)
                    {


                rect3.setPosition(Vector2f(913.5,900));
                 dir3=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 43
if(rect3.getGlobalBounds().left>200 && rect3.getGlobalBounds().left<250 && rect3.getGlobalBounds().top<570 && rect3.getGlobalBounds().top>530)
                    {


                rect3.setPosition(Vector2f(101.5,700));
                 dir3=-1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 41
if(rect3.getGlobalBounds().left>0 && rect3.getGlobalBounds().left<50 && rect3.getGlobalBounds().top<570 && rect3.getGlobalBounds().top>530)
                {


                rect3.setPosition(Vector2f(406,300));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 47
if(rect3.getGlobalBounds().left>600 && rect3.getGlobalBounds().left<650 && rect3.getGlobalBounds().top<570 && rect3.getGlobalBounds().top>530)
                    {


                rect3.setPosition(Vector2f(609,400));
                 dir3=1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 50
if(rect3.getGlobalBounds().left>900 && rect3.getGlobalBounds().left<950 && rect3.getGlobalBounds().top<570 && rect3.getGlobalBounds().top>530)
                    {


                rect3.setPosition(Vector2f(812,300));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }
//for snake at 53
  if(rect3.getGlobalBounds().left>700 && rect3.getGlobalBounds().left<750 && rect3.getGlobalBounds().top<470 && rect3.getGlobalBounds().top>430)
                    {


                rect3.setPosition(Vector2f(1015,700));
                 dir3=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 62
if(rect3.getGlobalBounds().left>100 && rect3.getGlobalBounds().left<150 && rect3.getGlobalBounds().top<370 && rect3.getGlobalBounds().top>330)
                    {


                rect3.setPosition(Vector2f(609,700));
                 dir3=-1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 70
if(rect3.getGlobalBounds().left>900 && rect3.getGlobalBounds().left<950 && rect3.getGlobalBounds().top<370 && rect3.getGlobalBounds().top>330)
                    {


                rect3.setPosition(Vector2f(913.5,100));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 85
if(rect3.getGlobalBounds().left>400 && rect3.getGlobalBounds().left<450 && rect3.getGlobalBounds().top<170 && rect3.getGlobalBounds().top>130)
                    {


                rect3.setPosition(Vector2f(406,100));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 86
if(rect3.getGlobalBounds().left>500 && rect3.getGlobalBounds().left<550 && rect3.getGlobalBounds().top<170 && rect3.getGlobalBounds().top>130)
                    {


                rect3.setPosition(Vector2f(1015,300));
                 dir3=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 99
if(rect3.getGlobalBounds().left>100 && rect3.getGlobalBounds().left<150 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0)
                    {


                rect3.setPosition(Vector2f(400,400));
                 dir3=1;
if (sounddec== 1){sound1.play();}
                    }
        }
if((rect3.getGlobalBounds().left>0 || rect3.getGlobalBounds().left==0) && rect3.getGlobalBounds().left<50 && rect3.getGlobalBounds().top>30 && rect3.getGlobalBounds().top<130)
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;
}

if(player==3)
{
    c=1;
}
else
{
    c=4;
}
if(y==6 || y==1)
    c=3;

if((rect3.getGlobalBounds().left>0 || rect3.getGlobalBounds().left==0) && rect3.getGlobalBounds().left<50 && rect3.getGlobalBounds().top>930 && rect3.getGlobalBounds().top<970)
{
}
else if(rect3.getPosition().x==rect2.getPosition().x && rect3.getPosition().y==rect2.getPosition().y)
{
    rect2.setPosition(Vector2f(0,1000));
    dir2=1;
}

else if(rect1.getPosition().x==rect3.getPosition().x && rect1.getPosition().y==rect3.getPosition().y)
{
    rect1.setPosition(Vector2f(0,1000));
    dir1=1;
}

else if(rect3.getPosition().x==rect4.getPosition().x && rect3.getPosition().y==rect4.getPosition().y)
{
    rect4.setPosition(Vector2f(0,1000));
    dir4=1;
}

}

else if(ev.type==Event::MouseButtonPressed && c==4)
{

    if(ev.type==Event::MouseButtonPressed)
    {

            y=randomnumber();
            std::cout<<y<<std::endl;
            std::cout<<"a"<<std::endl;

    }

         if(y==1)
    {
        dice.setTexture(&one4);
         if (sounddec== 1){sound2.play();}

    }
        if(y==2)
    {
        dice.setTexture(&two4);
         if (sounddec== 1){sound2.play();}

    }

        if(y==3)
    {
        dice.setTexture(&three4);
         if (sounddec== 1){sound2.play();}

    }
        if(y==4)
    {
        dice.setTexture(&four4);
         if (sounddec == 1){sound2.play();}
    }
        if(y==5)
    {
        dice.setTexture(&five4);
         if (sounddec== 1){sound2.play();}
    }

        if(y==6)
    {
        dice.setTexture(&six4);
        if (sounddec== 1){sound2.play();}
    }
if(rect4.getPosition().x==0 && rect4.getPosition().y==1000)
    {
        if(y==1)
            rect4.setPosition(101.5, 1000);
    }
else if(rect4.getGlobalBounds().left >190 && rect4.getGlobalBounds().left<250 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 || y==3))
{

 }
else if(rect4.getGlobalBounds().left >290 && rect4.getGlobalBounds().left<350 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 ))
{

 }
else if(rect4.getGlobalBounds().left >390 && rect4.getGlobalBounds().left<450 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6 || y==5 ))
{

 }
else if(rect4.getGlobalBounds().left >490 && rect4.getGlobalBounds().left<550 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6))
{

 }
else if(rect4.getGlobalBounds().left >0 && rect4.getGlobalBounds().left<150 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6))
{

}
else
    {


  for (i=1; i<=y;i++)
{
                  if(rect4.getGlobalBounds().left>900 && dir4==1)
                 {

                 if(ev.type==Event::MouseButtonPressed)
                 {


                     rect4.move(0,-100);
                        dir4=-1;
                }
                 }




           else  if(rect4.getGlobalBounds().left<75 && dir4==-1)
               {
                   if(ev.type==Event::MouseButtonPressed)
                   {


                        rect4.move(0,-100);
                        dir4=1;
                 }
                }






            else
            {
                if(ev.type==Event::MouseButtonPressed)
                {
                rect4.move(dir4*101.5,0);
                }


            }
}

//for ladder at 3
if(rect4.getGlobalBounds().left>200 && rect4.getGlobalBounds().left<230 && rect4.getGlobalBounds().top<970 && rect4.getGlobalBounds().top>930)
                    {


                rect4.setPosition(Vector2f(710.5,900));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }
//for snake at 17
if(rect4.getGlobalBounds().left>300 && rect4.getGlobalBounds().left<350 && rect4.getGlobalBounds().top<870 && rect4.getGlobalBounds().top>830)
                    {


                rect4.setPosition(Vector2f(609,1000));
                 dir4=1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 21
 if(rect4.getGlobalBounds().left>0 && rect4.getGlobalBounds().left<50 && rect4.getGlobalBounds().top<770 && rect4.getGlobalBounds().top>730)
                    {


                rect4.setPosition(Vector2f(507.5,500));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }




//for snake at 26
if(rect4.getGlobalBounds().left>500 && rect4.getGlobalBounds().left<550 && rect4.getGlobalBounds().top<770 && rect4.getGlobalBounds().top>730)
                    {


                rect4.setPosition(Vector2f(913.5,900));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 43
if(rect4.getGlobalBounds().left>200 && rect4.getGlobalBounds().left<250 && rect4.getGlobalBounds().top<570 && rect4.getGlobalBounds().top>530)
                    {


                rect4.setPosition(Vector2f(101.5,700));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 41
if(rect4.getGlobalBounds().left>0 && rect4.getGlobalBounds().left<50 && rect4.getGlobalBounds().top<570 && rect4.getGlobalBounds().top>530)
                    {


                rect4.setPosition(Vector2f(406,300));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 47
if(rect4.getGlobalBounds().left>600 && rect4.getGlobalBounds().left<650 && rect4.getGlobalBounds().top<570 && rect4.getGlobalBounds().top>530)
                    {


                rect4.setPosition(Vector2f(609,400));
                 dir4=1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 50
if(rect4.getGlobalBounds().left>900 && rect4.getGlobalBounds().left<950 && rect4.getGlobalBounds().top<570 && rect4.getGlobalBounds().top>530)
                    {


                rect4.setPosition(Vector2f(812,300));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }
//for snake at 53
  if(rect4.getGlobalBounds().left>700 && rect4.getGlobalBounds().left<750 && rect4.getGlobalBounds().top<470 && rect4.getGlobalBounds().top>430)
                    {


                rect4.setPosition(Vector2f(1015,700));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 62
if(rect4.getGlobalBounds().left>100 && rect4.getGlobalBounds().left<150 && rect4.getGlobalBounds().top<370 && rect4.getGlobalBounds().top>330)
                    {


                rect4.setPosition(Vector2f(609,700));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 70
if(rect4.getGlobalBounds().left>900 && rect4.getGlobalBounds().left<950 && rect4.getGlobalBounds().top<370 && rect4.getGlobalBounds().top>330)
                    {


                rect4.setPosition(Vector2f(913.5,100));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 85
if(rect4.getGlobalBounds().left>400 && rect4.getGlobalBounds().left<450 && rect4.getGlobalBounds().top<170 && rect4.getGlobalBounds().top>130)
                    {


                rect4.setPosition(Vector2f(406,100));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 86
if(rect4.getGlobalBounds().left>500 && rect4.getGlobalBounds().left<550 && rect4.getGlobalBounds().top<170 && rect4.getGlobalBounds().top>130)
                    {


                rect4.setPosition(Vector2f(1015,300));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 99
if(rect4.getGlobalBounds().left>100 && rect4.getGlobalBounds().left<150 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0)
                    {


                rect4.setPosition(Vector2f(400,400));
                 dir4=1;
if (sounddec== 1){sound1.play();}
                    }
        }
if((rect4.getGlobalBounds().left>0 || rect4.getGlobalBounds().left==0) && rect4.getGlobalBounds().left<50 && rect4.getGlobalBounds().top>30 && rect4.getGlobalBounds().top<130)
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;
}

c=1;
if(y==6 || y==1)
    c=4;

if((rect4.getGlobalBounds().left>0 || rect4.getGlobalBounds().left==0)&& rect4.getGlobalBounds().left<50 && rect4.getGlobalBounds().top>930 && rect4.getGlobalBounds().top<970)
{
}
else if(rect4.getPosition().x==rect2.getPosition().x && rect4.getPosition().y==rect2.getPosition().y)
{
    rect2.setPosition(Vector2f(0,1000));
    dir2=1;
}

else if(rect4.getPosition().x==rect3.getPosition().x && rect4.getPosition().y==rect3.getPosition().y)
{
    rect3.setPosition(Vector2f(0,1000));
    dir3=1;
}

else if(rect1.getPosition().x==rect4.getPosition().x && rect1.getPosition().y==rect4.getPosition().y)
{
    rect1.setPosition(Vector2f(0,1000));
    dir1=1;
}
}
        }





        window.clear();


        window.draw(sprite);
        window.draw(rect1);
        window.draw(rect2);
        window.draw(rect3);
        window.draw(rect4);
        window.draw(dice);
        window.display();
    }
                   }


//for board 3
            if(eev.mouseButton.x>660&&eev.mouseButton.x<1000 &&eev.mouseButton.y>610 &&eev.mouseButton.y<730)
            {
 win.close();




    int dir1=1;
    int dir2=1;
    int dir3=1;
    int dir4=1;
    // for random function call
    int y;
    int i;


    RenderWindow window(VideoMode(1530, 1130), "Real Game!");
    // this is for token
    RectangleShape rect1(Vector2f(50,50));
    rect1.setFillColor(Color::Green);
    rect1.setOrigin(Vector2f(75,50));
    rect1.setPosition(Vector2f(0,1000));

    RectangleShape rect2(Vector2f(50,50));
    rect2.setFillColor(Color::Red);
    rect2.setOrigin(Vector2f(75,50));
    rect2.setPosition(Vector2f(0,1000));

    RectangleShape rect3(Vector2f(50,50));
    rect3.setFillColor(Color::Yellow);
    rect3.setOrigin(Vector2f(75,50));
    rect3.setPosition(Vector2f(0,1000));

    RectangleShape rect4(Vector2f(50,50));
    rect4.setFillColor(Color::Blue);
    rect4.setOrigin(Vector2f(75,50));
    rect4.setPosition(Vector2f(0,1000));




    //this is for dice
    RectangleShape dice(Vector2f(100,100));
    dice.setPosition(Vector2f(1200,500));
    Texture one1;
    one1.loadFromFile("1one.png");
    Texture two1;
    two1.loadFromFile("1two.png");
    Texture three1;
    three1.loadFromFile("1three.png");
    Texture four1;
    four1.loadFromFile("1four.png");
    Texture five1;
    five1.loadFromFile("1five.png");
    Texture six1;
    six1.loadFromFile("1six.png");

    Texture one2;
    one2.loadFromFile("2one.png");
    Texture two2;
    two2.loadFromFile("2two.png");
    Texture three2;
    three2.loadFromFile("2three.png");
    Texture four2;
    four2.loadFromFile("2four.png");
    Texture five2;
    five2.loadFromFile("2five.png");
    Texture six2;
    six2.loadFromFile("2six.png");


    Texture one3;
    one3.loadFromFile("3one.png");
    Texture two3;
    two3.loadFromFile("3two.png");
    Texture three3;
    three3.loadFromFile("3three.png");
    Texture four3;
    four3.loadFromFile("3four.png");
    Texture five3;
    five3.loadFromFile("3five.png");
    Texture six3;
    six3.loadFromFile("3six.png");

    Texture one4;
    one4.loadFromFile("4one.png");
    Texture two4;
    two4.loadFromFile("4two.png");
    Texture three4;
    three4.loadFromFile("4three.png");
    Texture four4;
    four4.loadFromFile("4four.png");
    Texture five4;
    five4.loadFromFile("4five.png");
    Texture six4;
    six4.loadFromFile("4six.png");

    //for audio
/*    SoundBuffer sbuffer;
    sbuffer.loadFromFile("start.wav");
    Sound sound(sbuffer);
    sound.setVolume(20);

    /*SoundBuffer mus;
    mus.loadFromFile("music.wav");
    Sound music(mus);
    music.setVolume(80);*/


    Texture texture;
    if(!texture.loadFromFile("size3.png"))
    {
        printf("error");

    }
    Sprite sprite(texture);
    Time deltaTime;
    Clock clock;



/*
    Texture two;
    one.loadFromFile("two.png");
    Vector2u textureSize2=two.getSize();
    float w2=static_cast<float>(textureSize2.x);
    float h2=static_cast<float>(textureSize2.y);
    RectangleShape two2(Vector2f(w2,h2));
    two2.setTexture(&two);

    Texture three;
    one.loadFromFile("three.png");
    Vector2u textureSize3=three.getSize();
    float w3=static_cast<float>(textureSize3.x);
    float h3=static_cast<float>(textureSize3.y);
    RectangleShape three3(Vector2f(w3,h3));
    three3.setTexture(&three);

    Texture four;
    one.loadFromFile("four.png");
    Vector2u textureSize4=four.getSize();
    float w4=static_cast<float>(textureSize4.x);
    float h4=static_cast<float>(textureSize4.y);
    RectangleShape four4(Vector2f(w4,h4));
    four4.setTexture(&four);

    Texture five;
    one.loadFromFile("five.png");
    Vector2u textureSize5=one.getSize();
    float w5=static_cast<float>(textureSize5.x);
    float h5=static_cast<float>(textureSize5.y);
    RectangleShape five5(Vector2f(w5,h5));
    five5.setTexture(&five);

    Texture six;
    one.loadFromFile("six.png");
    Vector2u textureSize6=one.getSize();
    float w6=static_cast<float>(textureSize6.x);
    float h6=static_cast<float>(textureSize6.y);
    RectangleShape six6(Vector2f(w6,h6));
    six6.setTexture(&six);


    Sprite o1(one);
    Sprite o2(two);
    Sprite o3(three);
    Sprite o4(four);
    Sprite o5(five);
    Sprite o6(six);

*/



    while (window.isOpen())
    {
        deltaTime=clock.restart();
        float deltaassec=deltaTime.asSeconds();
        Event ev;

        while(window.pollEvent(ev))

        {

            if (ev.key.code == Keyboard:: Escape)//to close using escape
                {
                window.close();


                }

        if(ev.type == Event::Closed)
        {
        window.close();
        }
        //music.play();

  if(ev.type==Event::MouseButtonPressed && c==1)
{

         if(ev.type==Event::MouseButtonPressed)
    {

            y=randomnumber();
            std::cout<<y<<std::endl;
            std::cout<<"a"<<std::endl;

    }

        if(y==1)
    {
        dice.setTexture(&one1);
         if (sounddec== 1){sound2.play();}

    }
        if(y==2)
    {
        dice.setTexture(&two1);
        if (sounddec== 1){sound2.play();}
    }

        if(y==3)
    {
        dice.setTexture(&three1);
        if (sounddec== 1){sound2.play();}
    }
        if(y==4)
    {
        dice.setTexture(&four1);
         if (sounddec== 1){sound2.play();}
    }
        if(y==5)
    {
        dice.setTexture(&five1);
        if (sounddec== 1){sound2.play();}

    }

        if(y==6)
    {
        dice.setTexture(&six1);
         if (sounddec== 1){sound2.play();}
    }


if(rect1.getPosition().x==0 && rect1.getPosition().y==1000)
    {
        if(y==1)
            rect1.setPosition(101.5, 1000);
    }
else if(rect1.getGlobalBounds().left >190 && rect1.getGlobalBounds().left<250 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 || y==3))
{

 }
else if(rect1.getGlobalBounds().left >290 && rect1.getGlobalBounds().left<350 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 ))
{

 }
else if(rect1.getGlobalBounds().left >390 && rect1.getGlobalBounds().left<450 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6 || y==5 ))
{

 }
else if(rect1.getGlobalBounds().left >490 && rect1.getGlobalBounds().left<550 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6))
{

 }
else if(rect1.getGlobalBounds().left >0 && rect1.getGlobalBounds().left<150 && rect1.getGlobalBounds().top<70 && rect1.getGlobalBounds().top>0 && (y==6))
{
    Texture gif;
    if(!texture.loadFromFile("gameover.gif"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;

 }
else
    {


  for (i=1; i<=y;i++)
{
                  if(rect1.getGlobalBounds().left>900 && dir1==1)
                 {

                 if(ev.type==Event::MouseButtonPressed)
                 {


                     rect1.move(0,-100);
                        dir1=-1;
                }
                 }




           else  if(rect1.getGlobalBounds().left<75 && dir1==-1)
               {
                   if(ev.type==Event::MouseButtonPressed)
                   {


                        rect1.move(0,-100);
                        dir1=1;
                 }
                }

            else
            {
                if(ev.type==Event::MouseButtonPressed)
                {
                rect1.move(dir1*101.5,0);

                }


            }
}

//for ladder at 17
if(rect1.getGlobalBounds().left>400 && rect1.getGlobalBounds().left<450 && rect1.getGlobalBounds().top<870 && rect1.getGlobalBounds().top>830)
                    {


                rect1.setPosition(Vector2f(609,700));
                 dir1=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 36
if(rect1.getGlobalBounds().left>430 && rect1.getGlobalBounds().left<480 && rect1.getGlobalBounds().top<670 && rect1.getGlobalBounds().top>630)
                    {


                rect1.setPosition(Vector2f(1015,900));
                 dir1=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 44
if(rect1.getGlobalBounds().left>330 && rect1.getGlobalBounds().left<380 && rect1.getGlobalBounds().top<570 && rect1.getGlobalBounds().top>530)
                    {


                rect1.setPosition(Vector2f(101.5,900));
                 dir1=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 85
if(rect1.getGlobalBounds().left>430 && rect1.getGlobalBounds().left<480 && rect1.getGlobalBounds().top<200 && rect1.getGlobalBounds().top>100)
                    {


                rect1.setPosition(Vector2f(1015,500));
                 dir1=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 92
if(rect1.getGlobalBounds().left>800 && rect1.getGlobalBounds().left<900 && rect1.getGlobalBounds().top<100 && rect1.getGlobalBounds().top>00)
                    {


                rect1.setPosition(Vector2f(913.5,200));
                 dir1=1;
                 if (sounddec== 1){sound1.play();}
                    }

//for snake at 97
if(rect1.getGlobalBounds().left>300 && rect1.getGlobalBounds().left<400 && rect1.getGlobalBounds().top<100 && rect1.getGlobalBounds().top>00)
                    {


                rect1.setPosition(Vector2f(507.5,600));
                 dir1=1;
                 if (sounddec== 1){sound1.play();}
                    }
//for ladder at 21
if(rect1.getGlobalBounds().left>0 && rect1.getGlobalBounds().left<100 && rect1.getGlobalBounds().top<800 && rect1.getGlobalBounds().top>700)
                    {


                rect1.setPosition(Vector2f(203,500));
                 dir1=-1;
 if (sounddec== 1){sound.play();}
                    }
//for ladder at 28
if(rect1.getGlobalBounds().left>700 && rect1.getGlobalBounds().left<800 && rect1.getGlobalBounds().top<800 && rect1.getGlobalBounds().top>700)
                    {


                rect1.setPosition(Vector2f(812,500));
                 dir1=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 56
if(rect1.getGlobalBounds().left>400 && rect1.getGlobalBounds().left<500 && rect1.getGlobalBounds().top<500 && rect1.getGlobalBounds().top>400)
                    {


                rect1.setPosition(Vector2f(406,200));
                 dir1=1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 73
if(rect1.getGlobalBounds().left>700 && rect1.getGlobalBounds().left<800 && rect1.getGlobalBounds().top<300 && rect1.getGlobalBounds().top>200)
                    {


                rect1.setPosition(Vector2f(710.5,100));
                 dir1=-1;
 if (sounddec== 1){sound.play();}
                    }


        }
if((rect1.getGlobalBounds().left>0 || rect1.getGlobalBounds().left==0) && rect1.getGlobalBounds().left<50 && rect1.getGlobalBounds().top>30 && rect1.getGlobalBounds().top<130)
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;
}


c=2;
if(y==6 || y==1)
    c=1;


if((rect1.getGlobalBounds().left>0 || rect1.getGlobalBounds().left==0) && rect1.getGlobalBounds().left<50 && rect1.getGlobalBounds().top>930 && rect1.getGlobalBounds().top<970)
{
}
else if(rect1.getPosition().x==rect2.getPosition().x && rect1.getPosition().y==rect2.getPosition().y)
{
    rect2.setPosition(Vector2f(0,1000));
    dir2=1;
}

else if(rect1.getPosition().x==rect3.getPosition().x && rect1.getPosition().y==rect3.getPosition().y)
{
    rect3.setPosition(Vector2f(0,1000));
    dir3=1;
}

else if(rect1.getPosition().x==rect4.getPosition().x && rect1.getPosition().y==rect4.getPosition().y)
{
    rect4.setPosition(Vector2f(0,1000));
    dir4=1;
}


}

else if(ev.type==Event::MouseButtonPressed && c==2)
{
       if(ev.type==Event::MouseButtonPressed)
    {

            y=randomnumber();
            std::cout<<y<<std::endl;
            std::cout<<"a"<<std::endl;

    }

         if(y==1)
    {
        dice.setTexture(&one2);
         if (sounddec== 1){sound2.play();}
    }
        if(y==2)
    {
        dice.setTexture(&two2);
         if (sounddec== 1){sound2.play();}
    }

        if(y==3)
    {
        dice.setTexture(&three2);
        if (sounddec== 1){sound2.play();}
    }
        if(y==4)
    {
        dice.setTexture(&four2);
        if (sounddec== 1){sound2.play();}
    }
        if(y==5)
    {
        dice.setTexture(&five2);
        if (sounddec== 1){sound2.play();}
    }

        if(y==6)
    {
        dice.setTexture(&six2);
        if (sounddec== 1){sound2.play();}
    }

if(rect2.getPosition().x==0 && rect2.getPosition().y==1000)
    {
        if(y==1)
            rect2.setPosition(101.5, 1000);
    }
else if(rect2.getGlobalBounds().left >190 && rect2.getGlobalBounds().left<250 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 || y==3))
{

 }
else if(rect2.getGlobalBounds().left >290 && rect2.getGlobalBounds().left<350 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 ))
{

 }
else if(rect2.getGlobalBounds().left >390 && rect2.getGlobalBounds().left<450 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6 || y==5 ))
{

 }
else if(rect2.getGlobalBounds().left >490 && rect2.getGlobalBounds().left<550 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6))
{

 }
else if(rect2.getGlobalBounds().left >0 && rect2.getGlobalBounds().left<150 && rect2.getGlobalBounds().top<70 && rect2.getGlobalBounds().top>0 && (y==6))
{

}
else
    {


  for (i=1; i<=y;i++)
{
                  if(rect2.getGlobalBounds().left>900 && dir2==1)
                 {

                 if(ev.type==Event::MouseButtonPressed)
                 {


                     rect2.move(0,-100);
                        dir2=-1;
                }
                 }




           else  if(rect2.getGlobalBounds().left<75 && dir2==-1)
               {
                   if(ev.type==Event::MouseButtonPressed)
                   {


                        rect2.move(0,-100);
                        dir2=1;
                 }
                }






            else
            {
                if(ev.type==Event::MouseButtonPressed)
                {
                rect2.move(dir2*101.5,0);
                }


            }
}


//for ladder at 17
if(rect2.getGlobalBounds().left>400 && rect2.getGlobalBounds().left<450 && rect2.getGlobalBounds().top<870 && rect2.getGlobalBounds().top>830)
                    {


                rect2.setPosition(Vector2f(609,700));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 36
if(rect2.getGlobalBounds().left>430 && rect2.getGlobalBounds().left<480 && rect2.getGlobalBounds().top<670 && rect2.getGlobalBounds().top>630)
                    {


                rect2.setPosition(Vector2f(1015,900));
                 dir2=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 44
if(rect2.getGlobalBounds().left>330 && rect2.getGlobalBounds().left<380 && rect2.getGlobalBounds().top<570 && rect2.getGlobalBounds().top>530)
                    {


                rect2.setPosition(Vector2f(101.5,900));
                 dir2=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 85
if(rect2.getGlobalBounds().left>430 && rect2.getGlobalBounds().left<480 && rect2.getGlobalBounds().top<200 && rect2.getGlobalBounds().top>100)
                    {


                rect2.setPosition(Vector2f(1015,500));
                 dir2=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 92
if(rect2.getGlobalBounds().left>800 && rect2.getGlobalBounds().left<900 && rect2.getGlobalBounds().top<100 && rect2.getGlobalBounds().top>00)
                    {


                rect2.setPosition(Vector2f(913.5,200));
                 dir2=1;
                 if (sounddec== 1){sound1.play();}
                    }

//for snake at 97
if(rect2.getGlobalBounds().left>300 && rect2.getGlobalBounds().left<400 && rect2.getGlobalBounds().top<100 && rect2.getGlobalBounds().top>00)
                    {


                rect2.setPosition(Vector2f(507.5,600));
                 dir2=1;
                 if (sounddec== 1){sound1.play();}
                    }
//for ladder at 21
if(rect2.getGlobalBounds().left>0 && rect2.getGlobalBounds().left<100 && rect2.getGlobalBounds().top<800 && rect2.getGlobalBounds().top>700)
                    {


                rect2.setPosition(Vector2f(203,500));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }
//for ladder at 28
if(rect2.getGlobalBounds().left>700 && rect2.getGlobalBounds().left<800 && rect2.getGlobalBounds().top<800 && rect2.getGlobalBounds().top>700)
                    {


                rect2.setPosition(Vector2f(812,500));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 56
if(rect2.getGlobalBounds().left>400 && rect2.getGlobalBounds().left<500 && rect2.getGlobalBounds().top<500 && rect2.getGlobalBounds().top>400)
                    {


                rect2.setPosition(Vector2f(406,200));
                 dir2=1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 73
if(rect2.getGlobalBounds().left>700 && rect2.getGlobalBounds().left<800 && rect2.getGlobalBounds().top<300 && rect2.getGlobalBounds().top>200)
                    {


                rect2.setPosition(Vector2f(710.5,100));
                 dir2=-1;
 if (sounddec== 1){sound.play();}
                    }

        }

if((rect2.getGlobalBounds().left>0 || rect2.getGlobalBounds().left==0) && rect2.getGlobalBounds().left<50 && rect2.getGlobalBounds().top>30 && rect2.getGlobalBounds().top<130)
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;
}

if(player==2)
{
    c=1;
}
else
{
    c=3;
}
if(y==6 || y==1)
    c=2;

if((rect2.getGlobalBounds().left>0 || rect2.getGlobalBounds().left==0) && rect2.getGlobalBounds().left<50 && rect2.getGlobalBounds().top>930 && rect2.getGlobalBounds().top<970)
{
}
else if(rect1.getPosition().x==rect2.getPosition().x && rect1.getPosition().y==rect2.getPosition().y)
{
    rect1.setPosition(Vector2f(0,1000));
    dir1=1;
}

else if(rect3.getPosition().x==rect2.getPosition().x && rect3.getPosition().y==rect2.getPosition().y)
{
    rect3.setPosition(Vector2f(0,1000));
    dir3=1;
}

else if(rect2.getPosition().x==rect4.getPosition().x && rect4.getPosition().y==rect2.getPosition().y)
{
    rect4.setPosition(Vector2f(0,1000));
    dir4=1;
}

}

   else if(ev.type==Event::MouseButtonPressed && c==3)
    {
        if(ev.type==Event::MouseButtonPressed)
    {

            y=randomnumber();
            std::cout<<y<<std::endl;
            std::cout<<"a"<<std::endl;
          /*  if (y==1)
                {
    Texture one11;
    if(!texture.loadFromFile("one.png"))
    {
        printf("error");

    }
    Sprite one1(one11);
    one1.setPosition(1200,500);

    window.draw(one1);
    window.clear();
    break;
            //sound.play();
    }*/
    }

         if(y==1)
    {
        dice.setTexture(&one3);
        if (sounddec== 1){sound2.play();}

    }
        if(y==2)
    {
        dice.setTexture(&two3);
         if (sounddec== 1){sound2.play();}
    }

        if(y==3)
    {
        dice.setTexture(&three3);
         if (sounddec== 1){sound2.play();}
    }
        if(y==4)
    {
        dice.setTexture(&four3);
        if (sounddec== 1){sound2.play();}
    }
        if(y==5)
    {
        dice.setTexture(&five3);
        if (sounddec== 1){sound2.play();}
    }

        if(y==6)
    {
        dice.setTexture(&six3);
        if (sounddec== 1){sound2.play();}
    }

if(rect3.getPosition().x==0 && rect3.getPosition().y==1000)
    {
        if(y==1)
            rect3.setPosition(101.5, 1000);
    }
else if(rect3.getGlobalBounds().left >190 && rect3.getGlobalBounds().left<250 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 || y==3))
{

 }
else if(rect3.getGlobalBounds().left >290 && rect3.getGlobalBounds().left<350 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 ))
{

 }
else if(rect3.getGlobalBounds().left >390 && rect3.getGlobalBounds().left<450 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6 || y==5 ))
{

 }
else if(rect3.getGlobalBounds().left >490 && rect3.getGlobalBounds().left<550 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6))
{

 }
else if(rect3.getGlobalBounds().left >0 && rect3.getGlobalBounds().left<150 && rect3.getGlobalBounds().top<70 && rect3.getGlobalBounds().top>0 && (y==6))
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;

 }
else
    {


  for (i=1; i<=y;i++)
{
                  if(rect3.getGlobalBounds().left>900 && dir3==1)
                 {

                 if(ev.type==Event::MouseButtonPressed)
                 {


                     rect3.move(0,-100);
                        dir3=-1;
                }
                 }




           else  if(rect3.getGlobalBounds().left<75 && dir3==-1)
               {
                   if(ev.type==Event::MouseButtonPressed)
                   {


                        rect3.move(0,-100);
                        dir3=1;
                 }
                }

            else
            {
                if(ev.type==Event::MouseButtonPressed)
                {
                rect3.move(dir3*101.5,0);
                }


            }
}


//for ladder at 17
if(rect3.getGlobalBounds().left>400 && rect3.getGlobalBounds().left<450 && rect3.getGlobalBounds().top<870 && rect3.getGlobalBounds().top>830)
                    {


                rect3.setPosition(Vector2f(609,700));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 36
if(rect3.getGlobalBounds().left>430 && rect3.getGlobalBounds().left<480 && rect3.getGlobalBounds().top<670 && rect3.getGlobalBounds().top>630)
                    {


                rect3.setPosition(Vector2f(1015,900));
                 dir3=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 44
if(rect3.getGlobalBounds().left>330 && rect3.getGlobalBounds().left<380 && rect3.getGlobalBounds().top<570 && rect3.getGlobalBounds().top>530)
                    {


                rect3.setPosition(Vector2f(101.5,900));
                 dir3=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 85
if(rect3.getGlobalBounds().left>430 && rect3.getGlobalBounds().left<480 && rect3.getGlobalBounds().top<200 && rect3.getGlobalBounds().top>100)
                    {


                rect3.setPosition(Vector2f(1015,500));
                 dir3=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 92
if(rect3.getGlobalBounds().left>800 && rect3.getGlobalBounds().left<900 && rect3.getGlobalBounds().top<100 && rect3.getGlobalBounds().top>00)
                    {


                rect3.setPosition(Vector2f(913.5,200));
                 dir3=1;
                 if (sounddec== 1){sound1.play();}
                    }

//for snake at 97
if(rect3.getGlobalBounds().left>300 && rect3.getGlobalBounds().left<400 && rect3.getGlobalBounds().top<100 && rect3.getGlobalBounds().top>00)
                    {


                rect3.setPosition(Vector2f(507.5,600));
                 dir3=1;
                 if (sounddec== 1){sound1.play();}
                    }
//for ladder at 21
if(rect3.getGlobalBounds().left>0 && rect3.getGlobalBounds().left<100 && rect3.getGlobalBounds().top<800 && rect3.getGlobalBounds().top>700)
                    {


                rect3.setPosition(Vector2f(203,500));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }
//for ladder at 28
if(rect3.getGlobalBounds().left>700 && rect3.getGlobalBounds().left<800 && rect3.getGlobalBounds().top<800 && rect3.getGlobalBounds().top>700)
                    {


                rect3.setPosition(Vector2f(812,500));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 56
if(rect3.getGlobalBounds().left>400 && rect3.getGlobalBounds().left<500 && rect3.getGlobalBounds().top<500 && rect3.getGlobalBounds().top>400)
                    {


                rect3.setPosition(Vector2f(406,200));
                 dir3=1;
 if (sounddec== 1){sound.play();}
                    }

//for ladder at 73
if(rect3.getGlobalBounds().left>700 && rect3.getGlobalBounds().left<800 && rect3.getGlobalBounds().top<300 && rect3.getGlobalBounds().top>200)
                    {


                rect3.setPosition(Vector2f(710.5,100));
                 dir3=-1;
 if (sounddec== 1){sound.play();}
                    }

        }
if((rect3.getGlobalBounds().left>0 || rect3.getGlobalBounds().left==0) && rect3.getGlobalBounds().left<50 && rect3.getGlobalBounds().top>30 && rect3.getGlobalBounds().top<130)
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;
}

if(player==3)
{
    c=1;
}
else
{
    c=4;
}
if(y==6 || y==1)
    c=3;

if((rect3.getGlobalBounds().left>0 || rect3.getGlobalBounds().left==0) && rect3.getGlobalBounds().left<50 && rect3.getGlobalBounds().top>930 && rect3.getGlobalBounds().top<970)
{
}
else if(rect3.getPosition().x==rect2.getPosition().x && rect3.getPosition().y==rect2.getPosition().y)
{
    rect2.setPosition(Vector2f(0,1000));
    dir2=1;
}

else if(rect1.getPosition().x==rect3.getPosition().x && rect1.getPosition().y==rect3.getPosition().y)
{
    rect1.setPosition(Vector2f(0,1000));
    dir1=1;
}

else if(rect3.getPosition().x==rect4.getPosition().x && rect3.getPosition().y==rect4.getPosition().y)
{
    rect4.setPosition(Vector2f(0,1000));
    dir4=1;
}

}

else if(ev.type==Event::MouseButtonPressed && c==4)
{

    if(ev.type==Event::MouseButtonPressed)
    {

            y=randomnumber();
            std::cout<<y<<std::endl;
            std::cout<<"a"<<std::endl;

    }

         if(y==1)
    {
        dice.setTexture(&one4);

    }
        if(y==2)
    {
        dice.setTexture(&two4);

    }

        if(y==3)
    {
        dice.setTexture(&three4);

    }
        if(y==4)
    {
        dice.setTexture(&four4);

    }
        if(y==5)
    {
        dice.setTexture(&five4);

    }

        if(y==6)
    {
        dice.setTexture(&six4);

    }
if(rect4.getPosition().x==0 && rect4.getPosition().y==1000)
    {
        if(y==1)
            rect4.setPosition(101.5, 1000);
    }
else if(rect4.getGlobalBounds().left >190 && rect4.getGlobalBounds().left<250 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 || y==3))
{

 }
else if(rect4.getGlobalBounds().left >290 && rect4.getGlobalBounds().left<350 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6 || y==5 || y==4 ))
{

 }
else if(rect4.getGlobalBounds().left >390 && rect4.getGlobalBounds().left<450 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6 || y==5 ))
{

 }
else if(rect4.getGlobalBounds().left >490 && rect4.getGlobalBounds().left<550 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6))
{

 }
else if(rect4.getGlobalBounds().left >0 && rect4.getGlobalBounds().left<150 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0 && (y==6))
{

}
else
    {


  for (i=1; i<=y;i++)
{
                  if(rect4.getGlobalBounds().left>900 && dir4==1)
                 {

                 if(ev.type==Event::MouseButtonPressed)
                 {


                     rect4.move(0,-100);
                        dir4=-1;
                }
                 }




           else  if(rect4.getGlobalBounds().left<75 && dir4==-1)
               {
                   if(ev.type==Event::MouseButtonPressed)
                   {


                        rect4.move(0,-100);
                        dir4=1;
                 }
                }






            else
            {
                if(ev.type==Event::MouseButtonPressed)
                {
                rect4.move(dir4*101.5,0);
                }


            }
}

//for ladder at 3
if(rect4.getGlobalBounds().left>200 && rect4.getGlobalBounds().left<230 && rect4.getGlobalBounds().top<970 && rect4.getGlobalBounds().top>930)
                    {


                rect4.setPosition(Vector2f(710.5,900));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }
//for snake at 17
if(rect4.getGlobalBounds().left>300 && rect4.getGlobalBounds().left<350 && rect4.getGlobalBounds().top<870 && rect4.getGlobalBounds().top>830)
                    {


                rect4.setPosition(Vector2f(609,1000));
                 dir4=1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 21
 if(rect4.getGlobalBounds().left>0 && rect4.getGlobalBounds().left<50 && rect4.getGlobalBounds().top<770 && rect4.getGlobalBounds().top>730)
                    {


                rect4.setPosition(Vector2f(507.5,500));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }




//for snake at 26
if(rect4.getGlobalBounds().left>500 && rect4.getGlobalBounds().left<550 && rect4.getGlobalBounds().top<770 && rect4.getGlobalBounds().top>730)
                    {


                rect4.setPosition(Vector2f(913.5,900));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 43
if(rect4.getGlobalBounds().left>200 && rect4.getGlobalBounds().left<250 && rect4.getGlobalBounds().top<570 && rect4.getGlobalBounds().top>530)
                    {


                rect4.setPosition(Vector2f(101.5,700));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 41
if(rect4.getGlobalBounds().left>0 && rect4.getGlobalBounds().left<50 && rect4.getGlobalBounds().top<570 && rect4.getGlobalBounds().top>530)
                    {


                rect4.setPosition(Vector2f(406,300));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 47
if(rect4.getGlobalBounds().left>600 && rect4.getGlobalBounds().left<650 && rect4.getGlobalBounds().top<570 && rect4.getGlobalBounds().top>530)
                    {


                rect4.setPosition(Vector2f(609,400));
                 dir4=1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 50
if(rect4.getGlobalBounds().left>900 && rect4.getGlobalBounds().left<950 && rect4.getGlobalBounds().top<570 && rect4.getGlobalBounds().top>530)
                    {


                rect4.setPosition(Vector2f(812,300));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }
//for snake at 53
  if(rect4.getGlobalBounds().left>700 && rect4.getGlobalBounds().left<750 && rect4.getGlobalBounds().top<470 && rect4.getGlobalBounds().top>430)
                    {


                rect4.setPosition(Vector2f(1015,700));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }


//for snake at 62
if(rect4.getGlobalBounds().left>100 && rect4.getGlobalBounds().left<150 && rect4.getGlobalBounds().top<370 && rect4.getGlobalBounds().top>330)
                    {


                rect4.setPosition(Vector2f(609,700));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }


//for ladder at 70
if(rect4.getGlobalBounds().left>900 && rect4.getGlobalBounds().left<950 && rect4.getGlobalBounds().top<370 && rect4.getGlobalBounds().top>330)
                    {


                rect4.setPosition(Vector2f(913.5,100));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }


//for ladder at 85
if(rect4.getGlobalBounds().left>400 && rect4.getGlobalBounds().left<450 && rect4.getGlobalBounds().top<170 && rect4.getGlobalBounds().top>130)
                    {


                rect4.setPosition(Vector2f(406,100));
                 dir4=-1;
 if (sounddec== 1){sound.play();}
                    }

//for snake at 86
if(rect4.getGlobalBounds().left>500 && rect4.getGlobalBounds().left<550 && rect4.getGlobalBounds().top<170 && rect4.getGlobalBounds().top>130)
                    {


                rect4.setPosition(Vector2f(1015,300));
                 dir4=-1;
if (sounddec== 1){sound1.play();}
                    }

//for snake at 99
if(rect4.getGlobalBounds().left>100 && rect4.getGlobalBounds().left<150 && rect4.getGlobalBounds().top<70 && rect4.getGlobalBounds().top>0)
                    {


                rect4.setPosition(Vector2f(400,400));
                 dir4=1;
if (sounddec== 1){sound1.play();}
                    }
        }
if((rect4.getGlobalBounds().left>0 || rect4.getGlobalBounds().left==0) && rect4.getGlobalBounds().left<50 && rect4.getGlobalBounds().top>30 && rect4.getGlobalBounds().top<130)
{
    Texture gif;
    if(!texture.loadFromFile("win.png"))
    {
        printf("error");

    }
    Sprite gif1(gif);
    gif1.setPosition(50,50);

    window.draw(gif1);
    window.clear();
    break;
}

c=1;
if(y==6 || y==1)
    c=4;

if((rect4.getGlobalBounds().left>0 || rect4.getGlobalBounds().left==0)&& rect4.getGlobalBounds().left<50 && rect4.getGlobalBounds().top>930 && rect4.getGlobalBounds().top<970)
{
}
else if(rect4.getPosition().x==rect2.getPosition().x && rect4.getPosition().y==rect2.getPosition().y)
{
    rect2.setPosition(Vector2f(0,1000));
    dir2=1;
}

else if(rect4.getPosition().x==rect3.getPosition().x && rect4.getPosition().y==rect3.getPosition().y)
{
    rect3.setPosition(Vector2f(0,1000));
    dir3=1;
}

else if(rect1.getPosition().x==rect4.getPosition().x && rect1.getPosition().y==rect4.getPosition().y)
{
    rect1.setPosition(Vector2f(0,1000));
    dir1=1;
}
}
        }





        window.clear();


        window.draw(sprite);
        window.draw(rect1);
        window.draw(rect2);
        window.draw(rect3);
        window.draw(rect4);
        window.draw(dice);
        window.display();
    }
                   }


        }
    }


    return 0;
}



int randomnumber()
{
    int x;
srand(time(NULL));
x=rand()%6+1;

return x;

}
