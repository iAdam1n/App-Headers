/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBMemoryProfilerMovableViewController.h>

@protocol FBMemoryProfilerPresentationModeDelegate;
@class UIButton, NSTimer, NSByteCountFormatter, NSString;

@interface FBMemoryProfilerFloatingButtonController : UIViewController <FBMemoryProfilerMovableViewController> {

	UIButton* _floatingButton;
	NSTimer* _timer;
	NSByteCountFormatter* _formatter;
	id<FBMemoryProfilerPresentationModeDelegate> _presentationModeDelegate;

}

@property (assign,nonatomic,__weak) id<FBMemoryProfilerPresentationModeDelegate> presentationModeDelegate;              //@synthesize presentationModeDelegate=_presentationModeDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonTapped;
-(id<FBMemoryProfilerPresentationModeDelegate>)presentationModeDelegate;
-(void)containerWillMove:(id)arg1 ;
-(BOOL)shouldStretchInMovableContainer;
-(double)minimumHeightInMovableContainer;
-(void)setPresentationModeDelegate:(id<FBMemoryProfilerPresentationModeDelegate>)arg1 ;
-(id)init;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_update;
-(void)viewDidLoad;
@end
