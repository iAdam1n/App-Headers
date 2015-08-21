/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBWebRTCCallSurvey, FBWebRTCUIDisplayCoordinator, FBWebRTCViewController;

@interface FBWebRTCFeedbackViewController : UIViewController {

	FBWebRTCCallSurvey* _survey;
	FBWebRTCUIDisplayCoordinator* _displayCoordinator;
	FBWebRTCViewController* _webRTCViewController;

}

@property (nonatomic,retain) FBWebRTCCallSurvey * survey;                                    //@synthesize survey=_survey - In the implementation block
@property (nonatomic,retain) FBWebRTCUIDisplayCoordinator * displayCoordinator;              //@synthesize displayCoordinator=_displayCoordinator - In the implementation block
@property (nonatomic,retain) FBWebRTCViewController * webRTCViewController;                  //@synthesize webRTCViewController=_webRTCViewController - In the implementation block
-(FBWebRTCCallSurvey *)survey;
-(void)didPressSend;
-(void)onTextChange;
-(id)initWithSurvey:(id)arg1 displayCoordinator:(id)arg2 webRTCViewController:(id)arg3 ;
-(void)setSurvey:(FBWebRTCCallSurvey *)arg1 ;
-(FBWebRTCUIDisplayCoordinator *)displayCoordinator;
-(void)setDisplayCoordinator:(FBWebRTCUIDisplayCoordinator *)arg1 ;
-(FBWebRTCViewController *)webRTCViewController;
-(void)setWebRTCViewController:(FBWebRTCViewController *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

