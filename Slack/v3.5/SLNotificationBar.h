/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIAppearance.h>

@class SLWindowContainer, UIView, UILabel, UIButton, NSTimer, NSDictionary, UIColor, NSString;

@interface SLNotificationBar : NSObject <UIAppearance> {

	BOOL _showing;
	BOOL _dimissing;
	SLWindowContainer* _windowContainer;
	UIView* _statusBarView;
	UILabel* _messageLabel;
	UIButton* _actionButton;
	NSTimer* _visibilityTimer;
	NSDictionary* _messageTextAttributes;
	NSDictionary* _buttonTextAttributes;
	UIColor* _backgroundColor;
	double _visibleInterval;
	double _transitionInterval;
	/*^block*/id _actionBlock;
	long long _initialOrientation;
	/*^block*/id _completionBlock;
	/*^block*/id _undoButtonTappedBlock;

}

@property (nonatomic,readonly) SLWindowContainer * windowContainer;              //@synthesize windowContainer=_windowContainer - In the implementation block
@property (nonatomic,readonly) UIView * statusBarView;                           //@synthesize statusBarView=_statusBarView - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                           //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;                          //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) NSTimer * visibilityTimer;                          //@synthesize visibilityTimer=_visibilityTimer - In the implementation block
@property (assign,nonatomic) long long initialOrientation;                       //@synthesize initialOrientation=_initialOrientation - In the implementation block
@property (nonatomic,copy) id completionBlock;                                   //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id undoButtonTappedBlock;                             //@synthesize undoButtonTappedBlock=_undoButtonTappedBlock - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double visibleInterval;                             //@synthesize visibleInterval=_visibleInterval - In the implementation block
@property (assign,nonatomic) double transitionInterval;                          //@synthesize transitionInterval=_transitionInterval - In the implementation block
@property (nonatomic,retain) NSDictionary * messageTextAttributes;               //@synthesize messageTextAttributes=_messageTextAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * buttonTextAttributes;                //@synthesize buttonTextAttributes=_buttonTextAttributes - In the implementation block
@property (nonatomic,copy) id actionBlock;                                       //@synthesize actionBlock=_actionBlock - In the implementation block
@property (getter=isShowing,nonatomic,readonly) BOOL showing;                    //@synthesize showing=_showing - In the implementation block
@property (getter=isDimissing,nonatomic,readonly) BOOL dimissing;                //@synthesize dimissing=_dimissing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultBar;
+(id)appearance;
+(id)appearanceWhenContainedIn:(Class)arg1 ;
+(id)appearanceForTraitCollection:(id)arg1 ;
+(id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2 ;
-(void)showForGenericChannel:(id)arg1 withStyle:(unsigned long long)arg2 undoButtonTapped:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)showErrorMessage:(id)arg1 ;
-(void)showForGenericChannel:(id)arg1 renamedTo:(id)arg2 undoButtonTapped:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)didTapActionButton:(id)arg1 ;
-(CGRect)notificationLabelFrame;
-(UIView *)statusBarView;
-(void)didTapNotificationLabel:(id)arg1 ;
-(CGRect)notificationLabelTopFrame;
-(CGRect)actionButtonFrame;
-(BOOL)isDimissing;
-(id)undoButtonTappedBlock;
-(void)showWithMessage:(id)arg1 duration:(double)arg2 ;
-(void)showWithMessage:(id)arg1 buttonTitle:(id)arg2 duration:(double)arg3 undoButtonTapped:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)registerOrientationNotifications;
-(SLWindowContainer *)windowContainer;
-(double)visibleInterval;
-(CGRect)notificationLabelBottomFrame;
-(void)dismissNotificationBar:(id)arg1 ;
-(void)setVisibilityTimer:(NSTimer *)arg1 ;
-(NSTimer *)visibilityTimer;
-(void)willChangeStatusBarOrientation:(id)arg1 ;
-(void)didChangeStatusBarOrientation:(id)arg1 ;
-(void)unregisterOrientationNotifications;
-(NSDictionary *)messageTextAttributes;
-(NSDictionary *)buttonTextAttributes;
-(void)setMessageTextAttributes:(NSDictionary *)arg1 ;
-(void)setButtonTextAttributes:(NSDictionary *)arg1 ;
-(void)showWithMessage:(id)arg1 ;
-(void)setVisibleInterval:(double)arg1 ;
-(void)setUndoButtonTappedBlock:(id)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)invalidate;
-(UILabel *)messageLabel;
-(void)dismiss;
-(double)transitionInterval;
-(void)setTransitionInterval:(double)arg1 ;
-(BOOL)isShowing;
-(void)setNotificationMessage:(id)arg1 ;
-(UIButton *)actionButton;
-(long long)initialOrientation;
-(void)setInitialOrientation:(long long)arg1 ;
-(id)buttonText;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(void)setActionButtonTitle:(id)arg1 ;
@end

