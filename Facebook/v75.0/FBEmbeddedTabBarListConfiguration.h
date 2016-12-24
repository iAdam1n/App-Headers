/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEmbeddedTabConfiguration.h>

@class FBEmbeddedTabBarListControllerListenerAnnouncer;

@interface FBEmbeddedTabBarListConfiguration : FBEmbeddedTabConfiguration {

	BOOL _hasPTR;
	BOOL _prefetchTabsData;
	FBEmbeddedTabBarListControllerListenerAnnouncer* _tabBarAnnouncer;

}

@property (assign,nonatomic) BOOL hasPTR;                                                                    //@synthesize hasPTR=_hasPTR - In the implementation block
@property (nonatomic,retain) FBEmbeddedTabBarListControllerListenerAnnouncer * tabBarAnnouncer;              //@synthesize tabBarAnnouncer=_tabBarAnnouncer - In the implementation block
@property (assign,nonatomic) BOOL prefetchTabsData;                                                          //@synthesize prefetchTabsData=_prefetchTabsData - In the implementation block
+(id)configurationWithBlock:(/*^block*/id)arg1 ;
+(id)defaultConfiguration;
-(void)setHasPTR:(BOOL)arg1 ;
-(void)setTabBarAnnouncer:(FBEmbeddedTabBarListControllerListenerAnnouncer *)arg1 ;
-(void)setPrefetchTabsData:(BOOL)arg1 ;
-(BOOL)hasPTR;
-(FBEmbeddedTabBarListControllerListenerAnnouncer *)tabBarAnnouncer;
-(BOOL)prefetchTabsData;
@end
