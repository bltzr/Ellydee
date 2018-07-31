//
//  SourceBase.hpp
//  Ellydeez
//
//  Created by Pascal Baltazar on 11/07/2018.
//

#ifndef SourceBase_hpp
#define SourceBase_hpp

#include "../Common.hpp"

class SourceFactory;

class Source {
    
public:
    
    virtual void        setup()            = 0;
    virtual void        update()           = 0;
    virtual void        draw()             = 0;
    virtual void        exit()             = 0;
    
    virtual void        draw (float x, float y, float w, float h) = 0;
    virtual ofPixels&   getPixels()   = 0;
    
    virtual float       getWidth()          = 0;
    virtual float       getHeight()         = 0;
    
    bool                outputsPixels() { return hasPixels; }
    
protected:
    
    Source()
    {}
    
    virtual ~Source() = default ;
    
    float           width{1};
    float           height{0};

private:
    
    bool            hasPixels{false};
    
    friend class    SourceFactory;
    
};
    
#endif /* SourceBase_hpp */
