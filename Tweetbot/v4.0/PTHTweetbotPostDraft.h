/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:49 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSArray, PTHLocationManager, NSString, PTHTweetbotError, PTHTweetbotAccount, PTHTweetbotUser, CLLocation, NSAttributedString, PTHTweetbotEntity;

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
	CLLocation* _location;
	NSString* _placeID;
	NSString* _placeFullName;
	PTHTweetbotError* _lastSearchError;
	long long _replyStatusTID;
	NSString* _replyStatusText;
	NSString* _replyStatusScreenName;
	long long _quoteStatusTID;
	NSRange _selectedRange;

}

@property (nonatomic,readonly) NSString * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (nonatomic,__weak,readonly) NSString * postText; 
@property (nonatomic,__weak,readonly) NSAttributedString * attributedText; 
@property (nonatomic,readonly) NSArray * entities; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) BOOL isEdited;                                           //@synthesize isEdited=_isEdited - In the implementation block
@property (assign,nonatomic) NSRange selectedRange;                                     //@synthesize selectedRange=_selectedRange - In the implementation block
@property (nonatomic,__weak,readonly) PTHTweetbotEntity * selectedEntity; 
@property (assign,getter=isPosting,nonatomic) BOOL posting;                             //@synthesize posting=_posting - In the implementation block
@property (nonatomic,retain) PTHTweetbotError * postError;                              //@synthesize postError=_postError - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotAccount * account;                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PTHTweetbotUser * toUser;                                  //@synthesize toUser=_toUser - In the implementation block
@property (nonatomic,readonly) BOOL isDirectMessage; 
@property (nonatomic,retain) CLLocation * location;                                     //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * placeID;                                          //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,copy) NSString * placeFullName;                                    //@synthesize placeFullName=_placeFullName - In the implementation block
@property (nonatomic,readonly) BOOL isSearching; 
@property (nonatomic,readonly) PTHTweetbotError * lastSearchError;                      //@synthesize lastSearchError=_lastSearchError - In the implementation block
@property (nonatomic,__weak,readonly) NSString * locationTitle; 
@property (assign,nonatomic) long long replyStatusTID;                                  //@synthesize replyStatusTID=_replyStatusTID - In the implementation block
@property (nonatomic,copy) NSString * replyStatusText;                                  //@synthesize replyStatusText=_replyStatusText - In the implementation block
@property (nonatomic,copy) NSString * replyStatusScreenName;                            //@synthesize replyStatusScreenName=_replyStatusScreenName - In the implementation block
@property (nonatomic,readonly) long long quoteStatusTID;                                //@synthesize quoteStatusTID=_quoteStatusTID - In the implementation block
@property (assign,getter=isDeleted,nonatomic) BOOL deleted;                             //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,copy) NSArray * media; 
@property (nonatomic,readonly) NSArray * longURLEntities; 
-(id)initWithReplyStatus:(id)arg1 ;
-(long long)replyStatusTID;
-(BOOL)canAddMediumType:(long long)arg1 ;
-(void)addMedium:(id)arg1 ;
-(void)removeMedium:(id)arg1 ;
-(void)resetLength;
-(BOOL)isEdited;
-(void)cancelPlaceSearch;
-(void)post:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithToUser:(id)arg1 ;
-(PTHTweetbotUser *)toUser;
-(id)initWithQuoteStatus:(id)arg1 ;
-(NSString *)locationTitle;
-(PTHTweetbotError *)lastSearchError;
-(void)startPlaceSearch;
-(BOOL)isPosting;
-(PTHTweetbotEntity *)selectedEntity;
-(BOOL)isDirectMessage;
-(void)setPosting:(BOOL)arg1 ;
-(NSArray *)longURLEntities;
-(void)_uploadMedia:(double)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_shortenURLs:(double)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)postText;
-(PTHTweetbotError *)postError;
-(void)setPostError:(PTHTweetbotError *)arg1 ;
-(void)setToUser:(PTHTweetbotUser *)arg1 ;
-(NSString *)placeFullName;
-(void)setPlaceFullName:(NSString *)arg1 ;
-(void)setReplyStatusTID:(long long)arg1 ;
-(NSString *)replyStatusText;
-(void)setReplyStatusText:(NSString *)arg1 ;
-(NSString *)replyStatusScreenName;
-(void)setReplyStatusScreenName:(NSString *)arg1 ;
-(long long)quoteStatusTID;
-(BOOL)isSearching;
-(BOOL)isDeleted;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)length;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(NSRange)selectedRange;
-(void)setSelectedRange:(NSRange)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)uuid;
-(void)appendText:(id)arg1 ;
-(void)setPlace:(id)arg1 ;
-(NSString *)placeID;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSArray *)media;
-(void)setMedia:(NSArray *)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(void)delete;
-(NSArray *)entities;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotAccount *)account;
-(void)deleteMedium:(id)arg1 ;
@end

