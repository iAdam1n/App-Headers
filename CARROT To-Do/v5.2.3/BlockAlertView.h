/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:47:19 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B61875E7-F2F8-487D-814D-DF59A28B6A4C/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CARROT/CARROT-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, NSMutableArray, UIImage, NSString;

@interface BlockAlertView : NSObject <UIGestureRecognizerDelegate> {

	UIView* _view;
	NSMutableArray* _blocks;
	double _height;
	CGPoint _originalCenter;
	BOOL _dismissOnRelease;
	BOOL _vignetteBackground;
	UIImage* _backgroundImage;

}

@property (nonatomic,retain) UIImage * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,readonly) UIView * view;                        //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL vignetteBackground;                //@synthesize vignetteBackground=_vignetteBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alertWithTitle:(id)arg1 message:(id)arg2 ;
+(void)initialize;
-(void)addButtonWithTitle:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)showRewardAlert;
-(void)addButtonWithTitle:(id)arg1 color:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setVignetteBackground:(BOOL)arg1 ;
-(void)buttonClickedReward:(id)arg1 ;
-(void)setCancelButtonWithTitle:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setDestructiveButtonWithTitle:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)vignetteBackground;
-(void)show;
-(void)dealloc;
-(UIView *)view;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)handlePan:(id)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)buttonClicked:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
@end
