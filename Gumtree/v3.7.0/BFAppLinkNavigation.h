/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, BFAppLink;

@interface BFAppLinkNavigation : NSObject {

	NSDictionary* _extras;
	NSDictionary* _appLinkData;
	BFAppLink* _appLink;

}

@property (nonatomic,copy) NSDictionary * extras;                   //@synthesize extras=_extras - In the implementation block
@property (nonatomic,copy) NSDictionary * appLinkData;              //@synthesize appLinkData=_appLinkData - In the implementation block
@property (nonatomic,retain) BFAppLink * appLink;                   //@synthesize appLink=_appLink - In the implementation block
+(id)defaultResolver;
+(id)resolveAppLinkInBackground:(id)arg1 resolver:(id)arg2 ;
+(id)navigateToURLInBackground:(id)arg1 resolver:(id)arg2 ;
+(long long)navigateToAppLink:(id)arg1 error:(id*)arg2 ;
+(id)navigationWithAppLink:(id)arg1 extras:(id)arg2 appLinkData:(id)arg3 ;
+(id)resolveAppLinkInBackground:(id)arg1 ;
+(id)navigateToURLInBackground:(id)arg1 ;
+(void)setDefaultResolver:(id)arg1 ;
-(void)setAppLink:(BFAppLink *)arg1 ;
-(void)setExtras:(NSDictionary *)arg1 ;
-(void)setAppLinkData:(NSDictionary *)arg1 ;
-(NSDictionary *)appLinkData;
-(BFAppLink *)appLink;
-(NSDictionary *)extras;
-(id)stringByEscapingQueryString:(id)arg1 ;
-(id)appLinkURLWithTargetURL:(id)arg1 error:(id*)arg2 ;
-(void)postAppLinkNavigateEventNotificationWithTargetURL:(id)arg1 error:(id)arg2 type:(long long)arg3 ;
-(long long)navigate:(id*)arg1 ;
@end

