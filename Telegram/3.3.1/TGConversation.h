//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "PSCoding.h"

@class NSArray, NSData, NSDictionary, NSString, TGConversationParticipantsData, TGEncryptedConversationData;

@interface TGConversation : NSObject <NSCopying, PSCoding>
{
    unsigned char _kind;
    _Bool _outgoing;
    _Bool _unread;
    _Bool _deliveryError;
    _Bool _leftChat;
    _Bool _kickedFromChat;
    _Bool _chatIsAdmin;
    _Bool _channelIsReadOnly;
    _Bool _isChat;
    _Bool _isDeleted;
    _Bool _isBroadcast;
    _Bool _isChannel;
    _Bool _isMigrated;
    int _displayVariant;
    int _pts;
    int _maxReadMessageId;
    int _deliveryState;
    int _date;
    int _fromUid;
    int _unreadCount;
    int _serviceUnreadCount;
    int _chatParticipantCount;
    int _channelRole;
    int _chatVersion;
    int _migratedToChannelId;
    long long _conversationId;
    long long _accessHash;
    NSString *_about;
    NSString *_username;
    id _additionalProperties;
    NSString *_text;
    NSArray *_media;
    NSData *_mediaData;
    NSString *_chatTitle;
    NSString *_chatPhotoSmall;
    NSString *_chatPhotoMedium;
    NSString *_chatPhotoBig;
    TGConversationParticipantsData *_chatParticipants;
    NSDictionary *_dialogListData;
    long long _migratedToChannelAccessHash;
    long long _flags;
    TGEncryptedConversationData *_encryptedData;
    CDStruct_8c593122 _variantSortKey;
    CDStruct_8c593122 _importantSortKey;
    CDStruct_8c593122 _unimportantSortKey;
}

+ (id)chatTitleForDecoder:(id)arg1;
@property(retain, nonatomic) TGEncryptedConversationData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(nonatomic) long long flags; // @synthesize flags=_flags;
@property(nonatomic) long long migratedToChannelAccessHash; // @synthesize migratedToChannelAccessHash=_migratedToChannelAccessHash;
@property(nonatomic) int migratedToChannelId; // @synthesize migratedToChannelId=_migratedToChannelId;
@property(nonatomic) _Bool isMigrated; // @synthesize isMigrated=_isMigrated;
@property(nonatomic) _Bool isChannel; // @synthesize isChannel=_isChannel;
@property(nonatomic) _Bool isBroadcast; // @synthesize isBroadcast=_isBroadcast;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) _Bool isChat; // @synthesize isChat=_isChat;
@property(retain, nonatomic) NSDictionary *dialogListData; // @synthesize dialogListData=_dialogListData;
@property(retain, nonatomic) TGConversationParticipantsData *chatParticipants; // @synthesize chatParticipants=_chatParticipants;
@property(nonatomic) _Bool channelIsReadOnly; // @synthesize channelIsReadOnly=_channelIsReadOnly;
@property(nonatomic) _Bool chatIsAdmin; // @synthesize chatIsAdmin=_chatIsAdmin;
@property(nonatomic) int chatVersion; // @synthesize chatVersion=_chatVersion;
@property(nonatomic) int channelRole; // @synthesize channelRole=_channelRole;
@property(nonatomic) _Bool kickedFromChat; // @synthesize kickedFromChat=_kickedFromChat;
@property(nonatomic) _Bool leftChat; // @synthesize leftChat=_leftChat;
@property(nonatomic) int chatParticipantCount; // @synthesize chatParticipantCount=_chatParticipantCount;
@property(retain, nonatomic) NSString *chatPhotoBig; // @synthesize chatPhotoBig=_chatPhotoBig;
@property(retain, nonatomic) NSString *chatPhotoMedium; // @synthesize chatPhotoMedium=_chatPhotoMedium;
@property(retain, nonatomic) NSString *chatPhotoSmall; // @synthesize chatPhotoSmall=_chatPhotoSmall;
@property(retain, nonatomic) NSString *chatTitle; // @synthesize chatTitle=_chatTitle;
@property(nonatomic) int serviceUnreadCount; // @synthesize serviceUnreadCount=_serviceUnreadCount;
@property(nonatomic) int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) NSData *mediaData; // @synthesize mediaData=_mediaData;
@property(retain, nonatomic) NSArray *media; // @synthesize media=_media;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int fromUid; // @synthesize fromUid=_fromUid;
@property(nonatomic) int date; // @synthesize date=_date;
@property(nonatomic) int deliveryState; // @synthesize deliveryState=_deliveryState;
@property(nonatomic) _Bool deliveryError; // @synthesize deliveryError=_deliveryError;
@property(nonatomic) _Bool unread; // @synthesize unread=_unread;
@property(nonatomic) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(retain, nonatomic) id additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *about; // @synthesize about=_about;
@property(nonatomic) int maxReadMessageId; // @synthesize maxReadMessageId=_maxReadMessageId;
@property(nonatomic) int pts; // @synthesize pts=_pts;
@property(nonatomic) CDStruct_8c593122 unimportantSortKey; // @synthesize unimportantSortKey=_unimportantSortKey;
@property(nonatomic) CDStruct_8c593122 importantSortKey; // @synthesize importantSortKey=_importantSortKey;
@property(nonatomic) CDStruct_8c593122 variantSortKey; // @synthesize variantSortKey=_variantSortKey;
@property(nonatomic) unsigned char kind; // @synthesize kind=_kind;
@property(nonatomic) int displayVariant; // @synthesize displayVariant=_displayVariant;
@property(nonatomic) long long accessHash; // @synthesize accessHash=_accessHash;
@property(nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDeactivated;
@property(nonatomic) _Bool isChannelGroup;
@property(nonatomic) _Bool isCreator;
@property(nonatomic) _Bool isAdmin;
@property(nonatomic) _Bool hasAdmins;
@property(nonatomic) _Bool hasExplicitContent;
@property(nonatomic) _Bool isVerified;
@property(nonatomic) _Bool displayExpanded;
@property(nonatomic) _Bool postAsChannel;
- (_Bool)currentUserCanSendMessages;
- (void)mergeChannel:(id)arg1;
- (_Bool)isEncrypted;
- (void)deserializeChatPhoto:(id)arg1;
- (id)serializeChatPhoto;
- (_Bool)isEqualToConversationIgnoringMessage:(id)arg1;
- (_Bool)isEqualToConversation:(id)arg1;
- (void)mergeMessage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithKeyValueCoder:(id)arg1;
- (id)initWithKeyValueCoder:(id)arg1;
- (id)initWithConversationId:(long long)arg1 unreadCount:(int)arg2 serviceUnreadCount:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
