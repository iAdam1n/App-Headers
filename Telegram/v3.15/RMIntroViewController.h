/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>

@class EAGLContext, GLKView, UIImageView, NSArray, NSMutableArray, UIScrollView, UIButton, UIPageControl, NSTimer, NSString;

@interface RMIntroViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate, GLKViewDelegate> {

	EAGLContext* context;
	GLKView* _glkView;
	UIImageView* _startArrow;
	NSArray* _headlines;
	NSArray* _descriptions;
	NSMutableArray* _pageViews;
	long long _currentPage;
	UIScrollView* _pageScrollView;
	UIButton* _startButton;
	UIPageControl* _pageControl;
	NSTimer* _updateAndRenderTimer;
	BOOL _isOpenGLLoaded;
	id _didEnterBackgroundObserver;
	id _willEnterBackgroundObserver;
	UIImageView* _stillLogoView;
	BOOL _displayedStillLogo;
	UIButton* _switchToDebugButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadGL;
-(void)updateAndRender;
-(void)reallySwitchToDebugPressed;
-(int)deviceScreen;
-(void)startButtonPress;
-(void)freeGL;
-(void)switchToDebugPressed:(id)arg1 ;
-(void)stopTimer;
-(id)init;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)startTimer;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(void)setupGL;
@end
