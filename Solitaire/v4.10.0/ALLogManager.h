/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ALLogListenerDelegate;
@class ALSettingsManager;

@interface ALLogManager : NSObject {

	id<ALLogListenerDelegate> logListener;
	ALSettingsManager* settingsManager;

}

@property (nonatomic,retain) ALSettingsManager * settingsManager; 
@property (nonatomic,retain) id<ALLogListenerDelegate> logListener; 
-(void)userError:(id)arg1 message:(id)arg2 ;
-(void)w:(id)arg1 message:(id)arg2 ;
-(void)i:(id)arg1 message:(id)arg2 ;
-(void)logMessage:(id)arg1 fromSource:(id)arg2 atLevel:(id)arg3 ;
-(id<ALLogListenerDelegate>)logListener;
-(void)setLogListener:(id<ALLogListenerDelegate>)arg1 ;
-(void)setSettingsManager:(ALSettingsManager *)arg1 ;
-(void)e:(id)arg1 message:(id)arg2 ;
-(void)e:(id)arg1 message:(id)arg2 becauseOf:(id)arg3 ;
-(void)d:(id)arg1 message:(id)arg2 ;
-(ALSettingsManager *)settingsManager;
@end
