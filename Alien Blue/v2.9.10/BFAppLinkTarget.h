/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
@end

