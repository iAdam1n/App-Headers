/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWebViewController.h>
#import <Facebook/FBWebViewControllerCanvasDialogExtension.h>
#import <Facebook/FBRapidFeedbackSurveyManagerDelegate.h>

@class FBSSOController, FBUserSession, FBRapidFeedbackSurveyManager, NSString;

@interface FBSSOViewController : FBWebViewController <FBWebViewControllerCanvasDialogExtension, FBRapidFeedbackSurveyManagerDelegate> {

	FBSSOController* _ssoController;
	BOOL _didAppearOnce;
	FBUserSession* _userSession;
	FBRapidFeedbackSurveyManager* _surveyManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(long long)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5 ;
-(void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2 ;
-(void)surveyManager:(id)arg1 shouldDismiss:(BOOL)arg2 ;
-(void)onApplicationDidEnterBackground:(id)arg1 ;
-(void)cancelModal;
-(id)initWithSSOController:(id)arg1 session:(id)arg2 ;
-(void)dismissSelf;
-(void)dialogDidLoad;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
