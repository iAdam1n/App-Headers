/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, UIView;

@interface SKUIFocusedTouchGestureRecognizer : UIGestureRecognizer {

	NSMutableSet* _activeTouches;
	BOOL _didTouchOutside;
	UIView* _focusedView;
	UIEdgeInsets _touchAllowance;

}

@property (nonatomic,readonly) UIView * focusedView;                   //@synthesize focusedView=_focusedView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchAllowance;              //@synthesize touchAllowance=_touchAllowance - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)focusedView;
-(void)reset;
-(id)initWithFocusedView:(id)arg1 touchAllowance:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)touchAllowance;
-(void)setTouchAllowance:(UIEdgeInsets)arg1 ;
@end

