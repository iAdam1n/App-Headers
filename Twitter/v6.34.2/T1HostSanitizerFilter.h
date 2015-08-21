/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TNLHostSanitizer.h>

@class NSDictionary, NSRegularExpression, NSString;

@interface T1HostSanitizerFilter : NSObject <TNLHostSanitizer> {

	NSDictionary* _hostMap;
	NSRegularExpression* _whiteListExpression;
	BOOL _twitterAccessEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHostMap:(id)arg1 whitelistExpression:(id)arg2 twitterAccessEnabled:(BOOL)arg3 ;
-(void)host:(id)arg1 wasEncounteredForURLRequest:(id)arg2 asRedirect:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

