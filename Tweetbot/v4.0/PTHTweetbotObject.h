/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:49 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class PTHTweetbotAccount, NSNumber;

@interface PTHTweetbotObject : NSObject <NSCoding> {

	PTHTweetbotAccount* _account;
	long long _tid;
	BOOL _loaded;
	BOOL _dirty;

}

@property (assign,nonatomic,__weak) PTHTweetbotAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long tid;                                    //@synthesize tid=_tid - In the implementation block
@property (nonatomic,readonly) NSNumber * tidValue; 
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                      //@synthesize loaded=_loaded - In the implementation block
@property (assign,getter=isDirty,nonatomic) BOOL dirty;                        //@synthesize dirty=_dirty - In the implementation block
+(id)newWithAccount:(id)arg1 dictionary:(id)arg2 ;
+(id)newWithAccount:(id)arg1 tid:(long long)arg2 ;
+(void)initialize;
-(id)initWithAccount:(id)arg1 tid:(long long)arg2 ;
-(BOOL)hasString:(id)arg1 ;
-(NSNumber *)tidValue;
-(void)updateFromDictionary:(id)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(BOOL)isLoaded;
-(void)setDirty:(BOOL)arg1 ;
-(void)setTid:(long long)arg1 ;
-(long long)tid;
-(BOOL)isDirty;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotAccount *)account;
@end
