/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface PTHTweetbotBrowserLauncher : NSObject {

	NSString* _name;
	NSString* _scheme;
	NSString* _launchURLString;

}

@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * scheme;                       //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy) NSString * launchURLString;              //@synthesize launchURLString=_launchURLString - In the implementation block
+(id)availableBrowserLaunchers;
+(id)defaultBrowserName;
+(id)defaultBrowserLauncher;
+(id)browserLauncherWithScheme:(id)arg1 ;
+(void)openURL:(id)arg1 ;
-(void)setLaunchURLString:(NSString *)arg1 ;
-(NSString *)launchURLString;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)scheme;
-(void)openURL:(id)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
@end

