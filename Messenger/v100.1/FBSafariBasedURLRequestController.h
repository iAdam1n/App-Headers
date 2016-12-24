/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/SFSafariViewControllerDelegate.h>

@protocol FBSafariBasedURLRequestControllerDelegate;
@class SFSafariViewController, UIViewController, NSURL, NSString;

@interface FBSafariBasedURLRequestController : NSObject <SFSafariViewControllerDelegate> {

	SFSafariViewController* _safariViewController;
	UIViewController* _containerViewController;
	NSURL* _requestURL;
	id<FBSafariBasedURLRequestControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSafariBasedURLRequestControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContainerViewController:(id)arg1 requestURL:(id)arg2 ;
-(void)setDelegate:(id<FBSafariBasedURLRequestControllerDelegate>)arg1 ;
-(id<FBSafariBasedURLRequestControllerDelegate>)delegate;
-(void)startRequest;
-(void)safariViewController:(id)arg1 didCompleteInitialLoad:(BOOL)arg2 ;
@end
