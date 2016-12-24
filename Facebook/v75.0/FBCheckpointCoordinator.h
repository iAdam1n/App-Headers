/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWebViewControllerDelegate.h>

@protocol FBLoggedInCheckpointPresenting;
@class NSString, FBUserSession, FBWebViewController;

@interface FBCheckpointCoordinator : NSObject <FBWebViewControllerDelegate> {

	NSString* _currentCheckpointID;
	FBUserSession* _session;
	id<FBLoggedInCheckpointPresenting> _presenter;
	FBWebViewController* _loadingWebViewController;
	FBWebViewController* _checkpointWebViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webViewController:(id)arg1 loadingChanged:(BOOL)arg2 ;
-(id)initWithSession:(id)arg1 presenter:(id)arg2 ;
-(void)startListeningForLoggedInCheckpoint;
-(void)_handleNonBlockingCheckpointNotification:(id)arg1 ;
-(void)_handleBlockingCheckpointNotification:(id)arg1 ;
-(void)_loadCheckpointWebViewAsBlocking:(BOOL)arg1 url:(id)arg2 ;
-(void)_unenrollFromCheckpoint;
-(void)_loadCheckpointWebViewAsBlocking:(BOOL)arg1 ;
-(void)_handleWebViewRefreshButton:(id)arg1 ;
-(void)stopListeningForLoggedInCheckpoint;
-(void)loadCheckpointWebViewWithUrl:(id)arg1 ;
-(void)dealloc;
@end
