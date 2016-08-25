/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
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
-(void)logMessage:(id)arg1 fromSource:(id)arg2 atLevel:(id)arg3 ;
-(void)w:(id)arg1 message:(id)arg2 ;
-(id<ALLogListenerDelegate>)logListener;
-(void)setLogListener:(id<ALLogListenerDelegate>)arg1 ;
-(ALSettingsManager *)settingsManager;
-(void)d:(id)arg1 message:(id)arg2 ;
-(void)userError:(id)arg1 message:(id)arg2 ;
-(void)e:(id)arg1 message:(id)arg2 becauseOf:(id)arg3 ;
-(void)setSettingsManager:(ALSettingsManager *)arg1 ;
-(void)i:(id)arg1 message:(id)arg2 ;
-(void)e:(id)arg1 message:(id)arg2 ;
@end

