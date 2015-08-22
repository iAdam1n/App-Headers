/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/NSCoding.h>

@class NSArray;

@interface TFNTextViewTokenDataSource : NSObject <NSCoding> {

	NSArray* _tokens;

}

@property (nonatomic,copy) NSArray * tokens;              //@synthesize tokens=_tokens - In the implementation block
-(void)_enumerateTokens:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateTokensUsingBlock:(/*^block*/id)arg1 ;
-(void)addToken:(id)arg1 ;
-(void)reverseEnumerateTokensUsingBlock:(/*^block*/id)arg1 ;
-(void)removeToken:(id)arg1 ;
-(void)shiftTokensByOffset:(unsigned long long)arg1 location:(unsigned long long)arg2 ;
-(id)tokenAtLocation:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSArray *)tokens;
-(void)setTokens:(NSArray *)arg1 ;
@end
