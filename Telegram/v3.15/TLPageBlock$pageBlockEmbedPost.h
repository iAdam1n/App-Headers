/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLPageBlock.h>

@class NSString, NSArray, TLRichText;

@interface TLPageBlock$pageBlockEmbedPost : TLPageBlock {

	int _date;
	NSString* _url;
	long long _webpage_id;
	long long _author_photo_id;
	NSString* _author;
	NSArray* _blocks;
	TLRichText* _caption;

}

@property (nonatomic,retain) NSString * url;                         //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long webpage_id;                   //@synthesize webpage_id=_webpage_id - In the implementation block
@property (assign,nonatomic) long long author_photo_id;              //@synthesize author_photo_id=_author_photo_id - In the implementation block
@property (nonatomic,retain) NSString * author;                      //@synthesize author=_author - In the implementation block
@property (assign,nonatomic) int date;                               //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSArray * blocks;                       //@synthesize blocks=_blocks - In the implementation block
@property (nonatomic,retain) TLRichText * caption;                   //@synthesize caption=_caption - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >=_Rb_tree<int, std::pair<const int, TLConstructedValue>, std::_Select1st<std::pair<const int, TLConstructedValue> >, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >=_Rb_tree_impl<std::less<int>, false>=less<int>_Rb_tree_node_base=i_Rb_tree_node_base}_Rb_tree_node_base}_Rb_tree_node_base}}Q}}}Ref)arg1 ;
-(void)setWebpage_id:(long long)arg1 ;
-(long long)webpage_id;
-(void)setAuthor_photo_id:(long long)arg1 ;
-(void)setBlocks:(NSArray *)arg1 ;
-(long long)author_photo_id;
-(NSString *)url;
-(int)date;
-(void)setDate:(int)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)author;
-(TLRichText *)caption;
-(void)setCaption:(TLRichText *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(NSArray *)blocks;
@end
