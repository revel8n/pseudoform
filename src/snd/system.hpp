 /*
 * Copyright (c) 2008-2009 Agop 'nullsquared' Shirinian and Sven-Hendrik 'Svenstaro' Haase
 * This file is part of Pseudoform (Pseudoform project at http://www.pseudoform.org).
 * For conditions of distribution and use, see copyright notice in COPYING
 */

#ifndef SYSTEM_HPP_INCLUDED
#define SYSTEM_HPP_INCLUDED

#include <map>
#include <list>

#ifdef _WINDOWS
//#include <fmod.h>
#elif _LINUX
//#include <fmodex/fmod.h>
#endif

#include "sound.hpp"
#include "types.hpp"

namespace engine
{
    namespace snd
    {

        class system
        {
            private:

//                FMOD_SYSTEM *_system;

//                typedef std::map<engine::string, FMOD_SOUND*> soundMap;
//                soundMap _avail2D, _avail3D;

//                FMOD_SOUND *_getSound(const engine::string &fn, soundMap &which);

                typedef std::list<soundPtr> soundList;
                soundList _playing;

                float _speed;

            public:

                system();
                ~system();

                void tick();

                soundPtr play(const engine::string &fn, bool threeD);

                void speed(float f);

                void listener(const vec3 &p, const vec3 &f, const vec3 &u, int id = 0);

//                operator FMOD_SYSTEM *() const
//                {
//                    return _system;
//                }

        };
    }
}

#endif // SYSTEM_HPP_INCLUDED
