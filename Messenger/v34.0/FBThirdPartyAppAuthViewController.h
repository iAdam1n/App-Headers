/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBAuthenticationViewControlling.h>

@protocol FBAuthenticationViewConfiguration;
@class NSString, FBThirdPartyAppAuthController;

@interface FBThirdPartyAppAuthViewController : UIViewController <FBAuthenticationViewControlling> {

	id<FBAuthenticationViewConfiguration> _configuration;
	NSString* _accessToken;
	FBThirdPartyAppAuthController* _thirdPartyAppAuthController;
	/*^block*/id _thirdPartyAppAuthSuccessBlock;
	/*^block*/id _thirdPartyAppAuthFailureBlock;

}

@property (nonatomic,copy) id thirdPartyAppAuthSuccessBlock;                                  //@synthesize thirdPartyAppAuthSuccessBlock=_thirdPartyAppAuthSuccessBlock - In the implementation block
@property (nonatomic,copy) id thirdPartyAppAuthFailureBlock;                                  //@synthesize thirdPartyAppAuthFailureBlock=_thirdPartyAppAuthFailureBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBAuthenticatingView> authenticationView; 
-(id)analyticsModule;
-(UIView*<FBAuthenticatingView>)authenticationView;
-(id)initWithAccessToken:(id)arg1 viewConfiguration:(id)arg2 requesterConfiguration:(id)arg3 ;
-(id)thirdPartyAppAuthSuccessBlock;
-(void)setThirdPartyAppAuthSuccessBlock:(id)arg1 ;
-(id)thirdPartyAppAuthFailureBlock;
-(void)setThirdPartyAppAuthFailureBlock:(id)arg1 ;
-(id)init;
-(BOOL)openURL:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

