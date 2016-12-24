/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNRoomSuggestionItemIdentifier, MNRoomSuggestionRow, MNInboxImpressionLoggingData;

@interface MNRoomSuggestionItemViewModel : FBValueObject <NSCopying> {

	MNRoomSuggestionItemIdentifier* _itemIdentifier;
	MNRoomSuggestionRow* _suggestionRow;
	MNInboxImpressionLoggingData* _loggingData;

}

@property (nonatomic,copy,readonly) MNRoomSuggestionItemIdentifier * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) MNRoomSuggestionRow * suggestionRow;                          //@synthesize suggestionRow=_suggestionRow - In the implementation block
@property (nonatomic,copy,readonly) MNInboxImpressionLoggingData * loggingData;                   //@synthesize loggingData=_loggingData - In the implementation block
-(MNRoomSuggestionRow *)suggestionRow;
-(MNInboxImpressionLoggingData *)loggingData;
-(id)initWithItemIdentifier:(id)arg1 suggestionRow:(id)arg2 loggingData:(id)arg3 ;
-(MNRoomSuggestionItemIdentifier *)itemIdentifier;
@end
