#include <kipr/wombat.h>

int main()
{
    set_servo_position(1, 80);
    enable_servos();
    msleep(400);
    set_servo_position(0, 1680);
    msleep(400);
    motor(0, 80);
    motor(2, 80);
    msleep(4500);
    motor(0, -70);
    motor(2, 70);
    msleep(300);
    motor(0, -76);
    motor(2, -80);
    msleep(1500);
    motor(0, -70);
    motor(2, 70);
    msleep(690);
    motor(0, -76);
    motor(2, -80);
    msleep(1930);
    motor(0, 0);
    motor(2,0);
    int Length = 16000;
    cmpc(0);
    
    
    while (Length > gmpc(0))
    {
            
        if (analog(1) > 4078)
		{
			motor(0, 86);
			motor(2, 90);
		}
        else
        {
        	motor(0, 90);
       	 	motor(2, 30);
    	}
     
	}
    while (Length <= gmpc(0))
    {
		motor(0, 0);
        motor(2, 0);
        set_servo_position(0, 1400);
        enable_servos();
        set_servo_position(0, 990);
       	enable_servos();
       	msleep(400);
       	motor(0, 90);
        motor(2, 90);
        msleep(250);
        motor(0, 0);
        motor(2, 0);
        msleep(200);
        set_servo_position(0, 1680);
        enable_servos();
        msleep(400);
        set_servo_position(0, 936);
        msleep(1000);
        set_servo_position(1, 2047);
        enable_servos();
        msleep(750);
        set_servo_position(0, 1486);
        msleep(400);
        motor(0, -75);
        motor(2, -75);
        msleep(13000);
        motor(0, -80);
        motor(2, 80);
        msleep(1500);

    }
   
   	
    
    disable_servos();
    return 0;
        
    
}

        
   
