/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMMontageAudience;

@interface MNMontageThreadMetadata : FBValueObject <NSCopying> {

	NSString* _authorId;
	unsigned long long _timestamp;
	FBMMontageAudience* _audience;

}

@property (nonatomic,copy,readonly) NSString * authorId;                        //@synthesize authorId=_authorId - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) FBMMontageAudience * audience;              //@synthesize audience=_audience - In the implementation block
-(id)initWithAuthorId:(id)arg1 timestamp:(unsigned long long)arg2 audience:(id)arg3 ;
-(unsigned long long)timestamp;
-(FBMMontageAudience *)audience;
-(NSString *)authorId;
@end
