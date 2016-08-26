/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary;

@interface FBVideoPlayerManager : NSObject {

	NSMutableDictionary* _videoPlayerStates;
	mutex _videoPlayerStatesLock;

}
-(void)updateManuallyPaused:(BOOL)arg1 forVideoWithID:(id)arg2 ;
-(void)updateDidPlayToEnd:(BOOL)arg1 time:(double)arg2 isOnEndScreen:(BOOL)arg3 forVideoWithID:(id)arg4 ;
-(id)videoPlayerStateForVideoWithID:(id)arg1 ;
-(void)updateDidLogStartedPlaying:(BOOL)arg1 forVideoWithID:(id)arg2 ;
-(id)findOrCreateVideoPlayerStateForVideoWithID:(id)arg1 ;
-(id)videoPlayerStateBuilderForVideoWithID:(id)arg1 ;
-(void)updateHasDisplayed:(BOOL)arg1 forVideoWithID:(id)arg2 ;
-(void)updateHasShownSoundPrompt:(BOOL)arg1 forVideoWithID:(id)arg2 ;
-(void)updateScrollBlockingTotalTimePlayed:(double)arg1 forVideoWithID:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end
