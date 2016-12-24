/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKPExpressionUIPack, NSString, UIImage;

@interface SKPEmoticonPickerToolbarItem : NSObject {

	SKPExpressionUIPack* _uiPack;

}

@property (nonatomic,retain) SKPExpressionUIPack * uiPack;                   //@synthesize uiPack=_uiPack - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) UIImage * highlightedImage; 
@property (nonatomic,readonly) UIImage * selectedImage; 
@property (getter=isConsumed,nonatomic,readonly) BOOL consumed; 
+(id)packImageForGlyph:(id)arg1 ;
+(id)packSelectedImageForGlyph:(id)arg1 ;
+(id)keyPathsForValuesAffectingImage;
+(id)keyPathsForValuesAffectingHighlightedImage;
+(id)keyPathsForValuesAffectingSelectedImage;
+(id)keyPathsForValuesAffectingConsumed;
-(id)initWithUIPack:(id)arg1 ;
-(SKPExpressionUIPack *)uiPack;
-(void)setUiPack:(SKPExpressionUIPack *)arg1 ;
-(id)subframeOfThumbnailSpritesheetByIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)title;
-(UIImage *)image;
-(UIImage *)highlightedImage;
-(UIImage *)selectedImage;
-(BOOL)isConsumed;
@end
