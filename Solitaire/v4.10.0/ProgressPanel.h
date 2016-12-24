/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>
#import <SolitaireFree/OverlayButtonDelegate.h>

@protocol ProgressPanelDelegate;
@class UIView, OverlayButton, UIButton, UIImageView, UILabel, NSTimer, NSString;

@interface ProgressPanel : UIView <OverlayButtonDelegate> {

	UIView* mainView;
	OverlayButton* overlayButton;
	UIButton* cancelButton;
	UIButton* cancelButtonOverlay;
	UIImageView* backgroundView;
	UILabel* loadingLabel;
	UIImageView* iconView;
	NSTimer* timer;
	BOOL animatingHourglass;
	BOOL cancelTimer;
	id<ProgressPanelDelegate> _delegate;

}

@property (assign,nonatomic) id<ProgressPanelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutUI;
-(void)button:(id)arg1 isHighlighted:(BOOL)arg2 ;
-(void)flipHourglass;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)hide;
-(void)show;
-(void)setDelegate:(id<ProgressPanelDelegate>)arg1 ;
-(id<ProgressPanelDelegate>)delegate;
-(void)cancelButtonPressed;
@end
