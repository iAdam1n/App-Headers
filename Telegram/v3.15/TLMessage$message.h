/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLMessage.h>

@class TLPeer, NSString, TLMessageMedia;

@interface TLMessage$message : TLMessage {

	int _flags;
	int _from_id;
	int _date;
	TLPeer* _to_id;
	NSString* _message;
	TLMessageMedia* _media;

}

@property (assign,nonatomic) int flags;                           //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) int from_id;                         //@synthesize from_id=_from_id - In the implementation block
@property (nonatomic,retain) TLPeer * to_id;                      //@synthesize to_id=_to_id - In the implementation block
@property (assign,nonatomic) int date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) TLMessageMedia * media;              //@synthesize media=_media - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >=_Rb_tree<int, std::pair<const int, TLConstructedValue>, std::_Select1st<std::pair<const int, TLConstructedValue> >, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >=_Rb_tree_impl<std::less<int>, false>=less<int>_Rb_tree_node_base=i_Rb_tree_node_base}_Rb_tree_node_base}_Rb_tree_node_base}}Q}}}Ref)arg1 ;
-(void)setFrom_id:(int)arg1 ;
-(void)setTo_id:(TLPeer *)arg1 ;
-(int)from_id;
-(TLPeer *)to_id;
-(int)date;
-(void)setDate:(int)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(TLMessageMedia *)media;
-(void)setMedia:(TLMessageMedia *)arg1 ;
-(void)setFlags:(int)arg1 ;
-(int)flags;
@end
