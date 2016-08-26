/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLMetaRpc.h>

@class TLInputUser, TLInputPeer, NSString;

@interface TLRPCmessages_startBot : TLMetaRpc {

	TLInputUser* _bot;
	TLInputPeer* _peer;
	long long _random_id;
	NSString* _start_param;

}

@property (nonatomic,retain) TLInputUser * bot;                   //@synthesize bot=_bot - In the implementation block
@property (nonatomic,retain) TLInputPeer * peer;                  //@synthesize peer=_peer - In the implementation block
@property (assign,nonatomic) long long random_id;                 //@synthesize random_id=_random_id - In the implementation block
@property (nonatomic,retain) NSString * start_param;              //@synthesize start_param=_start_param - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(int)impliedResponseSignature;
-(int)layerVersion;
-(void)setRandom_id:(long long)arg1 ;
-(long long)random_id;
-(NSString *)start_param;
-(void)setStart_param:(NSString *)arg1 ;
-(TLInputUser *)bot;
-(void)setBot:(TLInputUser *)arg1 ;
-(TLInputPeer *)peer;
-(void)setPeer:(TLInputPeer *)arg1 ;
-(Class)responseClass;
@end
