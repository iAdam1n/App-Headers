/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebViewControllerDelegate.h>

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
-(id)initWithSession:(id)arg1 presenter:(id)arg2 ;
-(void)loadCheckpointWebViewWithUrl:(id)arg1 ;
-(void)webViewController:(id)arg1 loadingChanged:(BOOL)arg2 ;
-(void)startListeningForLoggedInCheckpoint;
-(void)stopListeningForLoggedInCheckpoint;
-(void)_handleNonBlockingCheckpointNotification:(id)arg1 ;
-(void)_handleBlockingCheckpointNotification:(id)arg1 ;
-(void)_loadCheckpointWebViewAsBlocking:(BOOL)arg1 url:(id)arg2 ;
-(void)_unenrollFromCheckpoint;
-(void)_loadCheckpointWebViewAsBlocking:(BOOL)arg1 ;
-(void)_handleWebViewRefreshButton:(id)arg1 ;
-(void)dealloc;
@end
