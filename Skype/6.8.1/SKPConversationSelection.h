//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPSelection.h"

@class NSString;

@interface SKPConversationSelection : SKPSelection
{
    NSString *_conversationIdentity;
    id _contactsMetaData;
    id _timelineMetaData;
}

+ (id)selectionWithConversationIdentity:(id)arg1;
@property(retain, nonatomic) id timelineMetaData; // @synthesize timelineMetaData=_timelineMetaData;
@property(retain, nonatomic) id contactsMetaData; // @synthesize contactsMetaData=_contactsMetaData;
@property(readonly, nonatomic) NSString *conversationIdentity; // @synthesize conversationIdentity=_conversationIdentity;
- (void).cxx_destruct;
- (id)firstLevelDescription;
- (_Bool)isFirstLevelEqualToSelection:(id)arg1;
- (id)newSelectionWithConversationIdentity:(id)arg1;
- (id)initWithConversationIdentity:(id)arg1;

@end
