/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNThreadMarkRunnerAction : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	unsigned long long _read_watermarkTimestamp;
	BOOL _read_shouldSendReadReceipt;

}
+(id)markAsImportant;
+(id)markAsNotImportant;
+(id)moveOutOfSpam;
+(id)moveToSpam;
+(id)readWithWatermarkTimestamp:(unsigned long long)arg1 shouldSendReadReceipt:(BOOL)arg2 ;
+(id)unread;
+(id)archive;
+(id)unarchive;
-(void)matchArchive:(/*^block*/id)arg1 unarchive:(/*^block*/id)arg2 moveToSpam:(/*^block*/id)arg3 moveOutOfSpam:(/*^block*/id)arg4 markAsImportant:(/*^block*/id)arg5 markAsNotImportant:(/*^block*/id)arg6 unread:(/*^block*/id)arg7 read:(/*^block*/id)arg8 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
