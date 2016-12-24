/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebViewControllerDelegate.h>
#import <Messenger/FBModalWebFlowDelegate.h>

@protocol FBPaymentsNavigationDelegate;
@class FBUserSession, FBPaymentsThreeDomainSecureRedirectModel, NSString;

@interface FBPaymentsThreeDomainSecureWebViewHandler : NSObject <FBWebViewControllerDelegate, FBModalWebFlowDelegate> {

	FBUserSession* _session;
	FBPaymentsThreeDomainSecureRedirectModel* _dataModel;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(void)webViewController:(id)arg1 webViewURLChanged:(id)arg2 ;
-(void)handleThreeDomainSecureWithRedirectDataModel:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(id)initWithSession:(id)arg1 ;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end
