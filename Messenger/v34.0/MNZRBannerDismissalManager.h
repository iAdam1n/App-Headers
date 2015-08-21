/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>

@class NSMutableArray, MNUserSettings, NSString;

@interface MNZRBannerDismissalManager : NSObject <FBSessionClassProvidable> {

	NSMutableArray* _dismissedBannerHashes;
	MNUserSettings* _userSettings;

}

@property (nonatomic,retain) NSMutableArray * dismissedBannerHashes;              //@synthesize dismissedBannerHashes=_dismissedBannerHashes - In the implementation block
@property (nonatomic,retain) MNUserSettings * userSettings;                       //@synthesize userSettings=_userSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithUserSettings:(id)arg1 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(BOOL)hasUserDismissedBanner:(id)arg1 ;
-(void)userDismissedBanner:(id)arg1 ;
-(void)setDismissedBannerHashes:(NSMutableArray *)arg1 ;
-(void)_shrinkBannerHashArrayIfNeeded;
-(NSMutableArray *)dismissedBannerHashes;
-(void)clear;
-(MNUserSettings *)userSettings;
@end

