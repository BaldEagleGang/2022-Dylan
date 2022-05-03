#include <kipr/wombat.h>

int main()
{
    int Length = 16000;
    cmpc(0);
    set_servo_position(1, 1974);
    enable_servos();
    msleep(1700);
    set_servo_position(0, 1725);
    enable_servos();
    msleep(750);
    
    while (Length > gmpc(0))
    {
            
        if (analog(1) > 4070)
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
        set_servo_position(0, 1725);
        enable_servos();
        msleep(400);
        set_servo_position(0, 990);
        msleep(1000);
        set_servo_position(1, 0);
        enable_servos();
        msleep(750);

    }
   
   	
    
    disable_servos();
    return 0;
        
    
}
        
   
