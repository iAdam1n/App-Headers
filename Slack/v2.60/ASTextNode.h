/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/ASControlNode.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol ASTextNodeDelegate;
@class NSArray, NSAttributedString, NSString, ASHighlightOverlayLayer, ASTextNodeRenderer, ASTextNodeShadower, UILongPressGestureRecognizer, UIColor;

@interface ASTextNode : ASControlNode <UIGestureRecognizerDelegate> {

	CGSize _shadowOffset;
	CGColorRef _shadowColor;
	double _shadowOpacity;
	double _shadowRadius;
	NSArray* _exclusionPaths;
	NSAttributedString* _composedTruncationString;
	NSString* _highlightedLinkAttributeName;
	id _highlightedLinkAttributeValue;
	NSRange _highlightRange;
	ASHighlightOverlayLayer* _activeHighlightLayer;
	Mutex _rendererLock;
	CGSize _constrainedSize;
	ASTextNodeRenderer* _renderer;
	ASTextNodeShadower* _shadower;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _longPressCancelsTouches;
	BOOL _passthroughNonlinkTouches;
	NSAttributedString* _attributedString;
	NSAttributedString* _truncationAttributedString;
	NSAttributedString* _additionalTruncationMessage;
	long long _truncationMode;
	unsigned long long _maximumLineCount;
	UIColor* _placeholderColor;
	NSArray* _linkAttributeNames;
	unsigned long long _highlightStyle;
	id<ASTextNodeDelegate> _delegate;
	UIEdgeInsets _placeholderInsets;

}

@property (nonatomic,copy) NSAttributedString * attributedString;                         //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,copy) NSAttributedString * truncationAttributedString;               //@synthesize truncationAttributedString=_truncationAttributedString - In the implementation block
@property (nonatomic,copy) NSAttributedString * additionalTruncationMessage;              //@synthesize additionalTruncationMessage=_additionalTruncationMessage - In the implementation block
@property (assign,nonatomic) long long truncationMode;                                    //@synthesize truncationMode=_truncationMode - In the implementation block
@property (getter=isTruncated,nonatomic,readonly) BOOL truncated; 
@property (assign,nonatomic) unsigned long long maximumLineCount;                         //@synthesize maximumLineCount=_maximumLineCount - In the implementation block
@property (nonatomic,readonly) unsigned long long lineCount; 
@property (nonatomic,retain) NSArray * exclusionPaths; 
@property (nonatomic,retain) UIColor * placeholderColor;                                  //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets placeholderInsets;                              //@synthesize placeholderInsets=_placeholderInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets shadowPadding; 
@property (nonatomic,copy) NSArray * linkAttributeNames;                                  //@synthesize linkAttributeNames=_linkAttributeNames - In the implementation block
@property (assign,nonatomic) unsigned long long highlightStyle;                           //@synthesize highlightStyle=_highlightStyle - In the implementation block
@property (assign,nonatomic) NSRange highlightRange; 
@property (assign,nonatomic,__weak) id<ASTextNodeDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL longPressCancelsTouches;                                //@synthesize longPressCancelsTouches=_longPressCancelsTouches - In the implementation block
@property (assign,nonatomic) BOOL passthroughNonlinkTouches;                              //@synthesize passthroughNonlinkTouches=_passthroughNonlinkTouches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)drawRect:(CGRect)arg1 withParameters:(id)arg2 isCancelled:(/*^block*/id)arg3 isRasterizing:(BOOL)arg4 ;
+(CGRect)_adjustRendererRect:(CGRect)arg1 forShadowPadding:(UIEdgeInsets)arg2 ;
+(double)_highlightOpacityForStyle:(unsigned long long)arg1 ;
+(CGColorRef)_highlightColorForStyle:(unsigned long long)arg1 ;
-(id)initWithViewBlock:(/*^block*/id)arg1 ;
-(id)drawParametersForAsyncLayer:(id)arg1 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)displayDidFinish;
-(void)clearContents;
-(id)initWithLayerBlock:(/*^block*/id)arg1 ;
-(CGRect)frameForTextRange:(NSRange)arg1 ;
-(id)_shadower;
-(void)setLinkAttributeNames:(NSArray *)arg1 ;
-(void)_invalidateRenderer;
-(BOOL)longPressCancelsTouches;
-(id)_linkAttributeValueAtPoint:(CGPoint)arg1 attributeName:(out id*)arg2 range:(out NSRange*)arg3 inAdditionalTruncationMessage:(out BOOL*)arg4 ;
-(BOOL)_pendingTruncationTap;
-(BOOL)_pendingLinkTap;
-(void)setHighlightRange:(NSRange)arg1 animated:(BOOL)arg2 ;
-(void)_setHighlightRange:(NSRange)arg1 forAttributeName:(id)arg2 value:(id)arg3 animated:(BOOL)arg4 ;
-(unsigned long long)highlightStyle;
-(id)_rectsForTextRange:(NSRange)arg1 measureOption:(unsigned long long)arg2 ;
-(CGRect)trailingRect;
-(UIEdgeInsets)placeholderInsets;
-(NSRange)_additionalTruncationMessageRangeWithVisibleRange:(NSRange)arg1 ;
-(void)_clearHighlightIfNecessary;
-(void)_invalidateShadower;
-(void)_invalidateTruncationString;
-(id)_composedTruncationString;
-(id)_prepareTruncationStringForDrawing:(id)arg1 ;
-(id)linkAttributeValueAtPoint:(CGPoint)arg1 attributeName:(out id*)arg2 range:(out NSRange*)arg3 ;
-(NSRange)highlightRange;
-(void)setHighlightRange:(NSRange)arg1 ;
-(id)rectsForTextRange:(NSRange)arg1 ;
-(id)highlightRectsForTextRange:(NSRange)arg1 ;
-(void)setTruncationAttributedString:(NSAttributedString *)arg1 ;
-(void)setAdditionalTruncationMessage:(NSAttributedString *)arg1 ;
-(void)setMaximumLineCount:(unsigned long long)arg1 ;
-(NSAttributedString *)truncationAttributedString;
-(NSAttributedString *)additionalTruncationMessage;
-(unsigned long long)maximumLineCount;
-(void)setPlaceholderInsets:(UIEdgeInsets)arg1 ;
-(NSArray *)linkAttributeNames;
-(void)setHighlightStyle:(unsigned long long)arg1 ;
-(void)setLongPressCancelsTouches:(BOOL)arg1 ;
-(BOOL)passthroughNonlinkTouches;
-(void)setPassthroughNonlinkTouches:(BOOL)arg1 ;
-(unsigned long long)lineCount;
-(void)_handleLongPress:(id)arg1 ;
-(id)_renderer;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(double)shadowOpacity;
-(void)didLoad;
-(void)setDelegate:(id<ASTextNodeDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)description;
-(id<ASTextNodeDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setShadowColor:(CGColorRef)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)shadowOffset;
-(CGColorRef)shadowColor;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
-(double)shadowRadius;
-(UIEdgeInsets)shadowPadding;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(id)placeholderImage;
-(NSArray *)exclusionPaths;
-(void)setExclusionPaths:(NSArray *)arg1 ;
-(long long)truncationMode;
-(void)setTruncationMode:(long long)arg1 ;
-(BOOL)isTruncated;
@end

