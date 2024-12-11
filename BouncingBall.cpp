# ifndef RK_GRAPHICS_PROJECT_3
    # include "BouncingBall.hpp"
    /**
     * @brief Bouncing Ball Default Constructor
     */
    RKBouncingBall::RKBouncingBall() {
    }
    /**
     * @brief Bouncing Ball Parameterized Constructor
     */
    RKBouncingBall::RKBouncingBall(RKBouncingBallType type) {
        //-- Show Log Message
        logger(RKG_LABEL INFO "Starting Bouncing Ball ...");
        //-- Set OpenGL Ortho
        glOrtho(
            0,RK_BOUCING_BALL_WINDOW_WIDTH,
            0, RK_BOUCING_BALL_WINDOW_HEIGHT,
            -1000.0, 1000.0
        );
        glFrustum(-100, 100, 0, 0, -20, 50);
        //-- Handle Screen Saver Type
        switch (type) {
            //-- Test Bouncing Ball
            case RK_BOUNCING_BALL_TEST: {
                synshape::Sphere sphere;
                RKGPoint c;
                c.x = RK_BOUCING_BALL_WINDOW_WIDTH / 2;
                c.y = RK_BOUCING_BALL_WINDOW_HEIGHT / 2;
                while (true) {
                    //-- Clear the Window
                    window.clear(0, 10, 18, 255);

                    sphere.drawSphere(c, 200, 16, 16);
                    //-- Update the Window
                    window.update();
                    //-- Sleep
                    std::this_thread::sleep_for(std::chrono::milliseconds(20));
                }
                break;
            };
            //-- Bouncing Ball with Gravity
            case RK_BOUNCING_BALL_GRAVITY: {
                break;
            };
            //-- Bouncing Ball with Impact
            case RK_BOUNCING_BALL_IMPACT: {
                break;
            };
            //-- Bouncing Ball with Faster Smaller Impact
            case RK_BOUNCING_BALL_FASTER_SMALLER_IMPACT: {
                break;
            };
        }
    }
# endif // RK_GRAPHICS_PROJECT_3