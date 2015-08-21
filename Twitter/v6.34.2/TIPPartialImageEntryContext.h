/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TIPImageCacheEntryContext.h>

@class NSString;

@interface TIPPartialImageEntryContext : TIPImageCacheEntryContext {

	unsigned long long _expectedContentLength;
	NSString* _lastModified;

}

@property (assign,nonatomic) unsigned long long expectedContentLength;              //@synthesize expectedContentLength=_expectedContentLength - In the implementation block
@property (nonatomic,copy) NSString * lastModified;                                 //@synthesize lastModified=_lastModified - In the implementation block
-(id)initWithCacheEntryContext:(id)arg1 ;
-(void)setLastModified:(NSString *)arg1 ;
-(void)setExpectedContentLength:(unsigned long long)arg1 ;
-(unsigned long long)expectedContentLength;
-(NSString *)lastModified;
@end

