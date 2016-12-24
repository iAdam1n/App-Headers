/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBStringWithRedactedDescription, MNSecureOutgoingAttachmentContent;

@interface MNSecureOutgoingMessageContent : NSObject <NSCopying, NSCoding> {

	unsigned long long _subtype;
	FBStringWithRedactedDescription* _text;
	MNSecureOutgoingAttachmentContent* _attachment;

}
+(id)attachment:(id)arg1 ;
+(id)text:(id)arg1 ;
-(void)matchText:(/*^block*/id)arg1 attachment:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
