/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface MNIndexedAppMessageSet : NSObject <NSFastEnumeration, NSCopying> {

	NSDictionary* _messageKeyToMessageMap;
	NSArray* _messagesInNormalizedOrder;

}
+(id)emtpySet;
-(id)initWithMessageKeyMap:(id)arg1 messagesInNormalizedOrder:(id)arg2 ;
-(id)oldestMessage;
-(id)newestMessage;
-(id)messageByKey:(id)arg1 ;
-(id)chronologicalEnumerator;
-(id)reverseChronologicalEnumerator;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_FB467*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
