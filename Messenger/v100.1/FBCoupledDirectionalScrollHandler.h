/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCoupledDirectionalScrollViewInternal;
@class UIScrollView, FBKVOController, NSMutableSet;

@interface FBCoupledDirectionalScrollHandler : NSObject {

	UIScrollView*<FBCoupledDirectionalScrollViewInternal> _hostView;
	FBKVOController* _KVOController;
	int _direction;
	NSMutableSet* _coupledScrollViews;

}

@property (assign,nonatomic) int direction;                                    //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) NSMutableSet * coupledScrollViews;              //@synthesize coupledScrollViews=_coupledScrollViews - In the implementation block
-(void)_gestureRecognizerStateDidChange:(id)arg1 ;
-(void)cancelPanGestureRecognizerAnimated:(BOOL)arg1 ;
-(NSMutableSet *)coupledScrollViews;
-(void)decoupleFromView:(id)arg1 ;
-(void)coupleWithView:(id)arg1 ;
-(void)decoupleFromAllViews;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(id)initWithHostView:(id)arg1 ;
@end
