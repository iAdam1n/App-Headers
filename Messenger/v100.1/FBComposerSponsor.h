/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerSponsor : FBValueObject <NSCopying, NSCoding> {

	BOOL _isVerified;
	NSString* _sponsorName;
	NSString* _sponsorId;

}

@property (nonatomic,copy,readonly) NSString * sponsorName;              //@synthesize sponsorName=_sponsorName - In the implementation block
@property (nonatomic,copy,readonly) NSString * sponsorId;                //@synthesize sponsorId=_sponsorId - In the implementation block
@property (nonatomic,readonly) BOOL isVerified;                          //@synthesize isVerified=_isVerified - In the implementation block
-(id)initWithSponsorName:(id)arg1 sponsorId:(id)arg2 isVerified:(BOOL)arg3 ;
-(NSString *)sponsorName;
-(NSString *)sponsorId;
-(BOOL)isVerified;
@end
