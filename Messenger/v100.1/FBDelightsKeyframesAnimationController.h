/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBDelightsKeyframesAnimationPersistenceCoordinator, FBUserSession;

@interface FBDelightsKeyframesAnimationController : NSObject {

	FBDelightsKeyframesAnimationPersistenceCoordinator* _persistenceCoordinator;
	FBUserSession* _session;

}
-(void)startKeyframesAnimationWithModel:(id)arg1 animationAnchor:(CGPoint)arg2 animationPosition:(CGPoint)arg3 animationSize:(CGSize)arg4 animationDelay:(double)arg5 underContainerLayer:(id)arg6 ;
-(void)_parseAnimationAndStore:(id)arg1 ;
-(void)_startAnimationWithLayer:(id)arg1 animationAnchor:(CGPoint)arg2 animationPosition:(CGPoint)arg3 animationSize:(CGSize)arg4 animationDelay:(double)arg5 underContainerLayer:(id)arg6 ;
-(void)loadLocalKeyframesModel:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end
