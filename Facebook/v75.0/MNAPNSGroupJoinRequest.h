/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMGroupThreadKey, NSArray, FBStringWithRedactedDescription;

@interface MNAPNSGroupJoinRequest : FBValueObject <NSCopying> {

	FBMGroupThreadKey* _groupThreadKey;
	NSArray* _senderIds;
	FBStringWithRedactedDescription* _text;

}

@property (nonatomic,copy,readonly) FBMGroupThreadKey * groupThreadKey;                  //@synthesize groupThreadKey=_groupThreadKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * senderIds;                                 //@synthesize senderIds=_senderIds - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * text;              //@synthesize text=_text - In the implementation block
-(id)initWithGroupThreadKey:(id)arg1 senderIds:(id)arg2 text:(id)arg3 ;
-(FBMGroupThreadKey *)groupThreadKey;
-(NSArray *)senderIds;
-(FBStringWithRedactedDescription *)text;
@end
