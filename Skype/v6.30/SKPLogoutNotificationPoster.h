/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKPLogoutNotificationPoster : NSObject {

	BOOL _activated;
	BOOL _observing;
	BOOL _wasLoggedIn;
	NSString* _lastPostedErrorMessage;
	NSString* _lastErrorMessage;

}

@property (nonatomic,retain) NSString * lastPostedErrorMessage;              //@synthesize lastPostedErrorMessage=_lastPostedErrorMessage - In the implementation block
@property (nonatomic,retain) NSString * lastErrorMessage;                    //@synthesize lastErrorMessage=_lastErrorMessage - In the implementation block
@property (assign,nonatomic) BOOL observing;                                 //@synthesize observing=_observing - In the implementation block
@property (nonatomic,readonly) NSString * accountStatusKeypath; 
@property (nonatomic,readonly) NSString * loginErrorKeypath; 
@property (assign,nonatomic) BOOL wasLoggedIn;                               //@synthesize wasLoggedIn=_wasLoggedIn - In the implementation block
@property (assign,getter=isActivated,nonatomic) BOOL activated;              //@synthesize activated=_activated - In the implementation block
-(NSString *)accountStatusKeypath;
-(NSString *)loginErrorKeypath;
-(void)setWasLoggedIn:(BOOL)arg1 ;
-(void)setLastPostedErrorMessage:(NSString *)arg1 ;
-(void)setLastErrorMessage:(NSString *)arg1 ;
-(void)postLocalNotification;
-(BOOL)wasLoggedIn;
-(NSString *)lastPostedErrorMessage;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setActivated:(BOOL)arg1 ;
-(void)setObserving:(BOOL)arg1 ;
-(NSString *)lastErrorMessage;
-(BOOL)isActivated;
-(BOOL)observing;
@end
