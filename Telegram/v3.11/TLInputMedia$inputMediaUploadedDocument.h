/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLInputMedia.h>

@class TLInputFile, NSString, NSArray;

@interface TLInputMedia$inputMediaUploadedDocument : TLInputMedia {

	TLInputFile* _file;
	NSString* _mime_type;
	NSArray* _attributes;
	NSString* _caption;

}

@property (nonatomic,retain) TLInputFile * file;                //@synthesize file=_file - In the implementation block
@property (nonatomic,retain) NSString * mime_type;              //@synthesize mime_type=_mime_type - In the implementation block
@property (nonatomic,retain) NSArray * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * caption;                //@synthesize caption=_caption - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >=_Rb_tree<int, std::pair<const int, TLConstructedValue>, std::_Select1st<std::pair<const int, TLConstructedValue> >, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >=_Rb_tree_impl<std::less<int>, false>=less<int>_Rb_tree_node_base=i_Rb_tree_node_base}_Rb_tree_node_base}_Rb_tree_node_base}}Q}}}Ref)arg1 ;
-(void)setMime_type:(NSString *)arg1 ;
-(NSString *)mime_type;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setFile:(TLInputFile *)arg1 ;
-(TLInputFile *)file;
@end
