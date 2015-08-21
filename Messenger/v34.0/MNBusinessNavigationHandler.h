/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBIntentHandler, MNNavigationPluginService;
@class FBUserSession;

@interface MNBusinessNavigationHandler : NSObject {

	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	id<MNNavigationPluginService> _navigationService;

}

@property (nonatomic,readonly) FBUserSession * session;                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;              //@synthesize intentHandler=_intentHandler - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(id)initWithSession:(id)arg1 intentHandler:(id)arg2 navigationService:(id)arg3 ;
-(void)openURL:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(FBUserSession *)session;
@end

