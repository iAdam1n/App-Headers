/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/CKComponentSizeRangeProviding.h>
#import <Facebook/CKComponentHostingViewDelegate.h>

@class CKComponentHostingView, FBMemNegativeFeedbackMessageAction, FBRapidReportingToolbox, NSString;

@interface FBRapidReportingMessageViewController : UIViewController <CKComponentProvider, CKComponentSizeRangeProviding, CKComponentHostingViewDelegate> {

	CKComponentHostingView* _componentHost;
	FBMemNegativeFeedbackMessageAction* _messageAction;
	FBRapidReportingToolbox* _toolbox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(CKSizeRange)sizeRangeForBoundingSize:(CGSize)arg1 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(id)initWithMessageAction:(id)arg1 toolbox:(id)arg2 ;
-(void)loadView;
-(void)_updateLayout;
@end
