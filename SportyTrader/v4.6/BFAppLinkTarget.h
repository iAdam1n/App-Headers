/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSURL, NSString;

@interface BFAppLinkTarget : NSObject {

	NSURL* _URL;
	NSString* _appStoreId;
	NSString* _appName;

}

@property (nonatomic,retain) NSURL * URL;                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * appStoreId;              //@synthesize appStoreId=_appStoreId - In the implementation block
@property (nonatomic,copy) NSString * appName;                 //@synthesize appName=_appName - In the implementation block
+(id)appLinkTargetWithURL:(id)arg1 appStoreId:(id)arg2 appName:(id)arg3 ;
-(void)setAppStoreId:(NSString *)arg1 ;
-(NSString *)appStoreId;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
@end

