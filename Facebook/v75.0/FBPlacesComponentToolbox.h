/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationCoordinator, FBIntentHandler;
@class FBUserSession, FBScenePath, FBFontFoundry, FBPlacesComponentEventListenerAnnouncer, CLLocation;

@interface FBPlacesComponentToolbox : NSObject {

	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	FBScenePath* _scenePath;
	FBFontFoundry* _fontFoundry;
	FBPlacesComponentEventListenerAnnouncer* _eventAnnouncer;
	CLLocation* _userLocation;

}

@property (nonatomic,readonly) FBUserSession * session;                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                     //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                                     //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,copy,readonly) FBScenePath * scenePath;                                          //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) FBFontFoundry * fontFoundry;                                           //@synthesize fontFoundry=_fontFoundry - In the implementation block
@property (nonatomic,readonly) FBPlacesComponentEventListenerAnnouncer * eventAnnouncer;              //@synthesize eventAnnouncer=_eventAnnouncer - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * userLocation;                                        //@synthesize userLocation=_userLocation - In the implementation block
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(FBScenePath *)scenePath;
-(FBFontFoundry *)fontFoundry;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 scenePath:(id)arg4 fontFoundry:(id)arg5 eventAnnouncer:(id)arg6 userLocation:(id)arg7 ;
-(FBPlacesComponentEventListenerAnnouncer *)eventAnnouncer;
-(FBUserSession *)session;
-(CLLocation *)userLocation;
@end
