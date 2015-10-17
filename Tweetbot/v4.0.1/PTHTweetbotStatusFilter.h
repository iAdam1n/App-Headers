/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSRegularExpression, PTHTweetbotAccount, NSDate, NSString, NSDictionary, PTHTweetbotUser;

@interface PTHTweetbotStatusFilter : NSObject <NSCoding, NSCopying> {

	NSRegularExpression* _keywordRegularExpression;
	BOOL _muteMentions;
	BOOL _muteSearches;
	BOOL _muteLists;
	BOOL _keywordIsRegularExpression;
	BOOL _unknown;
	PTHTweetbotAccount* _account;
	NSDate* _expirationDate;
	NSString* _keywordString;
	NSString* _hashtagString;
	NSString* _sourceText;
	long long _userTID;
	NSString* _userScreenName;
	NSDictionary* _filterDictionary;

}

@property (assign,nonatomic,__weak) PTHTweetbotAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,retain) NSDate * expirationDate;                                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,getter=shouldMuteMentions,nonatomic) BOOL muteMentions;              //@synthesize muteMentions=_muteMentions - In the implementation block
@property (assign,getter=shouldMuteSearches,nonatomic) BOOL muteSearches;              //@synthesize muteSearches=_muteSearches - In the implementation block
@property (assign,getter=shouldMuteLists,nonatomic) BOOL muteLists;                    //@synthesize muteLists=_muteLists - In the implementation block
@property (getter=isUserFilter,nonatomic,readonly) BOOL userFilter; 
@property (getter=isHashtagFilter,nonatomic,readonly) BOOL hashtagFilter; 
@property (getter=isSourceFilter,nonatomic,readonly) BOOL sourceFilter; 
@property (getter=isKeywordFilter,nonatomic,readonly) BOOL keywordFilter; 
@property (assign,nonatomic,__weak) PTHTweetbotUser * user; 
@property (nonatomic,copy) NSString * keywordString;                                   //@synthesize keywordString=_keywordString - In the implementation block
@property (assign,nonatomic) BOOL keywordIsRegularExpression;                          //@synthesize keywordIsRegularExpression=_keywordIsRegularExpression - In the implementation block
@property (nonatomic,copy) NSString * hashtagString;                                   //@synthesize hashtagString=_hashtagString - In the implementation block
@property (nonatomic,copy) NSString * sourceText;                                      //@synthesize sourceText=_sourceText - In the implementation block
@property (assign,nonatomic) long long userTID;                                        //@synthesize userTID=_userTID - In the implementation block
@property (nonatomic,readonly) NSString * userScreenName;                              //@synthesize userScreenName=_userScreenName - In the implementation block
@property (nonatomic,__weak,readonly) NSString * displayString; 
@property (nonatomic,__weak,readonly) NSString * expirationDateString; 
@property (nonatomic,readonly) int type; 
@property (assign,getter=isUnknown,nonatomic) BOOL unknown;                            //@synthesize unknown=_unknown - In the implementation block
@property (nonatomic,readonly) NSDictionary * filterDictionary;                        //@synthesize filterDictionary=_filterDictionary - In the implementation block
-(NSString *)expirationDateString;
-(BOOL)isUserFilter;
-(BOOL)isHashtagFilter;
-(NSString *)hashtagString;
-(BOOL)isKeywordFilter;
-(NSString *)keywordString;
-(void)setHashtagString:(NSString *)arg1 ;
-(void)updateFromURL:(id)arg1 ;
-(BOOL)shouldMuteMentions;
-(void)setMuteMentions:(BOOL)arg1 ;
-(BOOL)shouldMuteSearches;
-(void)setMuteSearches:(BOOL)arg1 ;
-(BOOL)shouldMuteLists;
-(void)setMuteLists:(BOOL)arg1 ;
-(BOOL)shouldFilterStatus:(id)arg1 ;
-(BOOL)isSourceFilter;
-(void)setKeywordString:(NSString *)arg1 ;
-(BOOL)keywordIsRegularExpression;
-(void)setKeywordIsRegularExpression:(BOOL)arg1 ;
-(BOOL)isSimilar:(id)arg1 ;
-(NSString *)userScreenName;
-(long long)userTID;
-(void)setUserTID:(long long)arg1 ;
-(id)urlValue;
-(PTHTweetbotUser *)user;
-(void)setUser:(PTHTweetbotUser *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)displayString;
-(BOOL)isValid;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilter:(id)arg1 ;
-(void)_reset;
-(NSString *)sourceText;
-(void)setSourceText:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDictionary *)filterDictionary;
-(BOOL)isUnknown;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotAccount *)account;
-(void)setUnknown:(BOOL)arg1 ;
@end
