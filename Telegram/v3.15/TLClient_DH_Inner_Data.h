/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLObject.h>

@class NSData, NSString;

@interface TLClient_DH_Inner_Data : NSObject <TLObject> {

	NSData* _nonce;
	NSData* _server_nonce;
	long long _retry_id;
	NSData* _g_b;

}

@property (nonatomic,retain) NSData * nonce;                        //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,retain) NSData * server_nonce;                 //@synthesize server_nonce=_server_nonce - In the implementation block
@property (assign,nonatomic) long long retry_id;                    //@synthesize retry_id=_retry_id - In the implementation block
@property (nonatomic,retain) NSData * g_b;                          //@synthesize g_b=_g_b - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(NSData *)server_nonce;
-(void)setServer_nonce:(NSData *)arg1 ;
-(void)setG_b:(NSData *)arg1 ;
-(NSData *)g_b;
-(long long)retry_id;
-(void)setRetry_id:(long long)arg1 ;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
@end
