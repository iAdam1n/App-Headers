/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadRow, MNRoomThreadRow, MNRoomSuggestionRow;

@interface MNGroupRoomThreadRow : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNThreadRow* _groupThread;
	MNRoomThreadRow* _roomThread;
	MNRoomSuggestionRow* _roomSuggestion;

}
+(id)roomThread:(id)arg1 ;
+(id)groupThread:(id)arg1 ;
+(id)roomSuggestion:(id)arg1 ;
-(void)matchGroupThread:(/*^block*/id)arg1 roomThread:(/*^block*/id)arg2 roomSuggestion:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
