/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:49 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASTextKitTruncating;
#import <Facebook/Facebook-Structs.h>
@class ASTextKitContext, ASTextKitShadower, ASTextKitFontSizeAdjuster;

@interface ASTextKitRenderer : NSObject {

	CGSize _calculatedSize;
	BOOL _sizeIsCalculated;
	ASTextKitContext* _context;
	ASTextKitShadower* _shadower;
	id<ASTextKitTruncating> _truncater;
	ASTextKitFontSizeAdjuster* _fontSizeAdjuster;
	double _currentScaleFactor;
	CGSize _constrainedSize;
	ASTextKitAttributes _attributes;

}

@property (nonatomic,readonly) NSRange firstVisibleRange; 
@property (nonatomic,readonly) ASTextKitContext * context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<ASTextKitTruncating> truncater;                         //@synthesize truncater=_truncater - In the implementation block
@property (nonatomic,readonly) ASTextKitFontSizeAdjuster * fontSizeAdjuster;              //@synthesize fontSizeAdjuster=_fontSizeAdjuster - In the implementation block
@property (nonatomic,readonly) ASTextKitShadower * shadower;                              //@synthesize shadower=_shadower - In the implementation block
@property (nonatomic,readonly) ASTextKitAttributes attributes;                            //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) CGSize constrainedSize;                                      //@synthesize constrainedSize=_constrainedSize - In the implementation block
@property (nonatomic,readonly) double currentScaleFactor;                                 //@synthesize currentScaleFactor=_currentScaleFactor - In the implementation block
@property (nonatomic,readonly) vector<_NSRange visibleRanges; 
-(NSRange)firstVisibleRange;
-(CGRect)frameForTextRange:(NSRange)arg1 ;
-(void)enumerateTextIndexesAtPosition:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)rectsForTextRange:(NSRange)arg1 measureOption:(unsigned long long)arg2 ;
-(CGRect)trailingRect;
-(id)unlockedRectsForTextRange:(NSRange)arg1 measureOptions:(unsigned long long)arg2 layoutManager:(id)arg3 textStorage:(id)arg4 textContainer:(id)arg5 ;
-(CGRect)_internalRectForGlyphAtIndex:(unsigned long long)arg1 measureOption:(unsigned long long)arg2 layoutManager:(id)arg3 textContainer:(id)arg4 textStorage:(id)arg5 ;
-(unsigned long long)nearestTextIndexAtPosition:(CGPoint)arg1 ;
-(void)setConstrainedSize:(CGSize)arg1 ;
-(CGSize)constrainedSize;
-(id)initWithTextKitAttributes:(const ASTextKitAttributes*)arg1 constrainedSize:(CGSize)arg2 ;
-(ASTextKitShadower *)shadower;
-(void)drawInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 ;
-(void)_calculateSize;
-(ASTextKitFontSizeAdjuster *)fontSizeAdjuster;
-(id<ASTextKitTruncating>)truncater;
-(vector<_NSRange)visibleRanges;
-(BOOL)isScaled;
-(CGSize)size;
-(ASTextKitContext *)context;
-(ASTextKitAttributes)attributes;
-(unsigned long long)lineCount;
-(double)currentScaleFactor;
@end
