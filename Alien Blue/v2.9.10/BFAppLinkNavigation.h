/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(void)setExtras:(NSDictionary *)arg1 ;
-(void)setAppLinkData:(NSDictionary *)arg1 ;
-(NSDictionary *)appLinkData;
-(NSDictionary *)extras;
-(id)stringByEscapingQueryString:(id)arg1 ;
-(id)appLinkURLWithTargetURL:(id)arg1 error:(id*)arg2 ;
-(void)postAppLinkNavigateEventNotificationWithTargetURL:(id)arg1 error:(id)arg2 type:(long long)arg3 ;
-(long long)navigate:(id*)arg1 ;
-(void)setAppLink:(BFAppLink *)arg1 ;
-(BFAppLink *)appLink;
@end

