/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ECHadoopToken : NSObject {

	NSString* _tokenHost;
	NSString* _tokenPath;
	NSString* _sessionId;
	NSString* _sessionToken;
	unsigned long long _numTries;
	long long _maxTries;

}

@property (nonatomic,copy) NSString * tokenHost;                       //@synthesize tokenHost=_tokenHost - In the implementation block
@property (nonatomic,copy) NSString * tokenPath;                       //@synthesize tokenPath=_tokenPath - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                       //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) NSString * sessionToken;                    //@synthesize sessionToken=_sessionToken - In the implementation block
@property (assign,nonatomic) unsigned long long numTries;              //@synthesize numTries=_numTries - In the implementation block
@property (assign,nonatomic) long long maxTries;                       //@synthesize maxTries=_maxTries - In the implementation block
-(void)setTokenHost:(NSString *)arg1 ;
-(void)setTokenPath:(NSString *)arg1 ;
-(void)requestTrackingTokenWithHandler:(/*^block*/id)arg1 ;
-(BOOL)tryAgain:(long long)arg1 ;
-(void)resetSessionIdTokens;
-(void)setNumTries:(unsigned long long)arg1 ;
-(unsigned long long)numTries;
-(long long)maxTries;
-(void)setMaxTries:(long long)arg1 ;
-(void)requestTrackingTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)tokenHost;
-(NSString *)tokenPath;
-(NSString *)sessionToken;
-(void)setSessionToken:(NSString *)arg1 ;
-(id)init;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
@end

