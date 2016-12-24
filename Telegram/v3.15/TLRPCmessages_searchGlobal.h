/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLMetaRpc.h>

@class NSString, TLInputPeer;

@interface TLRPCmessages_searchGlobal : TLMetaRpc {

	int _offset_date;
	int _offset_id;
	int _limit;
	NSString* _q;
	TLInputPeer* _offset_peer;

}

@property (q,nonatomic,retain) NSString * q;                         //@synthesize q=_q - In the implementation block
@property (assign,nonatomic) int offset_date;                        //@synthesize offset_date=_offset_date - In the implementation block
@property (nonatomic,retain) TLInputPeer * offset_peer;              //@synthesize offset_peer=_offset_peer - In the implementation block
@property (assign,nonatomic) int offset_id;                          //@synthesize offset_id=_offset_id - In the implementation block
@property (assign,nonatomic) int limit;                              //@synthesize limit=_limit - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(int)impliedResponseSignature;
-(int)layerVersion;
-(void)setOffset_date:(int)arg1 ;
-(void)setOffset_id:(int)arg1 ;
-(void)setOffset_peer:(TLInputPeer *)arg1 ;
-(void)setQ:(NSString *)arg1 ;
-(int)offset_date;
-(TLInputPeer *)offset_peer;
-(int)offset_id;
-(Class)responseClass;
-(void)setLimit:(int)arg1 ;
-(int)limit;
-(NSString *)q;
@end
