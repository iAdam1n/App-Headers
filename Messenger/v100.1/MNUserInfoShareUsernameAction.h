/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNUserInfoUpdateAction.h>

@protocol MNModalPresentation, MNUserInfoUpdateActionDelegate;
@class MNSettingsTabConfiguration, FBAnalytics, FBMUser, NSString;

@interface MNUserInfoShareUsernameAction : NSObject <FBClassProvidable, MNUserInfoUpdateAction> {

	MNSettingsTabConfiguration* _settingsTabConfiguration;
	id<MNModalPresentation> _modalPresenter;
	FBAnalytics* _analytics;
	FBMUser* _user;
	id<MNUserInfoUpdateActionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBMUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) id<MNUserInfoUpdateActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)presentWithSourceView:(id)arg1 ;
-(id)actionTitle;
-(id)initWithSettingsTabConfiguration:(id)arg1 modalPresenter:(id)arg2 analytics:(id)arg3 ;
-(void)_shareLinkWithSourceView:(id)arg1 ;
-(void)setDelegate:(id<MNUserInfoUpdateActionDelegate>)arg1 ;
-(id<MNUserInfoUpdateActionDelegate>)delegate;
-(BOOL)isAvailable;
-(FBMUser *)user;
-(void)setUser:(FBMUser *)arg1 ;
@end
