/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotSyncCloudController.h>

@class NSMutableDictionary;

@interface PTHTweetbotSyncCloudPositionController : PTHTweetbotSyncCloudController {

	NSMutableDictionary* _dirtyRecords;

}
-(long long)lastReadTIDForCursor:(id)arg1 ;
-(void)markCursorSynced:(id)arg1 ;
-(void)post:(/*^block*/id)arg1 ;
-(SCD_Struct_PT3)pendingSyncPositionForCursor:(id)arg1 ;
-(void)willStart;
-(void)didShutdown;
-(void)poll:(/*^block*/id)arg1 ;
-(void)receivedQueryNotification:(id)arg1 ;
-(void)_cursorWasScrolled:(id)arg1 ;
-(id)syncIdentifierForCursorUniqueID:(id)arg1 ;
-(void)setSyncIdentifier:(id)arg1 forCursorUniqueID:(id)arg2 ;
-(SCD_Struct_PT3)pendingSyncPositionForCursorUniqueID:(id)arg1 ;
-(long long)lastReadTIDForCursorUniqueID:(id)arg1 ;
-(void)setPendingSyncPosition:(SCD_Struct_PT3)arg1 forCursorUniqueID:(id)arg2 ;
-(void)setLastReadTID:(long long)arg1 forCursorUniqueID:(id)arg2 ;
-(void)_processRecordName:(id)arg1 recordFields:(id)arg2 ;
-(id)notificationInfo;
-(id)recordType;
@end
