/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GADAdViewDelegate;
#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
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
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<GADAdViewDelegate>)arg1 ;
-(CGRect)frame;
-(id<GADAdViewDelegate>)delegate;
-(UIView *)superview;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setSuperview:(UIView *)arg1 ;
@end
