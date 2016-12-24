/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface MNIndexedSecureMessageSet : NSObject <NSFastEnumeration, NSCopying> {

	NSDictionary* _messageIdToMessageMap;
	NSArray* _messagesInNormalizedOrder;

}
-(id)newestMessage;
-(id)oldestMessage;
-(id)initWithMessageIdMap:(id)arg1 messagesInNormalizedOrder:(id)arg2 ;
-(id)messageById:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_FB110*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
