/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/_SLKComment.h>
#import <Slack/SLKMessageGenerics.h>

@class NSString, NSDate, NSNumber, SLKUser, SLKFile, NSArray, SLKCallRoom, NSManagedObjectID, NSManagedObjectContext, SLKStar;

@interface SLKComment : _SLKComment <SLKMessageGenerics> {

	BOOL _isIntegrationBotMessage;
	BOOL _isJoinOrLeaveMessage;
	BOOL _isFileMessage;
	BOOL _isEdited;
	BOOL _isBotMessage;
	BOOL _isTopicMessage;
	BOOL _isBotNotification;
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
	NSNumber* _isEphemeral;
	NSString* _text;
	SLKFile* _file;
	NSString* _userId;
	NSString* _timestamp;

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
@property (nonatomic,retain) NSNumber * isEphemeral;                                       //@synthesize isEphemeral=_isEphemeral - In the implementation block
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
@property (assign,nonatomic) BOOL isEdited;                                                //@synthesize isEdited=_isEdited - In the implementation block
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
@property (nonatomic,retain) id reactionsBlob; 
@property (nonatomic,retain) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * timestamp;                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * userId;                                            //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL isCallMessage; 
@property (nonatomic,retain) SLKCallRoom * callRoom; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * avatarImageUrl; 
@property (nonatomic,retain) NSString * accessibilityLabel;                                //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,retain) NSString * commentId; 
@property (nonatomic,retain) SLKComment * comment; 
@property (nonatomic,retain) NSArray * sortedAttachments; 
+(void)add:(id)arg1 toFile:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)get:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)commentForId:(id)arg1 contextType:(unsigned long long)arg2 ;
-(void)editWithText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)delete:(/*^block*/id)arg1 ;
-(NSNumber *)isMention;
-(void)setIsMention:(NSNumber *)arg1 ;
-(NSString *)botId;
-(NSString *)predicateKey;
-(NSString *)emojiUrl;
-(NSArray *)reactions;
-(void)setReactions:(NSArray *)arg1 ;
-(BOOL)isBotMessage;
-(void)setEmojiUrl:(NSString *)arg1 ;
-(BOOL)isTopicMessage;
-(BOOL)isJoinOrLeaveMessage;
-(BOOL)isBotNotification;
-(BOOL)isEdited;
-(void)setIsEdited:(BOOL)arg1 ;
-(BOOL)isIntegrationBotMessage;
-(BOOL)isStarred;
-(SLKStar *)star;
-(BOOL)hasReactions;
-(BOOL)isEditableByMe;
-(void)setDeliveryStatus:(unsigned long long)arg1 ;
-(NSString *)replyId;
-(void)setReplyId:(NSString *)arg1 ;
-(NSNumber *)canBeUnread;
-(void)setCanBeUnread:(NSNumber *)arg1 ;
-(void)setTypeString:(NSString *)arg1 ;
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
-(BOOL)isFileMessage;
-(NSNumber *)timestampNumber;
-(void)setTimestampNumber:(NSNumber *)arg1 ;
-(NSString *)deletedTimestamp;
-(void)setDeletedTimestamp:(NSString *)arg1 ;
-(NSNumber *)upload;
-(void)setUpload:(NSNumber *)arg1 ;
-(SLKUser *)user;
-(NSNumber *)isHidden;
-(NSString *)timestamp;
-(void)setTimestamp:(NSString *)arg1 ;
-(unsigned long long)subtype;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSubtype:(unsigned long long)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setIsHidden:(NSNumber *)arg1 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(BOOL)isPending;
-(BOOL)canDelete;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(NSNumber *)isEphemeral;
-(NSString *)typeString;
-(unsigned long long)deliveryStatus;
-(void)setFile:(SLKFile *)arg1 ;
-(SLKFile *)file;
-(BOOL)canEdit;
-(NSDate *)createdAt;
-(void)setIsEphemeral:(NSNumber *)arg1 ;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end
