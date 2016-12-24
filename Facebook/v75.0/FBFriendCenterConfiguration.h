/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBFriendCenterConfiguration : NSObject {

	NSArray* _menuItems;
	unsigned long long _initialMenuItem;

}

@property (nonatomic,copy) NSArray * menuItems;                               //@synthesize menuItems=_menuItems - In the implementation block
@property (assign,nonatomic) unsigned long long initialMenuItem;              //@synthesize initialMenuItem=_initialMenuItem - In the implementation block
+(id)configurationForFriendCenterWithSession:(id)arg1 initialMenuItem:(unsigned long long)arg2 ;
+(id)_prioritizeMenuItems:(id)arg1 ;
+(BOOL)_showQRCodeInFriendCenter:(id)arg1 ;
+(id)configurationForFriendCenterWithSession:(id)arg1 ;
-(void)setInitialMenuItem:(unsigned long long)arg1 ;
-(unsigned long long)initialMenuItem;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
@end
