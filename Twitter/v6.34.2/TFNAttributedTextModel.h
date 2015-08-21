/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class NSAttributedString;

@interface TFNAttributedTextModel : NSObject {

	NSAttributedString* _renderedAttributedString;
	CTFrameRef _coreTextFrame;
	CTLineRef _truncatedLastLine;
	CGPoint _truncatedLastLineOrigin;
	CGSize _requestedSize;
	CGSize _actualSize;
	NSRange _truncationTokenRange;
	BOOL _textIsTruncated;
	BOOL _singleLine;
	unsigned char _lineBreakMode;
	NSAttributedString* _attributedString;
	unsigned long long _maxLines;
	NSAttributedString* _attributedTruncationString;
	unsigned long long _truncationType;

}

@property (nonatomic,readonly) NSAttributedString * renderedAttributedString; 
@property (nonatomic,copy) NSAttributedString * attributedString;                          //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) BOOL singleLine;                                              //@synthesize singleLine=_singleLine - In the implementation block
@property (assign,nonatomic) unsigned char lineBreakMode;                                  //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (assign,nonatomic) unsigned long long maxLines;                                  //@synthesize maxLines=_maxLines - In the implementation block
@property (nonatomic,readonly) CGSize actualSize;                                          //@synthesize actualSize=_actualSize - In the implementation block
@property (nonatomic,readonly) NSRange truncationTokenRange; 
@property (getter=isTruncated,nonatomic,readonly) BOOL truncated; 
@property (nonatomic,copy) NSAttributedString * attributedTruncationString;                //@synthesize attributedTruncationString=_attributedTruncationString - In the implementation block
@property (assign,nonatomic) unsigned long long truncationType;                            //@synthesize truncationType=_truncationType - In the implementation block
-(void)fitToWidth:(double)arg1 ;
-(CGSize)actualSize;
-(void)setMaxLines:(unsigned long long)arg1 ;
-(BOOL)singleLine;
-(void)fitToSize:(CGSize)arg1 ;
-(CGAffineTransform)coreTextTransform;
-(CTFrameRef)coreTextFrame;
-(void)setAttributedTruncationString:(NSAttributedString *)arg1 ;
-(void)setTruncationType:(unsigned long long)arg1 ;
-(CTLineRef)truncatedLastLine;
-(CGPoint)truncatedLastLineOrigin;
-(BOOL)isTruncated;
-(NSRange)truncationTokenRange;
-(void)resetCoreTextFrame;
-(void)_buildCoreTextFrame;
-(BOOL)_sizeRequiresRelayout:(CGSize)arg1 ;
-(CTParagraphStyleRef)_createCoreTextParagraphStyleForBase:(id)arg1 overrideSettingCount:(unsigned long long)arg2 overrideSettings:(const CTParagraphStyleSetting*)arg3 ;
-(CTParagraphStyleRef)_createCoreTextParagraphStyleForCTBase:(CTParagraphStyleRef)arg1 overrideSettingCount:(unsigned long long)arg2 overrideSettings:(const CTParagraphStyleSetting*)arg3 ;
-(CTParagraphStyleRef)_createCoreTextParagraphStyleWithSettingCount:(unsigned long long)arg1 settings:(const CTParagraphStyleSetting*)arg2 ;
-(id)_coreTextAttributedString;
-(CTFrameRef)_coreTextFrameCreatedWithAttributedString:(id)arg1 ;
-(NSAttributedString *)renderedAttributedString;
-(NSAttributedString *)attributedTruncationString;
-(unsigned long long)truncationType;
-(void)dealloc;
-(id)init;
-(void)setLineBreakMode:(unsigned char)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 ;
-(unsigned char)lineBreakMode;
-(void)setSingleLine:(BOOL)arg1 ;
-(unsigned long long)maxLines;
@end

