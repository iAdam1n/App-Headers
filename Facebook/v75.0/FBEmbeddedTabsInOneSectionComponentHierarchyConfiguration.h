/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBEmbeddedTabBarListControllerListenerAnnouncer;

@interface FBEmbeddedTabsInOneSectionComponentHierarchyConfiguration : NSObject {

	FBUserSession* _session;
	FBEmbeddedTabBarListControllerListenerAnnouncer* _tabBarAnnouncer;

}

@property (nonatomic,readonly) FBUserSession * session;                                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBEmbeddedTabBarListControllerListenerAnnouncer * tabBarAnnouncer;              //@synthesize tabBarAnnouncer=_tabBarAnnouncer - In the implementation block
+(id)configurationWithSession:(id)arg1 tabBarAnnouncer:(id)arg2 ;
-(FBEmbeddedTabBarListControllerListenerAnnouncer *)tabBarAnnouncer;
-(FBUserSession *)session;
@end
