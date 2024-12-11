// # ifndef RK_GRAPHICS_PROJECT_3
//     /**
//      * @file BouncingBall.hpp
//      * @author Ramtin Kosari (ramtinkosari@gmail.com)
//      * @brief Ramtin Kosari's Bouncing Ball - Term 7 Graphics Project 3
//      * @def RK_GRAPHICS_PROJECT_BOUNCING_BALL
//      * @date 2024-11-13
//      */
//     # define RK_GRAPHICS_PROJECT_3
//     /**
//      * @brief Ramtin Kosari's Bouncing Ball
//      * @def RK_GRAPHICS_PROJECT_BOUNCING_BALL
//      * @note This is Part of Term 7 Graphics Project 3
//      */
//     # define RK_GRAPHICS_PROJECT_BOUNCING_BALL
//     //-- Check if Project is being Compiled by RKACPB
//     # ifndef RKACPB
//         //-- Check if Configuration File is Configured
//         # ifndef HAS_RKACPB_MODULE_CONFIGS
//             # error "Configuration File is Required for RK Graphics Project 3"
//         # endif // RK_GRAPHICS_PROJECT_3_CONFIGS
//         //-- Check if RKLogger is Configured
//         # ifndef HAS_RKACPB_MODULE_RKLOGGER
//             # error "RKLogger is Required for RK Graphics Project 3"
//         # endif // HAS_RKACPB_MODULE_RKLOGGER
//         //-- Check if RKOGLT is Configured
//         # ifndef HAS_RKACPB_MODULE_RKOGLT
//             # error "RKOGLT is Required for RK Graphics Project 3"
//         # endif // HAS_RKACPB_MODULE_RKOGLT
//         //-- Check if Window is Configured
//         # ifndef HAS_RKACPB_MODULE_WINDOW
//             # error "Window is Required for RK Graphics Project 1"
//         # endif // HAS_RKACPB_MODULE_WINDOW
//         //-- Check if Shapes File is Configured
//         # ifndef HAS_RKACPB_MODULE_SHAPES
//             # error "Configuration File is Required for RK Graphics Project 3"
//         # endif // HAS_RKACPB_MODULE_SHAPES
//     # endif // RKACPB
//     //-- Include Configuration File
//     # ifndef RK_GRAPHICS_PROJECT_3_CONFIGS
//         # include "Configs3.hpp"
//     # endif // RK_GRAPHICS_PROJECT_3_CONFIGS
//     //-- Include RKLogger
//     # ifndef RKLOGGER
//         # include "RKLogger.hpp"
//     # endif // RKLOGGER
//     //-- Include RKOGLT
//     # ifndef RKOGLT
//         # include "RKOGLT.hpp"
//     # endif // RKOGLT
//     //-- Include Window
//     # ifndef SYNESTIA_GRAPHICS_WINDOW
//         # include "Window.hpp"
//     # endif // SYNESTIA_GRAPHICS_WINDOW
//     //-- Include Shapes File
//     # ifndef SYNESTIA_GRAPHICS_SHAPES
//         # include "Shapes.hpp"
//     # endif // SYNESTIA_GRAPHICS_SHAPES
//     //-- Include Thread
//     # ifndef _GLIBCXX_THREAD
//         # include <thread>
//     # endif // _GLIBCXX_THREAD
//     /**
//      * @brief Bouncing Ball Types
//      * @enum RKBouncingBallType
//      * @note This Enum Defines Different Types of Bouncing Balls
//      * @param RK_BOUNCING_BALL_TEST Test Bouncing Ball
//      * @param RK_BOUNCING_BALL_GRAVITY Bouncing Ball with Gravity
//      * @param RK_BOUNCING_BALL_IMPACT Bouncing Ball with Impact
//      * @param RK_BOUNCING_BALL_FASTER_SMALLER_IMPACT Bouncing Ball with Faster Smaller Impact
//      */
//     enum RKBouncingBallType {
//         RK_BOUNCING_BALL_TEST,
//         RK_BOUNCING_BALL_GRAVITY,
//         RK_BOUNCING_BALL_IMPACT,
//         RK_BOUNCING_BALL_FASTER_SMALLER_IMPACT
//     };
//     /**
//      * @brief Class to Handle Bouncing Ball
//      * @class RKBouncingBall
//      */
//     class RKBouncingBall {
//         public:
//             /**
//              * @brief Synestia Graphics Window
//              */
//             synwin::SynWindow window = synwin::SynWindow(
//                 "Ramtin Kosari's Bouncing Ball",
//                 RK_BOUCING_BALL_WINDOW_HEIGHT,
//                 RK_BOUCING_BALL_WINDOW_WIDTH
//             );
//             /**
//              * @brief Synestia Graphics Shape
//              */
//             synshape::Shape shape;
//             /**
//              * @brief Bouncing Ball Type
//              */
//             RKBouncingBallType type;
//             /**
//              * @brief Bouncing Ball Constructor
//              */
//             RKBouncingBall();
//             /**
//              * @brief Bouncing Ball Constructor
//              * @param type Bouncing Ball Type
//              */
//             RKBouncingBall(RKBouncingBallType type);
//     };
// # endif // RK_GRAPHICS_PROJECT_3