/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMessageOutgoingAttachment, FBMessageAttachmentContext, FBMessageOutgoingAttribution;

@interface FBMessageOutgoingAttachmentPreparationInput : FBValueObject <NSCopying> {

	FBMessageOutgoingAttachment* _attachment;
	FBMessageAttachmentContext* _attachmentContext;
	FBMessageOutgoingAttribution* _outgoingAttribution;

}

@property (nonatomic,copy,readonly) FBMessageOutgoingAttachment * attachment;                        //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,copy,readonly) FBMessageAttachmentContext * attachmentContext;                  //@synthesize attachmentContext=_attachmentContext - In the implementation block
@property (nonatomic,copy,readonly) FBMessageOutgoingAttribution * outgoingAttribution;              //@synthesize outgoingAttribution=_outgoingAttribution - In the implementation block
-(FBMessageOutgoingAttribution *)outgoingAttribution;
-(id)initWithAttachment:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 ;
-(FBMessageOutgoingAttachment *)attachment;
-(FBMessageAttachmentContext *)attachmentContext;
@end
