/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBScenePathContextDelegate.h>

@class FBScenePathAnnouncerListenerAnnouncer, FBScenePath;

@interface FBScenePathAnnouncer : NSObject <FBScenePathContextDelegate> {

	FBScenePathAnnouncerListenerAnnouncer* _announcer;
	FBScenePath* _activePath;

}
-(void)scenePathContextForView:(id)arg1 didInvalidatePath:(id)arg2 ;
-(void)scenePathContextForView:(id)arg1 didUpdateActivePathTo:(id)arg2 ;
-(id)init;
-(id)description;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
