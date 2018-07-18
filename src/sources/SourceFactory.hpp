//
//  SourceFactory.hpp
//  Ellydeez
//
//  Created by Pascal Baltazar on 11/07/2018.
//

#ifndef SourceFactory_hpp
#define SourceFactory_hpp

#include <stdio.h>
#include <map>
#include <list>

#include "Pool.hpp"

#include "Syphon.hpp"
#include "Player.hpp"
//#include "Network.hpp"
//#include "Generator.hpp"

using namespace std;

class SourceFactory {
    
public:
    
    SourceFactory()     = default;
    ~SourceFactory()    = default;
    
    // Setup the Source Factory with a json file
    void setup(ofJson& config);
    
    // Or manually
    void setup()
        { addPool( "default" ); }
    void setup(const string& defaultPoolName)
        { addPool( defaultPoolName ); }
    
    void update();
    void draw();
    void exit();
    
protected:
    
    void add( string srcName, ofJson& params );
    
    void remove( const string& srcName );
    void remove( Source* );
    
private:
    
    Pool* addPool( const string& poolName )
        {pools.emplace( poolName , Pool(poolName) );}
    
    
    map< string, Pool >               pools;
    
    map< string, Sources::Syphon >    syphons;
    map< string, Sources::Player >    players;
    //map<string,Sources::Network>        networkIns;
    //map<string,Sources::Generator>      generators;

    map< string, Source* >            sources;
    
};

#endif /* SourceFactory_hpp */
