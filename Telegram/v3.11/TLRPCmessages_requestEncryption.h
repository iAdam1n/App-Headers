/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLMetaRpc.h>

@class TLInputUser, NSData;

@interface TLRPCmessages_requestEncryption : TLMetaRpc {

	int _random_id;
	TLInputUser* _user_id;
	NSData* _g_a;

}

@property (nonatomic,retain) TLInputUser * user_id;              //@synthesize user_id=_user_id - In the implementation block
@property (assign,nonatomic) int random_id;                      //@synthesize random_id=_random_id - In the implementation block
@property (nonatomic,retain) NSData * g_a;                       //@synthesize g_a=_g_a - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(int)impliedResponseSignature;
-(int)layerVersion;
-(TLInputUser *)user_id;
-(void)setUser_id:(TLInputUser *)arg1 ;
-(void)setRandom_id:(int)arg1 ;
-(void)setG_a:(NSData *)arg1 ;
-(int)random_id;
-(NSData *)g_a;
-(Class)responseClass;
@end
