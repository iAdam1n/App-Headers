/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class JMActionMenuThemeConfiguration, UIImageView, JMActionMenuHoveringPanelContentView, JMActionMenuNode;

@interface JMActionMenuHoveringPanelView : UIView {

	BOOL _currentlyHandlingKeyboardEvent;
	/*^block*/id _onSwipeDownGesture;
	JMActionMenuThemeConfiguration* _themeConfiguration;
	UIImageView* _backgroundView;
	UIImageView* _iconView;
	JMActionMenuHoveringPanelContentView* _contentView;

}

@property (readonly) JMActionMenuNode * affectedActionMenuNode; 
@property (copy) id onSwipeDownGesture;                                              //@synthesize onSwipeDownGesture=_onSwipeDownGesture - In the implementation block
@property (retain) JMActionMenuThemeConfiguration * themeConfiguration;              //@synthesize themeConfiguration=_themeConfiguration - In the implementation block
@property (retain) UIImageView * backgroundView;                                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (retain) UIImageView * iconView;                                           //@synthesize iconView=_iconView - In the implementation block
@property (retain) JMActionMenuHoveringPanelContentView * contentView;               //@synthesize contentView=_contentView - In the implementation block
@property (assign) BOOL currentlyHandlingKeyboardEvent;                              //@synthesize currentlyHandlingKeyboardEvent=_currentlyHandlingKeyboardEvent - In the implementation block
-(void)setThemeConfiguration:(JMActionMenuThemeConfiguration *)arg1 ;
-(JMActionMenuThemeConfiguration *)themeConfiguration;
-(id)initWithThemeConfiguration:(id)arg1 backgroundImage:(id)arg2 ;
-(void)setOnSwipeDownGesture:(id)arg1 ;
-(JMActionMenuNode *)affectedActionMenuNode;
-(void)updateForActionMenuNode:(id)arg1 withPanelContentView:(id)arg2 ;
-(void)disableKeyboardReaction;
-(void)enableKeyboardReaction;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(void)setCurrentlyHandlingKeyboardEvent:(BOOL)arg1 ;
-(BOOL)currentlyHandlingKeyboardEvent;
-(void)userDidSwipeDown:(id)arg1 ;
-(id)onSwipeDownGesture;
-(void)dealloc;
-(JMActionMenuHoveringPanelContentView *)contentView;
-(void)setContentView:(JMActionMenuHoveringPanelContentView *)arg1 ;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)backgroundView;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)willDismiss;
@end
