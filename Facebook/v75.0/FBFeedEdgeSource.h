/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBFeedEdgeSource : FBValueObject <NSCopying> {

	NSString* _loadRequestUUID;
	NSString* _responseUUID;

}

@property (nonatomic,copy,readonly) NSString * loadRequestUUID;              //@synthesize loadRequestUUID=_loadRequestUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseUUID;                 //@synthesize responseUUID=_responseUUID - In the implementation block
-(NSString *)responseUUID;
-(NSString *)loadRequestUUID;
-(id)initWithLoadRequestUUID:(id)arg1 responseUUID:(id)arg2 ;
@end
