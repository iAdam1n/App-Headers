/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GADAdViewDelegate;
#import <SportyTrader/SportyTrader-Structs.h>
@class UIView, UIViewController;

@interface GADAdViewState : NSObject {

	UIView* _superview;
	id<GADAdViewDelegate> _delegate;
	UIViewController* _viewController;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                                          //@synthesize frame=_frame - In the implementation block
@property (nonatomic,retain) UIView * superview;                                    //@synthesize superview=_superview - In the implementation block
@property (assign,nonatomic,__weak) id<GADAdViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setSuperview:(UIView *)arg1 ;
-(void)setDelegate:(id<GADAdViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(id<GADAdViewDelegate>)delegate;
-(UIView *)superview;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
@end
