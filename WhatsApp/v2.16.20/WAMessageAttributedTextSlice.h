/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMessageContainerSlice.h>

@class NSString, NSLock, WAMessageAttributedTextSliceLink, NSTextStorage, NSTextContainer, NSLayoutManager, NSArray, NSSet;

@interface WAMessageAttributedTextSlice : WAMessageContainerSlice {

	NSString* _originalText;
	CGRect _textRect;
	CGRect _lastLineRect;
	BOOL _needsDetectHyperlinks;
	NSLock* _textObjectsLock;
	BOOL _isSingleLine;
	BOOL _isCenterAligned;
	BOOL _isTextRTL;
	long long _maximumNumberOfLines;
	long long _lastValidCharacterIndex;
	WAMessageAttributedTextSliceLink* _readMoreLink;
	NSTextStorage* _textStorage;
	NSTextContainer* _textContainer;
	NSLayoutManager* _layoutManager;
	NSArray* _links;
	NSSet* _highlightedWords;
	NSArray* _highlightedRects;

}

@property (nonatomic,copy,readonly) NSArray * links;                    //@synthesize links=_links - In the implementation block
@property (nonatomic,copy) NSSet * highlightedWords;                    //@synthesize highlightedWords=_highlightedWords - In the implementation block
@property (nonatomic,readonly) NSArray * highlightedRects;              //@synthesize highlightedRects=_highlightedRects - In the implementation block
+(void)detectInviteLinksInText:(id)arg1 ;
+(void)initialize;
+(Class)viewClass;
-(void)drawInCurrentContext;
-(void)internalFitToWidth:(double)arg1 ;
-(void)truncateAndAppendReadMoreLinkIfNeeded;
-(id)rectsForCharacterRange:(NSRange)arg1 inTextContainer:(id)arg2 withLayoutManager:(id)arg3 ;
-(void)performLayoutBlock:(/*^block*/id)arg1 ;
-(void)reallyDetectHyperlinks;
-(id)detectSystemDataTypesInText:(id)arg1 attributedText:(id)arg2 ;
-(id)detectMentionsInText:(id)arg1 attributedText:(id)arg2 ;
-(BOOL)isSubstringInRange:(NSRange)arg1 partOfMentionInString:(id)arg2 ;
-(BOOL)isValidTextCheckingResult:(id)arg1 forText:(id)arg2 ;
-(BOOL)isWord:(id)arg1 foundInHighlightedWords:(id)arg2 ;
-(id)initWithMessage:(id)arg1 metrics:(SCD_Struct_WA40)arg2 attributedText:(id)arg3 maximumNumberOfLines:(long long)arg4 detectHyperlinks:(BOOL)arg5 formatText:(BOOL)arg6 ;
-(void)performHyperlinkDetectionIfNeeded;
-(id)parseInviteLinksInText:(id)arg1 attributedText:(id)arg2 ;
-(void)setHighlightedWords:(NSSet *)arg1 ;
-(NSSet *)highlightedWords;
-(NSArray *)highlightedRects;
-(NSArray *)links;
@end
