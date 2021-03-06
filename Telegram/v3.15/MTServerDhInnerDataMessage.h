/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface MTServerDhInnerDataMessage : NSObject {

	int _g;
	int _serverTime;
	NSData* _nonce;
	NSData* _serverNonce;
	NSData* _dhPrime;
	NSData* _gA;

}

@property (nonatomic,readonly) NSData * nonce;                    //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,readonly) NSData * serverNonce;              //@synthesize serverNonce=_serverNonce - In the implementation block
@property (g,nonatomic,readonly) int g;                           //@synthesize g=_g - In the implementation block
@property (nonatomic,readonly) NSData * dhPrime;                  //@synthesize dhPrime=_dhPrime - In the implementation block
@property (nonatomic,readonly) NSData * gA;                       //@synthesize gA=_gA - In the implementation block
@property (nonatomic,readonly) int serverTime;                    //@synthesize serverTime=_serverTime - In the implementation block
-(NSData *)gA;
-(NSData *)serverNonce;
-(NSData *)dhPrime;
-(id)initWithNonce:(id)arg1 serverNonce:(id)arg2 g:(int)arg3 dhPrime:(id)arg4 gA:(id)arg5 serverTime:(int)arg6 ;
-(int)serverTime;
-(int)g;
-(NSData *)nonce;
@end

