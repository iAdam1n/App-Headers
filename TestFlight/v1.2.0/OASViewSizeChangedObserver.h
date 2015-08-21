/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OASViewSizeChangedObserverDelegate;
#import <TestFlight/TestFlight-Structs.h>
@class UIView;

@interface OASViewSizeChangedObserver : NSObject {

	UIView* _observedView;
	id<OASViewSizeChangedObserverDelegate> _delegate;
	CGSize _size;

}

@property (nonatomic,retain) UIView * observedView;                                               //@synthesize observedView=_observedView - In the implementation block
@property (assign,nonatomic,__weak) id<OASViewSizeChangedObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize size;                                                         //@synthesize size=_size - In the implementation block
-(void)setObservedView:(UIView *)arg1 ;
-(UIView *)observedView;
-(void)dealloc;
-(CGSize)size;
-(void)setDelegate:(id<OASViewSizeChangedObserverDelegate>)arg1 ;
-(id<OASViewSizeChangedObserverDelegate>)delegate;
-(void)setSize:(CGSize)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

