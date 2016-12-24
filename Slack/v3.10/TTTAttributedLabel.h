/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
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
@class NSAttributedString, NSDictionary, UIColor, UILongPressGestureRecognizer, NSDataDetector, NSArray, TTTAttributedLabelLink, NSString;

@interface TTTAttributedLabel : UILabel <TTTAttributedLabel, UIGestureRecognizerDelegate> {

	BOOL _needsFramesetter;
	CTFramesetterRef _framesetter;
	CTFramesetterRef _highlightFramesetter;
	BOOL _extendsLinkTouchArea;
	NSAttributedString* _attributedText;
	id<TTTAttributedLabelDelegate> _delegate;
	unsigned long long _enabledTextCheckingTypes;
	NSDictionary* _linkAttributes;
	NSDictionary* _activeLinkAttributes;
	NSDictionary* _inactiveLinkAttributes;
	double _shadowRadius;
	double _highlightedShadowRadius;
	UIColor* _highlightedShadowColor;
	double _kern;
	double _firstLineIndent;
	double _lineSpacing;
	double _minimumLineHeight;
	double _maximumLineHeight;
	double _lineHeightMultiple;
	long long _verticalAlignment;
	NSAttributedString* _attributedTruncationToken;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSAttributedString* _inactiveAttributedText;
	NSAttributedString* _renderedAttributedText;
	NSDataDetector* _dataDetector;
	NSArray* _linkModels;
	TTTAttributedLabelLink* _activeLink;
	NSArray* _accessibilityElements;
	CGSize _highlightedShadowOffset;
	UIEdgeInsets _linkBackgroundEdgeInset;
	UIEdgeInsets _textInsets;

}

@property (nonatomic,copy) NSAttributedString * inactiveAttributedText;                                //@synthesize inactiveAttributedText=_inactiveAttributedText - In the implementation block
@property (nonatomic,copy) NSAttributedString * renderedAttributedText;                                //@synthesize renderedAttributedText=_renderedAttributedText - In the implementation block
@property (retain) NSDataDetector * dataDetector;                                                      //@synthesize dataDetector=_dataDetector - In the implementation block
@property (nonatomic,retain) NSArray * linkModels;                                                     //@synthesize linkModels=_linkModels - In the implementation block
@property (nonatomic,retain) TTTAttributedLabelLink * activeLink;                                      //@synthesize activeLink=_activeLink - In the implementation block
@property (nonatomic,retain) NSArray * accessibilityElements;                                          //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (assign,nonatomic) id<TTTAttributedLabelDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long enabledTextCheckingTypes;                              //@synthesize enabledTextCheckingTypes=_enabledTextCheckingTypes - In the implementation block
@property (nonatomic,readonly) NSArray * links; 
@property (nonatomic,retain) NSDictionary * linkAttributes;                                            //@synthesize linkAttributes=_linkAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * activeLinkAttributes;                                      //@synthesize activeLinkAttributes=_activeLinkAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * inactiveLinkAttributes;                                    //@synthesize inactiveLinkAttributes=_inactiveLinkAttributes - In the implementation block
@property (assign,nonatomic) UIEdgeInsets linkBackgroundEdgeInset;                                     //@synthesize linkBackgroundEdgeInset=_linkBackgroundEdgeInset - In the implementation block
@property (assign,nonatomic) BOOL extendsLinkTouchArea;                                                //@synthesize extendsLinkTouchArea=_extendsLinkTouchArea - In the implementation block
@property (assign,nonatomic) double shadowRadius;                                                      //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double highlightedShadowRadius;                                           //@synthesize highlightedShadowRadius=_highlightedShadowRadius - In the implementation block
@property (assign,nonatomic) CGSize highlightedShadowOffset;                                           //@synthesize highlightedShadowOffset=_highlightedShadowOffset - In the implementation block
@property (nonatomic,retain) UIColor * highlightedShadowColor;                                         //@synthesize highlightedShadowColor=_highlightedShadowColor - In the implementation block
@property (assign,nonatomic) double kern;                                                              //@synthesize kern=_kern - In the implementation block
@property (assign,nonatomic) double firstLineIndent;                                                   //@synthesize firstLineIndent=_firstLineIndent - In the implementation block
@property (assign,nonatomic) double lineSpacing;                                                       //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) double minimumLineHeight;                                                 //@synthesize minimumLineHeight=_minimumLineHeight - In the implementation block
@property (assign,nonatomic) double maximumLineHeight;                                                 //@synthesize maximumLineHeight=_maximumLineHeight - In the implementation block
@property (assign,nonatomic) double lineHeightMultiple;                                                //@synthesize lineHeightMultiple=_lineHeightMultiple - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textInsets;                                                  //@synthesize textInsets=_textInsets - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                                              //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedTruncationToken;                           //@synthesize attributedTruncationToken=_attributedTruncationToken - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                                        //@synthesize attributedText=_attributedText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id text; 
+(CGSize)sizeThatFitsAttributedString:(id)arg1 withConstraints:(CGSize)arg2 limitedToNumberOfLines:(unsigned long long)arg3 ;
+(void)load;
-(void)setEnabledTextCheckingTypes:(unsigned long long)arg1 ;
-(void)setLinkAttributes:(NSDictionary *)arg1 ;
-(void)setActiveLinkAttributes:(NSDictionary *)arg1 ;
-(id)addLinkToURL:(id)arg1 withRange:(NSRange)arg2 ;
-(NSDictionary *)linkAttributes;
-(id)addLinkWithTextCheckingResult:(id)arg1 attributes:(id)arg2 ;
-(void)setLinkModels:(NSArray *)arg1 ;
-(void)setLinkBackgroundEdgeInset:(UIEdgeInsets)arg1 ;
-(void)setInactiveLinkAttributes:(NSDictionary *)arg1 ;
-(void)longPressGestureDidFire:(id)arg1 ;
-(void)setNeedsFramesetter;
-(void)setRenderedAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)renderedAttributedText;
-(void)setFramesetter:(CTFramesetterRef)arg1 ;
-(void)setHighlightFramesetter:(CTFramesetterRef)arg1 ;
-(unsigned long long)enabledTextCheckingTypes;
-(void)setDataDetector:(NSDataDetector *)arg1 ;
-(void)addLinks:(id)arg1 ;
-(NSArray *)linkModels;
-(id)addLinksWithTextCheckingResults:(id)arg1 attributes:(id)arg2 ;
-(NSDictionary *)activeLinkAttributes;
-(NSDictionary *)inactiveLinkAttributes;
-(id)addLinkWithTextCheckingResult:(id)arg1 ;
-(id)linkAtPoint:(CGPoint)arg1 ;
-(id)linkAtCharacterIndex:(long long)arg1 ;
-(BOOL)extendsLinkTouchArea;
-(id)linkAtRadius:(double)arg1 aroundPoint:(CGPoint)arg2 ;
-(void)drawBackground:(CTFrameRef)arg1 inRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(NSAttributedString *)attributedTruncationToken;
-(void)drawStrike:(CTFrameRef)arg1 inRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(UIEdgeInsets)linkBackgroundEdgeInset;
-(void)setText:(id)arg1 afterInheritingLabelAttributesAndConfiguringWithBlock:(/*^block*/id)arg2 ;
-(void)setActiveLink:(TTTAttributedLabelLink *)arg1 ;
-(NSAttributedString *)inactiveAttributedText;
-(void)setInactiveAttributedText:(NSAttributedString *)arg1 ;
-(TTTAttributedLabelLink *)activeLink;
-(UIColor *)highlightedShadowColor;
-(CGSize)highlightedShadowOffset;
-(double)highlightedShadowRadius;
-(CTFramesetterRef)highlightFramesetter;
-(void)drawFramesetter:(CTFramesetterRef)arg1 attributedString:(id)arg2 textRange:(SCD_Struct_TT24)arg3 inRect:(CGRect)arg4 context:(CGContextRef)arg5 ;
-(BOOL)containslinkAtPoint:(CGPoint)arg1 ;
-(double)kern;
-(void)setHighlightedShadowRadius:(double)arg1 ;
-(void)setHighlightedShadowOffset:(CGSize)arg1 ;
-(void)setHighlightedShadowColor:(UIColor *)arg1 ;
-(void)setKern:(double)arg1 ;
-(void)setAttributedTruncationToken:(NSAttributedString *)arg1 ;
-(id)addLinkToAddress:(id)arg1 withRange:(NSRange)arg2 ;
-(id)addLinkToPhoneNumber:(id)arg1 withRange:(NSRange)arg2 ;
-(id)addLinkToDate:(id)arg1 withRange:(NSRange)arg2 ;
-(id)addLinkToDate:(id)arg1 timeZone:(id)arg2 duration:(double)arg3 withRange:(NSRange)arg4 ;
-(id)addLinkToTransitInformation:(id)arg1 withRange:(NSRange)arg2 ;
-(void)setExtendsLinkTouchArea:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TTTAttributedLabelDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<TTTAttributedLabelDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setTextColor:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setMinimumLineHeight:(double)arg1 ;
-(void)setMaximumLineHeight:(double)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)textColor;
-(NSAttributedString *)attributedText;
-(double)shadowRadius;
-(void)copy:(id)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(double)minimumLineHeight;
-(double)maximumLineHeight;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(void)commonInit;
-(BOOL)isAccessibilityElement;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setTextInsets:(UIEdgeInsets)arg1 ;
-(NSArray *)links;
-(void)setLineHeightMultiple:(double)arg1 ;
-(double)lineHeightMultiple;
-(double)firstLineIndent;
-(UIEdgeInsets)textInsets;
-(void)addLink:(id)arg1 ;
-(void)setFirstLineIndent:(double)arg1 ;
-(NSDataDetector *)dataDetector;
-(long long)characterIndexAtPoint:(CGPoint)arg1 ;
-(CTFramesetterRef)framesetter;
-(CGRect)boundingRectForCharacterRange:(NSRange)arg1 ;
@end
