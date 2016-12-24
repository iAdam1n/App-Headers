/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIWindow.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Slack/POPAnimationDelegate.h>

@class NSString, UIWindow, UIView, SLNavigationController, UITapGestureRecognizer, UIPanGestureRecognizer, _TtC5Slack21SLKCallViewController, SLKCallNameInputViewController, SLKDependencies;

@interface SLKCallWindow : UIWindow <UIGestureRecognizerDelegate, POPAnimationDelegate> {

	BOOL _shouldAcceptCall;
	BOOL _isMinimized;
	BOOL _isAnimationInFlight;
	int _minimizedLocation;
	NSString* _channelID;
	NSString* _roomID;
	NSString* _userIDToInvite;
	NSString* _callerID;
	NSString* _callerName;
	NSString* _callerAvatarURLString;
	NSString* _callerTeamName;
	NSString* _callerTeamID;
	NSString* _callerURI;
	UIWindow* _previousKeyWindow;
	/*^block*/id _closeCallWindowButtonTapped;
	UIView* _backgroundView;
	SLNavigationController* _callNavigationController;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	_TtC5Slack21SLKCallViewController* _callViewController;
	SLKCallNameInputViewController* _callNameInputViewController;
	long long _orientation;
	double _screenWidth;
	double _screenHeight;
	SLKDependencies* _dependencies;
	CGPoint _panStartPoint;
	CGPoint _panEndPoint;
	CGRect _defaultMiniChatHeadFrameToRect;
	CGRect _defaultChatHeadFrameRect;

}

@property (assign,nonatomic) int minimizedLocation;                                                     //@synthesize minimizedLocation=_minimizedLocation - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                   //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) SLNavigationController * callNavigationController;                         //@synthesize callNavigationController=_callNavigationController - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                             //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                             //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) _TtC5Slack21SLKCallViewController * callViewController;                    //@synthesize callViewController=_callViewController - In the implementation block
@property (nonatomic,retain) SLKCallNameInputViewController * callNameInputViewController;              //@synthesize callNameInputViewController=_callNameInputViewController - In the implementation block
@property (assign,nonatomic) BOOL isAnimationInFlight;                                                  //@synthesize isAnimationInFlight=_isAnimationInFlight - In the implementation block
@property (assign,nonatomic) BOOL isMinimized;                                                          //@synthesize isMinimized=_isMinimized - In the implementation block
@property (assign,nonatomic) long long orientation;                                                     //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double screenWidth;                                                        //@synthesize screenWidth=_screenWidth - In the implementation block
@property (assign,nonatomic) double screenHeight;                                                       //@synthesize screenHeight=_screenHeight - In the implementation block
@property (assign,nonatomic) CGPoint panStartPoint;                                                     //@synthesize panStartPoint=_panStartPoint - In the implementation block
@property (assign,nonatomic) CGPoint panEndPoint;                                                       //@synthesize panEndPoint=_panEndPoint - In the implementation block
@property (assign,nonatomic) CGRect defaultMiniChatHeadFrameToRect;                                     //@synthesize defaultMiniChatHeadFrameToRect=_defaultMiniChatHeadFrameToRect - In the implementation block
@property (assign,nonatomic) CGRect defaultChatHeadFrameRect;                                           //@synthesize defaultChatHeadFrameRect=_defaultChatHeadFrameRect - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                                     //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,retain) NSString * channelID;                                                      //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,retain) NSString * roomID;                                                         //@synthesize roomID=_roomID - In the implementation block
@property (nonatomic,retain) NSString * userIDToInvite;                                                 //@synthesize userIDToInvite=_userIDToInvite - In the implementation block
@property (nonatomic,retain) NSString * callerID;                                                       //@synthesize callerID=_callerID - In the implementation block
@property (nonatomic,retain) NSString * callerName;                                                     //@synthesize callerName=_callerName - In the implementation block
@property (nonatomic,retain) NSString * callerAvatarURLString;                                          //@synthesize callerAvatarURLString=_callerAvatarURLString - In the implementation block
@property (nonatomic,retain) NSString * callerTeamName;                                                 //@synthesize callerTeamName=_callerTeamName - In the implementation block
@property (nonatomic,retain) NSString * callerTeamID;                                                   //@synthesize callerTeamID=_callerTeamID - In the implementation block
@property (nonatomic,retain) NSString * callerURI;                                                      //@synthesize callerURI=_callerURI - In the implementation block
@property (assign,nonatomic) BOOL shouldAcceptCall;                                                     //@synthesize shouldAcceptCall=_shouldAcceptCall - In the implementation block
@property (nonatomic,retain) UIWindow * previousKeyWindow;                                              //@synthesize previousKeyWindow=_previousKeyWindow - In the implementation block
@property (nonatomic,copy) id closeCallWindowButtonTapped;                                              //@synthesize closeCallWindowButtonTapped=_closeCallWindowButtonTapped - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsAnimationInFlight:(BOOL)arg1 ;
-(void)setIsMinimized:(BOOL)arg1 ;
-(void)statusBarDidChangeFrame:(id)arg1 ;
-(void)maximizeCallWindow:(id)arg1 ;
-(void)applicationWillChangeSize:(id)arg1 ;
-(void)proximityChanged:(id)arg1 ;
-(_TtC5Slack21SLKCallViewController *)callViewController;
-(void)setMinimizedLocation:(int)arg1 ;
-(void)addGestures;
-(void)removeGestures;
-(CGPoint)centerForMinimizedLocation:(int)arg1 ;
-(CGRect)defaultMiniChatHeadFrameToRect;
-(BOOL)isAnimationInFlight;
-(void)showCall;
-(id)closeCallWindowButtonTapped;
-(BOOL)shouldShowCallSurvey;
-(SLNavigationController *)callNavigationController;
-(SLKCallNameInputViewController *)callNameInputViewController;
-(void)setCallNameInputViewController:(SLKCallNameInputViewController *)arg1 ;
-(void)dismissCallWindow;
-(void)pushCallViewControllerWithCallName:(id)arg1 ;
-(void)setCallNavigationController:(SLNavigationController *)arg1 ;
-(NSString *)userIDToInvite;
-(void)setCallViewController:(_TtC5Slack21SLKCallViewController *)arg1 ;
-(NSString *)roomID;
-(void)setupCallsViewController;
-(NSString *)callerTeamName;
-(void)setCallerTeamName:(NSString *)arg1 ;
-(NSString *)callerTeamID;
-(void)setCallerTeamID:(NSString *)arg1 ;
-(void)setCallerURI:(NSString *)arg1 ;
-(NSString *)callerAvatarURLString;
-(BOOL)shouldAcceptCall;
-(void)setShouldAcceptCall:(BOOL)arg1 ;
-(CGRect)defaultChatHeadFrameRect;
-(void)dimissNotificationBar;
-(void)endingSwipeVerticalWithUpDirection:(BOOL)arg1 ;
-(void)dismissKeyboardIfOnScreen;
-(void)tapGestureRecognizerRecognized:(id)arg1 ;
-(void)setPanStartPoint:(CGPoint)arg1 ;
-(void)setPanEndPoint:(CGPoint)arg1 ;
-(double)absoluteValue:(CGPoint)arg1 ;
-(CGPoint)panEndPoint;
-(CGPoint)panStartPoint;
-(int)minimizedLocation;
-(void)backgroundAlphaChange:(double)arg1 ;
-(void)moveCallWindowToMinimizedLocation:(int)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 dependencies:(id)arg2 ;
-(void)showCallWindow;
-(void)setRoomID:(NSString *)arg1 ;
-(void)setUserIDToInvite:(NSString *)arg1 ;
-(void)setCallerID:(NSString *)arg1 ;
-(void)setCallerAvatarURLString:(NSString *)arg1 ;
-(void)setCloseCallWindowButtonTapped:(id)arg1 ;
-(void)setDefaultMiniChatHeadFrameToRect:(CGRect)arg1 ;
-(void)setDefaultChatHeadFrameRect:(CGRect)arg1 ;
-(void)pop_animationDidApply:(id)arg1 ;
-(void)pop_animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setScreenHeight:(double)arg1 ;
-(void)setScreenWidth:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(BOOL)isMinimized;
-(double)screenHeight;
-(double)screenWidth;
-(void)keyboardWillShow:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(SLKDependencies *)dependencies;
-(void)setCallerName:(NSString *)arg1 ;
-(NSString *)callerName;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)panGestureRecognized:(id)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setPreviousKeyWindow:(UIWindow *)arg1 ;
-(UIWindow *)previousKeyWindow;
-(NSString *)callerURI;
-(NSString *)callerID;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(NSString *)channelID;
-(void)setChannelID:(NSString *)arg1 ;
@end
