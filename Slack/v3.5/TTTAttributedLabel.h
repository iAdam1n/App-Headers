/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UILabel.h>
#import <Slack/TTTAttributedLabel.h>

@protocol TTTAttributedLabel <NSObject>
@property (nonatomic,copy) id text; 
@required
-(id)text;
-(void)setText:(id)arg1;

@end

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TTTAttributedLabelDelegate;
@class NSAttributedString, NSDataDetector, NSArray, NSDictionary, UIColor, NSString, NSTextCheckingResult;

@interface TTTAttributedLabel : UILabel <TTTAttributedLabel, UIGestureRecognizerDelegate> {

	BOOL _needsFramesetter;
	int _verticalAlignment;
	NSAttributedString* _attributedText;
	NSAttributedString* _inactiveAttributedText;
	NSAttributedString* _renderedAttributedText;
	CTFramesetterRef _framesetter;
	CTFramesetterRef _highlightFramesetter;
	id<TTTAttributedLabelDelegate> _delegate;
	unsigned long long _dataDetectorTypes;
	NSDataDetector* _dataDetector;
	NSArray* _links;
	NSDictionary* _linkAttributes;
	NSDictionary* _activeLinkAttributes;
	double _shadowRadius;
	double _highlightedShadowRadius;
	UIColor* _highlightedShadowColor;
	double _leading;
	double _lineHeightMultiple;
	double _firstLineIndent;
	NSString* _truncationTokenString;
	NSTextCheckingResult* _activeLink;
	CGSize _highlightedShadowOffset;
	UIEdgeInsets _textInsets;

}

@property (nonatomic,copy) NSAttributedString * inactiveAttributedText;              //@synthesize inactiveAttributedText=_inactiveAttributedText - In the implementation block
@property (nonatomic,copy) NSAttributedString * renderedAttributedText;              //@synthesize renderedAttributedText=_renderedAttributedText - In the implementation block
@property (assign,nonatomic) CTFramesetterRef framesetter;                           //@synthesize framesetter=_framesetter - In the implementation block
@property (assign,nonatomic) CTFramesetterRef highlightFramesetter;                  //@synthesize highlightFramesetter=_highlightFramesetter - In the implementation block
@property (nonatomic,retain) NSDataDetector * dataDetector;                          //@synthesize dataDetector=_dataDetector - In the implementation block
@property (nonatomic,retain) NSArray * links;                                        //@synthesize links=_links - In the implementation block
@property (nonatomic,retain) NSTextCheckingResult * activeLink;                      //@synthesize activeLink=_activeLink - In the implementation block
@property (assign,nonatomic) id<TTTAttributedLabelDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long dataDetectorTypes;                   //@synthesize dataDetectorTypes=_dataDetectorTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * linkAttributes;                          //@synthesize linkAttributes=_linkAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * activeLinkAttributes;                    //@synthesize activeLinkAttributes=_activeLinkAttributes - In the implementation block
@property (assign,nonatomic) double shadowRadius;                                    //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double highlightedShadowRadius;                         //@synthesize highlightedShadowRadius=_highlightedShadowRadius - In the implementation block
@property (assign,nonatomic) CGSize highlightedShadowOffset;                         //@synthesize highlightedShadowOffset=_highlightedShadowOffset - In the implementation block
@property (nonatomic,retain) UIColor * highlightedShadowColor;                       //@synthesize highlightedShadowColor=_highlightedShadowColor - In the implementation block
@property (assign,nonatomic) double firstLineIndent;                                 //@synthesize firstLineIndent=_firstLineIndent - In the implementation block
@property (assign,nonatomic) double leading;                                         //@synthesize leading=_leading - In the implementation block
@property (assign,nonatomic) double lineHeightMultiple;                              //@synthesize lineHeightMultiple=_lineHeightMultiple - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textInsets;                                //@synthesize textInsets=_textInsets - In the implementation block
@property (assign,nonatomic) int verticalAlignment;                                  //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,retain) NSString * truncationTokenString;                       //@synthesize truncationTokenString=_truncationTokenString - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                      //@synthesize attributedText=_attributedText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id text; 
-(void)setLinkAttributes:(NSDictionary *)arg1 ;
-(void)setActiveLinkAttributes:(NSDictionary *)arg1 ;
-(void)addLinkToURL:(id)arg1 withRange:(NSRange)arg2 ;
-(NSDictionary *)linkAttributes;
-(void)addLinkWithTextCheckingResult:(id)arg1 attributes:(id)arg2 ;
-(void)setNeedsFramesetter;
-(void)setRenderedAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)renderedAttributedText;
-(void)setFramesetter:(CTFramesetterRef)arg1 ;
-(void)setHighlightFramesetter:(CTFramesetterRef)arg1 ;
-(void)setDataDetector:(NSDataDetector *)arg1 ;
-(void)addLinksWithTextCheckingResults:(id)arg1 attributes:(id)arg2 ;
-(void)addLinkWithTextCheckingResult:(id)arg1 ;
-(long long)characterIndexAtPoint:(CGPoint)arg1 ;
-(id)linkAtCharacterIndex:(long long)arg1 ;
-(CTFramesetterRef)framesetter;
-(void)drawBackground:(CTFrameRef)arg1 inRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(NSString *)truncationTokenString;
-(void)drawStrike:(CTFrameRef)arg1 inRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(void)setText:(id)arg1 afterInheritingLabelAttributesAndConfiguringWithBlock:(/*^block*/id)arg2 ;
-(void)setActiveLink:(NSTextCheckingResult *)arg1 ;
-(NSDataDetector *)dataDetector;
-(NSDictionary *)activeLinkAttributes;
-(NSAttributedString *)inactiveAttributedText;
-(void)setInactiveAttributedText:(NSAttributedString *)arg1 ;
-(UIColor *)highlightedShadowColor;
-(CGSize)highlightedShadowOffset;
-(double)highlightedShadowRadius;
-(CTFramesetterRef)highlightFramesetter;
-(void)drawFramesetter:(CTFramesetterRef)arg1 attributedString:(id)arg2 textRange:(SCD_Struct_TT26)arg3 inRect:(CGRect)arg4 context:(CGContextRef)arg5 ;
-(id)linkAtPoint:(CGPoint)arg1 ;
-(NSTextCheckingResult *)activeLink;
-(void)setHighlightedShadowRadius:(double)arg1 ;
-(void)setHighlightedShadowOffset:(CGSize)arg1 ;
-(void)setHighlightedShadowColor:(UIColor *)arg1 ;
-(void)setTruncationTokenString:(NSString *)arg1 ;
-(void)addLinkToAddress:(id)arg1 withRange:(NSRange)arg2 ;
-(void)addLinkToPhoneNumber:(id)arg1 withRange:(NSRange)arg2 ;
-(void)addLinkToDate:(id)arg1 withRange:(NSRange)arg2 ;
-(void)addLinkToDate:(id)arg1 timeZone:(id)arg2 duration:(double)arg3 withRange:(NSRange)arg4 ;
-(void)addLinkToTransitInformation:(id)arg1 withRange:(NSRange)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TTTAttributedLabelDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<TTTAttributedLabelDelegate>)delegate;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setTextColor:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSAttributedString *)attributedText;
-(id)textColor;
-(void)setShadowRadius:(double)arg1 ;
-(double)shadowRadius;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(NSArray *)links;
-(double)leading;
-(void)commonInit;
-(int)verticalAlignment;
-(void)setVerticalAlignment:(int)arg1 ;
-(void)setTextInsets:(UIEdgeInsets)arg1 ;
-(void)setLinks:(NSArray *)arg1 ;
-(void)setLineHeightMultiple:(double)arg1 ;
-(void)setLeading:(double)arg1 ;
-(double)lineHeightMultiple;
-(double)firstLineIndent;
-(UIEdgeInsets)textInsets;
-(void)setFirstLineIndent:(double)arg1 ;
@end

