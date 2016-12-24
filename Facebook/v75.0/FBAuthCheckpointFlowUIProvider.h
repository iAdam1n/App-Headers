/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthCheckpointFlowUIProviding.h>
#import <Facebook/FBAuthSpinnerUIProviding.h>

@protocol FBAuthViewConfiguring;
@class NSString;

@interface FBAuthCheckpointFlowUIProvider : NSObject <FBAuthCheckpointFlowUIProviding, FBAuthSpinnerUIProviding> {

	id<FBAuthViewConfiguring> _configuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)spinnerControllerWithLabelText:(id)arg1 ;
-(id)loginApprovalsViewControllerWithUserInfo:(id)arg1 ;
-(id)checkpointWebViewControllerWithCheckpointUrl:(id)arg1 checkpointInfo:(id)arg2 uiPresenter:(id)arg3 ;
-(id)loginApprovalsViewController;
-(id)initWithConfiguration:(id)arg1 ;
@end
