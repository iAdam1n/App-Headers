/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/_SLKComment.h>
#import <Slack/SLKMessageGenerics.h>

@class NSString, NSDate, NSNumber, SLKUser, SLKChannel, SLKFile, NSArray, SLKCallRoom, NSSet, NSManagedObjectID, NSManagedObjectContext, SLKStar, SLKPin;

@interface SLKComment : _SLKComment <SLKMessageGenerics> {

	BOOL _isIntegrationBotMessage;
	BOOL _isJoinOrLeaveMessage;
	BOOL _isFileMessage;
	BOOL _isBotMessage;
	BOOL _isTopicMessage;
	BOOL _isBotNotification;
	BOOL _isCallMessage;
	BOOL _isDeletedFileMessage;
	BOOL _isJoinMessage;
	BOOL _isLeaveMessage;
	NSArray* _reactions;
	NSNumber* _isMention;
	NSString* _ignoreIfAttachmentsSupported;
	unsigned long long _deliveryStatus;
	NSDate* _createdAt;
	NSString* _typeString;
	NSNumber* _timestampNumber;
	NSNumber* _isHidden;
	NSString* _channelId;
	NSString* _accessibilityLabel;
	NSString* _replyId;
	NSString* _subtypeString;
	NSNumber* _canBeUnread;
	NSNumber* _upload;
	NSString* _deletedTimestamp;
	NSString* _username;
	NSString* _image72Url;
	NSString* _image64Url;
	NSString* _image48Url;
	NSString* _botId;
	NSString* _emojiUrl;
	unsigned long long _subtype;
	NSNumber* _ephemeral;
	NSString* _text;
	SLKFile* _file;
	NSString* _userId;
	NSString* _timestamp;
	NSString* _inviter;
	SLKChannel* _channel;
	NSString* _threadTimestamp;
	NSNumber* _replyCount;
	NSNumber* _subscribed;
	NSString* _name;

}

@property (assign,nonatomic) unsigned long long deliveryStatus;                            //@synthesize deliveryStatus=_deliveryStatus - In the implementation block
@property (nonatomic,retain) NSDate * createdAt;                                           //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) BOOL canEdit; 
@property (nonatomic,readonly) BOOL canDelete; 
@property (nonatomic,retain) NSNumber * isMention;                                         //@synthesize isMention=_isMention - In the implementation block
@property (nonatomic,readonly) SLKUser * user; 
@property (nonatomic,retain) SLKFile * file;                                               //@synthesize file=_file - In the implementation block
@property (nonatomic,retain) NSString * channelId;                                         //@synthesize channelId=_channelId - In the implementation block
@property (nonatomic,retain) NSString * replyId;                                           //@synthesize replyId=_replyId - In the implementation block
@property (nonatomic,retain) NSNumber * ephemeral;                                         //@synthesize ephemeral=_ephemeral - In the implementation block
@property (nonatomic,retain) NSNumber * canBeUnread;                                       //@synthesize canBeUnread=_canBeUnread - In the implementation block
@property (nonatomic,retain) NSString * typeString;                                        //@synthesize typeString=_typeString - In the implementation block
@property (nonatomic,readonly) BOOL isTopicMessage;                                        //@synthesize isTopicMessage=_isTopicMessage - In the implementation block
@property (nonatomic,readonly) BOOL isJoinOrLeaveMessage;                                  //@synthesize isJoinOrLeaveMessage=_isJoinOrLeaveMessage - In the implementation block
@property (nonatomic,retain) NSString * botId;                                             //@synthesize botId=_botId - In the implementation block
@property (nonatomic,retain) NSString * image48Url;                                        //@synthesize image48Url=_image48Url - In the implementation block
@property (nonatomic,retain) NSString * image64Url;                                        //@synthesize image64Url=_image64Url - In the implementation block
@property (nonatomic,retain) NSString * image72Url;                                        //@synthesize image72Url=_image72Url - In the implementation block
@property (nonatomic,retain) NSString * ignoreIfAttachmentsSupported;                      //@synthesize ignoreIfAttachmentsSupported=_ignoreIfAttachmentsSupported - In the implementation block
@property (nonatomic,retain) NSString * emojiUrl;                                          //@synthesize emojiUrl=_emojiUrl - In the implementation block
@property (nonatomic,retain) NSString * subtypeString;                                     //@synthesize subtypeString=_subtypeString - In the implementation block
@property (nonatomic,retain) NSString * username;                                          //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSNumber * isHidden;                                          //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,readonly) BOOL isBotNotification;                                     //@synthesize isBotNotification=_isBotNotification - In the implementation block
@property (nonatomic,readonly) BOOL isBotMessage;                                          //@synthesize isBotMessage=_isBotMessage - In the implementation block
@property (nonatomic,readonly) BOOL isIntegrationBotMessage;                               //@synthesize isIntegrationBotMessage=_isIntegrationBotMessage - In the implementation block
@property (nonatomic,readonly) BOOL isFileMessage;                                         //@synthesize isFileMessage=_isFileMessage - In the implementation block
@property (nonatomic,retain) NSNumber * timestampNumber;                                   //@synthesize timestampNumber=_timestampNumber - In the implementation block
@property (nonatomic,retain) NSString * deletedTimestamp;                                  //@synthesize deletedTimestamp=_deletedTimestamp - In the implementation block
@property (nonatomic,retain) NSNumber * upload;                                            //@synthesize upload=_upload - In the implementation block
@property (nonatomic,retain) NSArray * reactions;                                          //@synthesize reactions=_reactions - In the implementation block
@property (assign,nonatomic) unsigned long long subtype;                                   //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) BOOL isPending; 
@property (nonatomic,readonly) BOOL hasReactions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * tsid; 
@property (nonatomic,readonly) NSString * predicateKey; 
@property (nonatomic,readonly) unsigned long long contextType; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain) NSNumber * starred; 
@property (nonatomic,readonly) BOOL isStarred; 
@property (nonatomic,readonly) SLKStar * star; 
@property (nonatomic,retain) NSNumber * pinned; 
@property (nonatomic,readonly) BOOL isPinned; 
@property (nonatomic,readonly) SLKPin * pin; 
@property (nonatomic,retain) id reactionsBlob; 
@property (nonatomic,retain) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * timestamp;                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL isEdited; 
@property (nonatomic,retain) NSString * userId;                                            //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) SLKChannel * channel;                                         //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) NSString * editedTimestamp; 
@property (nonatomic,retain) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * threadTimestamp;                                   //@synthesize threadTimestamp=_threadTimestamp - In the implementation block
@property (nonatomic,retain) NSNumber * replyCount;                                        //@synthesize replyCount=_replyCount - In the implementation block
@property (nonatomic,retain) id repliesBlob; 
@property (nonatomic,retain) NSNumber * subscribed;                                        //@synthesize subscribed=_subscribed - In the implementation block
@property (nonatomic,retain) NSString * inviter;                                           //@synthesize inviter=_inviter - In the implementation block
@property (nonatomic,readonly) BOOL isJoinMessage;                                         //@synthesize isJoinMessage=_isJoinMessage - In the implementation block
@property (nonatomic,readonly) BOOL isLeaveMessage;                                        //@synthesize isLeaveMessage=_isLeaveMessage - In the implementation block
@property (nonatomic,readonly) BOOL isCallMessage;                                         //@synthesize isCallMessage=_isCallMessage - In the implementation block
@property (nonatomic,readonly) BOOL isReply; 
@property (nonatomic,readonly) BOOL isDeletedFileMessage;                                  //@synthesize isDeletedFileMessage=_isDeletedFileMessage - In the implementation block
@property (nonatomic,retain) SLKCallRoom * callRoom; 
@property (nonatomic,retain) NSString * accessibilityLabel;                                //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,retain) NSSet * outOfChannelMentions; 
@property (nonatomic,retain) NSString * commentId; 
@property (nonatomic,retain) SLKComment * comment; 
@property (nonatomic,retain) NSArray * sortedAttachments; 
+(void)add:(id)arg1 toFile:(id)arg2 dependencies:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)get:(id)arg1 dependencies:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)commentForId:(id)arg1 contextType:(unsigned long long)arg2 dependencies:(id)arg3 ;
-(void)editWithText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)delete:(/*^block*/id)arg1 ;
-(NSNumber *)isMention;
-(void)setIsMention:(NSNumber *)arg1 ;
-(BOOL)isJoinMessage;
-(BOOL)isLeaveMessage;
-(NSString *)botId;
-(NSString *)predicateKey;
-(NSString *)threadTimestamp;
-(void)setThreadTimestamp:(NSString *)arg1 ;
-(NSNumber *)ephemeral;
-(NSNumber *)replyCount;
-(BOOL)isStarred;
-(NSArray *)reactions;
-(void)setReactions:(NSArray *)arg1 ;
-(BOOL)isBotMessage;
-(NSString *)emojiUrl;
-(void)setEmojiUrl:(NSString *)arg1 ;
-(BOOL)isEdited;
-(BOOL)isTopicMessage;
-(BOOL)isJoinOrLeaveMessage;
-(BOOL)isIntegrationBotMessage;
-(SLKStar *)star;
-(BOOL)isEditableByMe;
-(NSString *)replyId;
-(void)setReplyId:(NSString *)arg1 ;
-(void)setEphemeral:(NSNumber *)arg1 ;
-(NSNumber *)canBeUnread;
-(void)setCanBeUnread:(NSNumber *)arg1 ;
-(void)setBotId:(NSString *)arg1 ;
-(NSString *)image48Url;
-(void)setImage48Url:(NSString *)arg1 ;
-(NSString *)image64Url;
-(void)setImage64Url:(NSString *)arg1 ;
-(NSString *)image72Url;
-(void)setImage72Url:(NSString *)arg1 ;
-(NSString *)ignoreIfAttachmentsSupported;
-(void)setIgnoreIfAttachmentsSupported:(NSString *)arg1 ;
-(NSString *)subtypeString;
-(void)setSubtypeString:(NSString *)arg1 ;
-(NSNumber *)timestampNumber;
-(void)setTimestampNumber:(NSNumber *)arg1 ;
-(NSString *)deletedTimestamp;
-(void)setDeletedTimestamp:(NSString *)arg1 ;
-(NSNumber *)upload;
-(void)setUpload:(NSNumber *)arg1 ;
-(void)setReplyCount:(NSNumber *)arg1 ;
-(void)setInviter:(NSString *)arg1 ;
-(BOOL)isFileMessage;
-(BOOL)isCallMessage;
-(BOOL)isDeletedFileMessage;
-(void)setDeliveryStatus:(unsigned long long)arg1 ;
-(BOOL)isBotNotification;
-(BOOL)hasReactions;
-(SLKUser *)user;
-(void)setTypeString:(NSString *)arg1 ;
-(NSNumber *)isHidden;
-(NSString *)timestamp;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setTimestamp:(NSString *)arg1 ;
-(unsigned long long)subtype;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSubtype:(unsigned long long)arg1 ;
-(NSString *)accessibilityLabel;
-(BOOL)isPinned;
-(void)setIsHidden:(NSNumber *)arg1 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(NSNumber *)subscribed;
-(void)setSubscribed:(NSNumber *)arg1 ;
-(BOOL)isReply;
-(NSDate *)createdAt;
-(unsigned long long)deliveryStatus;
-(void)setChannel:(SLKChannel *)arg1 ;
-(SLKChannel *)channel;
-(BOOL)canEdit;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(NSString *)inviter;
-(BOOL)isPending;
-(BOOL)canDelete;
-(SLKPin *)pin;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(NSString *)typeString;
-(void)setFile:(SLKFile *)arg1 ;
-(SLKFile *)file;
@end
