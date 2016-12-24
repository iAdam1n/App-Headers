/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class RCTEventDispatcher, NSMutableOrderedSet, NSMutableArray;

@interface RCTTouchHandler : UIGestureRecognizer {

	RCTEventDispatcher* _eventDispatcher;
	NSMutableOrderedSet* _nativeTouches;
	NSMutableArray* _reactTouches;
	NSMutableArray* _touchViews;
	BOOL _dispatchedInitialTouches;
	BOOL _recordingInteractionTiming;
	double _mostRecentEnqueueJS;
	unsigned short _coalescingKey;

}
-(id)initWithBridge:(id)arg1 ;
-(void)handleGestureUpdate:(id)arg1 ;
-(void)_updateReactTouchAtIndex:(long long)arg1 ;
-(void)_updateAndDispatchTouches:(id)arg1 eventName:(id)arg2 originatingTime:(double)arg3 ;
-(void)_recordNewTouches:(id)arg1 ;
-(void)_recordRemovedTouches:(id)arg1 ;
-(void)cancel;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
@end
