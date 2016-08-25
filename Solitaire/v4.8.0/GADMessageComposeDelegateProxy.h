/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MFMessageComposeViewControllerDelegate.h>

@protocol MFMessageComposeViewControllerDelegate;
@class MFMessageComposeViewController, NSString;

@interface GADMessageComposeDelegateProxy : NSObject <MFMessageComposeViewControllerDelegate> {

	GADMessageComposeDelegateProxy* _strongSelf;
	id<MFMessageComposeViewControllerDelegate> _messageComposeDelegate;
	MFMessageComposeViewController* _messageComposeViewController;

}

@property (assign,nonatomic,__weak) id<MFMessageComposeViewControllerDelegate> messageComposeDelegate;              //@synthesize messageComposeDelegate=_messageComposeDelegate - In the implementation block
@property (nonatomic,retain) MFMessageComposeViewController * messageComposeViewController;                         //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)associatedDelegateProxyForController:(id)arg1 ;
-(void)stopProxying;
-(id)init;
-(void)setMessageComposeDelegate:(id<MFMessageComposeViewControllerDelegate>)arg1 ;
-(void)setMessageComposeViewController:(MFMessageComposeViewController *)arg1 ;
-(MFMessageComposeViewController *)messageComposeViewController;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(id<MFMessageComposeViewControllerDelegate>)messageComposeDelegate;
-(id)initInternal;
@end

