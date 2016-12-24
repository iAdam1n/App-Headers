/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNInboxRowKey, MNInboxRow, MNInboxImpressionLoggingData;

@interface MNKeyedInboxRow : FBValueObject <NSCopying> {

	BOOL _canHide;
	BOOL _canHideAll;
	MNInboxRowKey* _inboxRowKey;
	MNInboxRow* _inboxRow;
	MNInboxImpressionLoggingData* _inboxImpressionLoggingData;

}

@property (nonatomic,copy,readonly) MNInboxRowKey * inboxRowKey;                                            //@synthesize inboxRowKey=_inboxRowKey - In the implementation block
@property (nonatomic,copy,readonly) MNInboxRow * inboxRow;                                                  //@synthesize inboxRow=_inboxRow - In the implementation block
@property (nonatomic,copy,readonly) MNInboxImpressionLoggingData * inboxImpressionLoggingData;              //@synthesize inboxImpressionLoggingData=_inboxImpressionLoggingData - In the implementation block
@property (nonatomic,readonly) BOOL canHide;                                                                //@synthesize canHide=_canHide - In the implementation block
@property (nonatomic,readonly) BOOL canHideAll;                                                             //@synthesize canHideAll=_canHideAll - In the implementation block
-(MNInboxRow *)inboxRow;
-(MNInboxRowKey *)inboxRowKey;
-(BOOL)canHide;
-(BOOL)canHideAll;
-(MNInboxImpressionLoggingData *)inboxImpressionLoggingData;
-(id)initWithInboxRowKey:(id)arg1 inboxRow:(id)arg2 inboxImpressionLoggingData:(id)arg3 canHide:(BOOL)arg4 canHideAll:(BOOL)arg5 ;
@end
