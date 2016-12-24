/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBUserAgentFormatting.h>

@class NSString, FBLocaleMap;

@interface FBUserAgentFormatter : NSObject <FBUserAgentFormatting> {

	NSString* _appName;
	FBLocaleMap* _localeMap;
	NSString* _reactBundleVersion;
	NSString* _cachedUserAgent;
	mutex _lock;

}

@property (copy) NSString * reactBundleVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formattedUserAgent;
-(id)initWithAppName:(id)arg1 localeMap:(id)arg2 ;
-(NSString *)reactBundleVersion;
-(void)setReactBundleVersion:(NSString *)arg1 ;
@end
