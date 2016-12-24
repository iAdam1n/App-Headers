/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSArray, PTHLocationManager, NSString, PTHTweetbotError, PTHTweetbotAccount, PTHTweetbotUser, PTHTweetbotTopic, CLLocation, NSURL, NSAttributedString, PTHTweetbotEntity;

@interface PTHTweetbotPostDraft : NSObject <NSCoding> {

	NSMutableArray* _media;
	NSArray* _entities;
	NSArray* _longURLEntities;
	unsigned long long _length;
	PTHLocationManager* _locationManager;
	unsigned long long _postTask;
	double _postProgress;
	BOOL _isEdited;
	BOOL _posting;
	BOOL _deleted;
	NSString* _uuid;
	NSString* _text;
	PTHTweetbotError* _postError;
	PTHTweetbotAccount* _account;
	PTHTweetbotUser* _toUser;
	PTHTweetbotTopic* _topic;
	CLLocation* _location;
	NSString* _placeID;
	NSString* _placeFullName;
	PTHTweetbotError* _lastSearchError;
	long long _replyStatusTID;
	long long _quoteStatusTID;
	NSURL* _quoteStatusTwitterURL;
	NSRange _selectedRange;

}

@property (assign,nonatomic) long long replyStatusTID;                                  //@synthesize replyStatusTID=_replyStatusTID - In the implementation block
@property (assign,nonatomic) long long quoteStatusTID;                                  //@synthesize quoteStatusTID=_quoteStatusTID - In the implementation block
@property (nonatomic,copy) NSURL * quoteStatusTwitterURL;                               //@synthesize quoteStatusTwitterURL=_quoteStatusTwitterURL - In the implementation block
@property (nonatomic,copy) NSString * placeID;                                          //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,copy) NSString * placeFullName;                                    //@synthesize placeFullName=_placeFullName - In the implementation block
@property (nonatomic,readonly) NSArray * longURLEntities; 
@property (nonatomic,readonly) NSString * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (nonatomic,__weak,readonly) NSString * postText; 
@property (nonatomic,__weak,readonly) NSAttributedString * attributedText; 
@property (nonatomic,readonly) NSArray * entities; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) BOOL isEdited;                                           //@synthesize isEdited=_isEdited - In the implementation block
@property (nonatomic,readonly) BOOL isBlank; 
@property (assign,nonatomic) NSRange selectedRange;                                     //@synthesize selectedRange=_selectedRange - In the implementation block
@property (nonatomic,__weak,readonly) PTHTweetbotEntity * selectedEntity; 
@property (assign,getter=isPosting,nonatomic) BOOL posting;                             //@synthesize posting=_posting - In the implementation block
@property (nonatomic,retain) PTHTweetbotError * postError;                              //@synthesize postError=_postError - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotAccount * account;                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PTHTweetbotUser * toUser;                                  //@synthesize toUser=_toUser - In the implementation block
@property (nonatomic,readonly) BOOL isDirectMessage; 
@property (nonatomic,retain) PTHTweetbotTopic * topic;                                  //@synthesize topic=_topic - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                     //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL isSearching; 
@property (nonatomic,readonly) PTHTweetbotError * lastSearchError;                      //@synthesize lastSearchError=_lastSearchError - In the implementation block
@property (nonatomic,__weak,readonly) NSString * locationTitle; 
@property (nonatomic,__weak,readonly) NSURL * attachmentURL; 
@property (assign,getter=isDeleted,nonatomic) BOOL deleted;                             //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,copy) NSArray * media; 
-(void)addMedium:(id)arg1 ;
-(void)checkCanAddMedium:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)initWithReplyStatus:(id)arg1 ;
-(long long)replyStatusTID;
-(BOOL)canAddMediumType:(long long)arg1 ;
-(void)removeMedium:(id)arg1 ;
-(void)cancelPlaceSearch;
-(void)post:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithToUser:(id)arg1 ;
-(PTHTweetbotUser *)toUser;
-(id)initWithUserMention:(id)arg1 ;
-(id)initWithAccount:(id)arg1 text:(id)arg2 selectedRange:(NSRange)arg3 ;
-(id)initWithQuoteStatus:(id)arg1 ;
-(PTHTweetbotError *)lastSearchError;
-(void)startPlaceSearch;
-(BOOL)isPosting;
-(PTHTweetbotEntity *)selectedEntity;
-(long long)quoteStatusTID;
-(BOOL)_setTopic:(id)arg1 ;
-(void)_wasEdited;
-(NSURL *)quoteStatusTwitterURL;
-(BOOL)isDirectMessage;
-(void)setPosting:(BOOL)arg1 ;
-(NSArray *)longURLEntities;
-(void)setReplyStatusTID:(long long)arg1 ;
-(void)_uploadMedia:(double)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_shortenURLs:(double)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)postText;
-(PTHTweetbotError *)postError;
-(void)setPostError:(PTHTweetbotError *)arg1 ;
-(void)setToUser:(PTHTweetbotUser *)arg1 ;
-(NSString *)placeFullName;
-(void)setPlaceFullName:(NSString *)arg1 ;
-(void)setQuoteStatusTID:(long long)arg1 ;
-(void)setQuoteStatusTwitterURL:(NSURL *)arg1 ;
-(void)deleteMedium:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)length;
-(void)_reset;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(NSRange)selectedRange;
-(void)setSelectedRange:(NSRange)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)uuid;
-(void)setPlace:(id)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
-(void)delete;
-(NSArray *)entities;
-(BOOL)isSearching;
-(id)initWithAccount:(id)arg1 ;
-(PTHTweetbotAccount *)account;
-(void)setTopic:(PTHTweetbotTopic *)arg1 ;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotTopic *)topic;
-(BOOL)isDeleted;
-(NSURL *)attachmentURL;
-(NSString *)locationTitle;
-(NSArray *)media;
-(void)setMedia:(NSArray *)arg1 ;
-(void)appendText:(id)arg1 ;
-(BOOL)isEdited;
-(id)_initWithAccount:(id)arg1 ;
-(BOOL)isBlank;
@end
