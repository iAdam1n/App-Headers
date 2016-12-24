/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBTransientViewStateManager, NSString, FBUserSession, NSDictionary;

@interface FBPageInterstitialViewController : UIViewController {

	FBTransientViewStateManager* _viewStateManager;
	NSString* _potentialUsername;
	FBUserSession* _session;
	NSString* _initialTab;
	NSString* _actionSource;
	NSDictionary* _urlParams;

}
-(void)_renderPageVC:(id)arg1 ;
-(void)_fetchPageWithUsername:(id)arg1 ;
-(void)_handleError;
-(id)initWithSession:(id)arg1 potentialUsername:(id)arg2 initialTab:(id)arg3 actionSource:(id)arg4 urlParams:(id)arg5 ;
-(void)viewDidLoad;
-(void)_handleResponse:(id)arg1 ;
@end
