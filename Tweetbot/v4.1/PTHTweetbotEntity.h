/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, PTHTweetbotAccount, NSURL, NSString, PTHTweetbotStatus, PTHTweetbotUser;

@interface PTHTweetbotEntity : NSObject <NSCoding> {

	BOOL _checkedForMedia;
	NSArray* _media;
	BOOL _parsed;
	PTHTweetbotAccount* _account;
	long long _type;
	NSURL* _url;
	NSURL* _expandedURL;
	NSString* _displayURLString;
	NSString* _hashtagString;
	NSString* _symbolString;
	NSString* _userScreenName;
	long long _userTID;
	PTHTweetbotStatus* _status;
	NSRange _range;

}

@property (assign,nonatomic,__weak) PTHTweetbotAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) NSRange range;                                    //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSURL * expandedURL;                              //@synthesize expandedURL=_expandedURL - In the implementation block
@property (nonatomic,retain) NSString * displayURLString;                      //@synthesize displayURLString=_displayURLString - In the implementation block
@property (nonatomic,readonly) NSURL * tweetbotURL; 
@property (nonatomic,readonly) NSArray * media;                                //@synthesize media=_media - In the implementation block
@property (nonatomic,readonly) BOOL hasMedia; 
@property (nonatomic,copy) NSString * hashtagString;                           //@synthesize hashtagString=_hashtagString - In the implementation block
@property (nonatomic,copy) NSString * symbolString;                            //@synthesize symbolString=_symbolString - In the implementation block
@property (nonatomic,retain) NSString * userScreenName;                        //@synthesize userScreenName=_userScreenName - In the implementation block
@property (assign,nonatomic) long long userTID;                                //@synthesize userTID=_userTID - In the implementation block
@property (nonatomic,__weak,readonly) PTHTweetbotUser * user; 
@property (assign,nonatomic,__weak) PTHTweetbotStatus * status;                //@synthesize status=_status - In the implementation block
@property (assign,getter=isParsed,nonatomic) BOOL parsed;                      //@synthesize parsed=_parsed - In the implementation block
+(id)preferredMediaPreviewEntity:(id)arg1 ;
+(id)newAttributedStringFromString:(id)arg1 entities:(id)arg2 ;
+(id)newEntitiesFromString:(id)arg1 andDictionary:(id)arg2 account:(id)arg3 ;
+(id)newEditingEntitiesFromString:(id)arg1 account:(id)arg2 ;
+(id)newExpandedURLString:(id)arg1 entities:(id)arg2 ;
+(id)URLWithString:(id)arg1 ;
+(void)initialize;
+(void)loadConfiguration;
-(id)newDetailViewController;
-(NSString *)userScreenName;
-(long long)userTID;
-(NSURL *)tweetbotURL;
-(NSURL *)expandedURL;
-(NSString *)hashtagString;
-(void)setHashtagString:(NSString *)arg1 ;
-(NSString *)symbolString;
-(id)initWithAccount:(id)arg1 type:(long long)arg2 dictionary:(id)arg3 ;
-(void)_addSiblingMediaEntity:(id)arg1 ;
-(id)initWithAccount:(id)arg1 type:(long long)arg2 ;
-(void)setParsed:(BOOL)arg1 ;
-(void)setUserScreenName:(NSString *)arg1 ;
-(void)setSymbolString:(NSString *)arg1 ;
-(BOOL)isParsed;
-(void)setExpandedURL:(NSURL *)arg1 ;
-(void)setUserTID:(long long)arg1 ;
-(PTHTweetbotUser *)user;
-(BOOL)hasMedia;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSURL *)url;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setUrl:(NSURL *)arg1 ;
-(NSRange)range;
-(PTHTweetbotStatus *)status;
-(void)setStatus:(PTHTweetbotStatus *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(NSArray *)media;
-(NSString *)displayURLString;
-(void)setDisplayURLString:(NSString *)arg1 ;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotAccount *)account;
@end

