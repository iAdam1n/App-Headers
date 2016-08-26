/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Skype/Skype-Structs.h>
@class SKPExpressionPackMediaDocument, NSString, NSMutableArray, UIImage;

@interface SKPExpressionUIPack : NSObject {

	BOOL _hasFeaturedItems;
	SKPExpressionPackMediaDocument* _mediaDocument;
	NSString* _name;
	NSString* _noContentTitle;
	NSMutableArray* _sections;
	UIImage* _thumbnailSpritesheet;

}

@property (nonatomic,retain) NSMutableArray * sections;                                   //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL hasFeaturedItems;                                       //@synthesize hasFeaturedItems=_hasFeaturedItems - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailSpritesheet;                              //@synthesize thumbnailSpritesheet=_thumbnailSpritesheet - In the implementation block
@property (nonatomic,retain) SKPExpressionPackMediaDocument * mediaDocument;              //@synthesize mediaDocument=_mediaDocument - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (getter=isConsumed,nonatomic,readonly) BOOL consumed; 
@property (nonatomic,copy) NSString * noContentTitle;                                     //@synthesize noContentTitle=_noContentTitle - In the implementation block
+(CGSize)emoticonSize;
+(CGSize)mojiCellSize:(BOOL)arg1 ;
+(CGSize)mojiSize;
+(id)keyPathsForValuesAffectingThumbnailSpritesheet;
+(id)unusedStrings;
+(id)defaultRecentsPack;
+(id)defaultEmoticonsPack;
+(id)keyPathsForValuesAffectingConsumed;
-(BOOL)containsExpressionOfType:(unsigned long long)arg1 inListAtIndex:(unsigned long long)arg2 ;
-(CGSize)cellSizeForItemAtIndex:(unsigned long long)arg1 inItemsAtIndex:(unsigned long long)arg2 isMojiTitlesInPickerEnabled:(BOOL)arg3 ;
-(SKPExpressionPackMediaDocument *)mediaDocument;
-(id)titleForItemsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isConsumed;
-(void)setMediaDocument:(SKPExpressionPackMediaDocument *)arg1 ;
-(id)initWithName:(id)arg1 thumbnailSpriteSheet:(id)arg2 ;
-(void)addRegularItems:(id)arg1 withTitle:(id)arg2 glyph:(id)arg3 ;
-(BOOL)hasFeaturedItems;
-(void)setHasFeaturedItems:(BOOL)arg1 ;
-(void)setRegularItems:(id)arg1 withTitle:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)glyphForItemsAtIndex:(unsigned long long)arg1 ;
-(void)setThumbnailSpritesheet:(UIImage *)arg1 ;
-(void)addRegularItems:(id)arg1 withTitle:(id)arg2 ;
-(id)initWithName:(id)arg1 mediaDocument:(id)arg2 ;
-(void)setFeaturedItems:(id)arg1 withTitle:(id)arg2 ;
-(unsigned long long)totalNumberOfLists;
-(void)clearAllItems;
-(void)enumerateExpressionsWithType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(UIImage *)thumbnailSpritesheet;
-(id)init;
-(NSString *)name;
-(BOOL)isEmpty;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(void)consume;
-(id)itemsAtIndex:(unsigned long long)arg1 ;
-(void)setNoContentTitle:(NSString *)arg1 ;
-(NSString *)noContentTitle;
@end
