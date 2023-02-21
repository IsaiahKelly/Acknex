using System.Collections.Generic;

namespace Acknex
{
    public class Texture : IAcknexObject
    {
        /*Number of sides of the texture. Each side is the equivalent of one or - for
        animated textures - several bitmaps. Depending on the object the texture was
        assigned to, the significance of the sides changes. Usually, bitmaps assigned to
        sides change depending on the angle from which the respective object is
        perceived. Hereby things and actors are given a spacial appearance. Texture for
        things and actors may have an unlimited number of sides, which are counted
        clockwise, the first side being equivalent to the frontal view.
        Wall textures usually have only one side. Two-sided wall textures change the
        bitmap depending on the perspective the wall is perceived from: starting from
        the first vertex of the wall up to the middle the first side, from the middle to
        the end vertex the second side is visible. This way spatial elements of textures
        are shown more clearly. If the wall has four sides, the first two are assigned to
        its right side or front, the last two to its left side or back.
        More than four sides are sometimes useful with multi-storied regions (see
        below): the first four sides are assigned to the uppermost region, the BELOW
        region has the next four sides and so on.
        Sky textures may have any number of sides; they will be distributed evenly
        among the 360° panorama. For example does a SKY texture consisting of ten
        pages assume an area of 36° for each bitmap. Therefore the horizontal scale of
        sky textures is derived from the size of the bitmaps and the number of sides.
        There is no vertical scaling of sky textures.*/
        public int SIDES;

        //Number of phases (frames) of texture animation; default=1
        public int CYCLES = 1;

        /*Number of the start frame of an animated MODEL texture, between 1 and the
        max number of frames within the MDL file (default=1).*/
        public int FRAME = 1;

        /*List of keywords, which were assigned the bitmap files of the texture. All
        bitmaps of wall, floor, or ceiling textures must have the same size, the bitmaps
        of actor’s or thing’s textures may differ in size .The number of bitmaps is
        unlimited, but must be equal to the product of (SIDES * CYCLES). In the
        BMAPS list the cycles of the front side ar to be listed first, then those of all
        other sides counterclockwise around the object. Instead of the keyword of the
        bitmap the keyword NULL may also be used, but only with textures for
        things, actors or transparent walls. The respective cycle or side of the texture
        will then not be displayed, as if the object were invisible. In the case of walls
        at least one bitmap of the texture must be non-NULL.
        The maximum width or height of a bitmap is 1024 pixels. Apart from that, a
        bitmap of a thing or actor texture can have any size. Bitmaps in the LBM
        format must have an even-numbered width. Wall textures can have any size
        horizontally; the vertical number of pixels must be a power of two, e.g. 64, 128
        or 256 pixels. Floor and ceiling textures must be quadratic, only sizes of 64x64,
        128x128 or 256x256 pixels are allowed.
        Backdrop bitmaps (SKY) may have any horizontal size; the vertical size
        depends on the maximum visible background section (depending on the
        vertical angle PLAYER_TILT, see below). Usually the sky bitmap’s lower
        edge touches the horizon. You can shift sky textures vertically and horizontally through the object's OFFSET_X and OFFSET_Y parameters and
        additional through the predefined skills SKY_OFFS_X and SKY_OFFS_Y
        (see below). Vertically the sky texture is neither zoomed nor repeated. If the
        texture's border exceeds the top or bottom pixel line of the sky bitmap, the
        rest of the sky is automatically filled with this pixel line; so the first and last
        line of the sky bitmap should be monochrome*/
        public List<string> BMAPS;

        /*Texture FLIC animation, alternative to BMAPS (professional version only).
        Flic is a previously defined keyword denoting a FLI/FLC file. The size of the
        texture results from the size of this animation. The same rules concerning size
        that were given for BMAPS apply here. The Flic palette must correspond to
        the level-palette. As long as ONESHOT is not set, the animation is repeated
        in a loop.*/
        public string FLIC;

        /*With the parameter TITLE a texture can be given a string, who is displayed
        with the texture FONT (see below). The string may be given as keyword or
        directly (TITLE “It’s a title!”;). The TITLE has the same restrictions as a
        bitmap would have for the same texture; e.g. the font height for a one-line title
        on a wall texture must have be power of two. If a texture has a TITLE, it must
        not be animated, and must have no BMAPS*/
        public string TITLE;

        /*3D animated model, alternative to BMAPS. Model is a previously defined
        keyword denoting a MDL model file. A model texture can only be assigned to
        things or actors. The size of the texture results from the positions of the model
        vertices (in pixels); the skin bitmap palette must correspond to the level palette.
        The same rules concerning size that were given for BMAPS apply here. Only
        one DELAY value is allowed. As long as ONESHOT is not set, the model
        animation is repeated in a loop. If you want to use only a part of the MDL
        frames for the animation, use the FRAME and CYCLES parameters. */
        public string MODEL;

        /*List of phase durations in ticks for every cycle of animation. The number of
        DELAY values must be equal to the value of CYCLES. If this list is not stated,
        animation is working with one tick per phase. The higher the DELAY value,
        the more does the animation speed remain constant on different frame rates.*/
        public List<int> DELAY;

        /*List of mirror flags (0 or 1) for every texture side. If the mirror flag is set at 1,
        all bitmaps of the concerned side are shown side-inverted. The number of flags
        must be equal to the number of SIDES. If this list is not given, all bitmaps are
        shown un-inverted.*/
        public List<bool> MIRROR;

        /*Each bitmap of an animated thing or actor texture may be given an individual
        shift in horizontal and vertical direction by these parameters in pixel units.
        The number of OFFSET_X/Y parameters must be equal to the number of
        BMAPS.*/
        public List<int> OFFSET_X;
        public List<int> OFFSET_Y;

        /*Maximum value for a random factor of delay (0..1, default 0), which is added
        to every phase of a texture animation.
        */
        public float RANDOM;

        /*Scaling of the textures in horizontal and vertical direction in pixels per step.
        With floor and ceiling textures the value x indicates the scaling in the direction
        of X, y indicates the scaling in the direction of Y within the system of
        coordinates. The smaller the value given, the larger the texture will be
        displayed; the larger the value, the higher the pixel resolution in the object’s
        3D GameStudio © conitec Mai 1998 40
        proximity. Should this keyword be ommitted, the textures will be scaled by
        16 pixels per step in each direction. The keyword does not apply to SKY
        textures.
        */
        public float SCALE_X = 16f;
        public float SCALE_Y = 16f;

        /*The ATTACH texture appears at the pixel positions given by these keywords
        relative to the upper left corner of the original texture. If both POS_X and
        POS_Y are 0 (default), they will both appear exactly in the upper left.
        Advice: In order to position an ATTACH texture exactly in the middle of a
        wall independently from the height and scaling of the wall, the position should
        be calculated as follows (rule-of-thumb)*/
        public int POS_X;
        public int POS_Y;

        public List<string> FLAGS = new List<string>();

        public string NAME;
        public void Disable()
        {
            
        }
    }
}