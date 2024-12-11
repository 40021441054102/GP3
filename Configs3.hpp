# ifndef RK_GRAPHICS_PROJECT_3_CONFIGS
    /**
     * @file Configs3.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief Configuration File for Bouncing Ball
     * @def RK_GRAPHICS_PROJECT_3_CONFIGS
     * @date 2024-11-13
     */
    # define RK_GRAPHICS_PROJECT_3_CONFIGS
    //-- Behave According to Android or Linux
    # ifdef __ANDROID__
        /**
         * @brief Bouncing Ball Window Width
         * @def RK_BOUCING_BALL_WINDOW_WIDTH
         */
        # define RK_BOUCING_BALL_WINDOW_WIDTH 1080
        /**
         * @brief Bouncing Ball Window Height
         * @def RK_BOUCING_BALL_WINDOW_HEIGHT
         */
        # define RK_BOUCING_BALL_WINDOW_HEIGHT 2400
    # else
        /**
         * @brief Bouncing Ball Window Width
         * @def RK_BOUCING_BALL_WINDOW_WIDTH
         */
        # define RK_BOUCING_BALL_WINDOW_WIDTH 2200
        /**
         * @brief Bouncing Ball Window Height
         * @def RK_BOUCING_BALL_WINDOW_HEIGHT
         */
        # define RK_BOUCING_BALL_WINDOW_HEIGHT 1440
    # endif // __ANDROID__
# endif // RK_GRAPHICS_PROJECT_3_CONFIGS