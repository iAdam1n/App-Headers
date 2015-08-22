/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class FBMStringWithRedactedDescription, NSArray, FBMessageOutgoingAttribution, FBMMessage;

@interface FBOutgoingMessageContent : NSObject <NSCopying, NSCoding> {

	unsigned long long _subtype;
	FBMStringWithRedactedDescription* _composed_text;
	NSArray* _composed_outgoingAttachments;
	FBMessageOutgoingAttribution* _composed_outgoingAttribution;
	FBMMessage* _forwarded_originalMessage;
	FBMStringWithRedactedDescription* _forwardedAttachment_text;
	NSArray* _forwardedAttachment_singleAttachmentWrapper;
	FBMessageOutgoingAttribution* _forwardedAttachment_outgoingAttribution;

}
+(id)composedWithText:(id)arg1 outgoingAttachments:(id)arg2 outgoingAttribution:(id)arg3 ;
+(id)forwardedAttachmentWithText:(id)arg1 singleAttachmentWrapper:(id)arg2 outgoingAttribution:(id)arg3 ;
+(id)forwardedWithOriginalMessage:(id)arg1 ;
-(void)matchComposed:(/*^block*/id)arg1 forwarded:(/*^block*/id)arg2 forwardedAttachment:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
