/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessage, MNTextAndAttachmentForwardContent;

@interface MNForwardContent : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMMessage* _sentMessage;
	MNTextAndAttachmentForwardContent* _composedContent;

}
+(id)sentMessage:(id)arg1 ;
+(id)composedContent:(id)arg1 ;
-(void)matchSentMessage:(/*^block*/id)arg1 composedContent:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
