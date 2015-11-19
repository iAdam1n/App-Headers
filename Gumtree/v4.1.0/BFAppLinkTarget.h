/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
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
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
@end
