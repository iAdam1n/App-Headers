/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <Twitter/TFNAttributedTextRendererDelegate.h>
#import <Twitter/TFNPressTouchDetectorDelegate.h>

@protocol TFNAttributedTextViewDelegate;
@class TFNAttributedTextRenderer, TFNPressTouchDetector, TFNAttributedTextModel, NSArray, T1AccessibilityProxyView, UIColor, NSString;

@interface TFNAttributedTextView : UIView <TFNAttributedTextRendererDelegate, TFNPressTouchDetectorDelegate> {

	TFNAttributedTextRenderer* _textRenderer;
	TFNPressTouchDetector* _pressTouchDetector;
	BOOL _handlingTapInRange;
	BOOL _highlighted;
	BOOL _selectionPaddingEnabled;
	id<TFNAttributedTextViewDelegate> _delegate;
	TFNAttributedTextModel* _textModel;
	TFNAttributedTextModel* _highlightedTextModel;
	long long _verticalAlignment;
	NSArray* _activeRanges;
	T1AccessibilityProxyView* _accessibilityProxyView;

}

@property (assign,nonatomic,__weak) id<TFNAttributedTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TFNAttributedTextModel * textModel;                             //@synthesize textModel=_textModel - In the implementation block
@property (nonatomic,readonly) TFNAttributedTextRenderer * textRenderer;                     //@synthesize textRenderer=_textRenderer - In the implementation block
@property (nonatomic,retain) TFNAttributedTextModel * highlightedTextModel;                  //@synthesize highlightedTextModel=_highlightedTextModel - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                                    //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                               //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIColor * selectionColor; 
@property (nonatomic,retain) NSArray * activeRanges;                                         //@synthesize activeRanges=_activeRanges - In the implementation block
@property (assign,nonatomic) BOOL selectionPaddingEnabled;                                   //@synthesize selectionPaddingEnabled=_selectionPaddingEnabled - In the implementation block
@property (nonatomic,retain) T1AccessibilityProxyView * accessibilityProxyView;              //@synthesize accessibilityProxyView=_accessibilityProxyView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)selectionPadding;
-(void)setTextModel:(TFNAttributedTextModel *)arg1 ;
-(void)setActiveRanges:(NSArray *)arg1 ;
-(TFNAttributedTextModel *)textModel;
-(void)setSelectionPaddingEnabled:(BOOL)arg1 ;
-(TFNAttributedTextRenderer *)textRenderer;
-(void)pressTouchDetector:(id)arg1 pressBegan:(id)arg2 withEvent:(id)arg3 ;
-(void)pressTouchDetector:(id)arg1 pressEnded:(id)arg2 withEvent:(id)arg3 forGestureType:(long long)arg4 ;
-(NSArray *)activeRanges;
-(void)setHighlightedTextModel:(TFNAttributedTextModel *)arg1 ;
-(id)activeRangesForAttributedTextRenderer:(id)arg1 ;
-(void)_setupNonCodedValues;
-(void)_updateAccessibilityProxy;
-(BOOL)_hitTestAtPoint:(CGPoint)arg1 ;
-(BOOL)_shouldProcessTouchesInInactiveArea;
-(T1AccessibilityProxyView *)accessibilityProxyView;
-(void)setAccessibilityProxyView:(T1AccessibilityProxyView *)arg1 ;
-(TFNAttributedTextModel *)highlightedTextModel;
-(BOOL)selectionPaddingEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TFNAttributedTextViewDelegate>)arg1 ;
-(id<TFNAttributedTextViewDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)text;
-(void)sizeToFit;
-(id)accessibilityLabel;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGRect)firstRectForRange:(NSRange)arg1 ;
-(BOOL)highlighted;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(UIColor *)selectionColor;
-(void)setSelectionColor:(UIColor *)arg1 ;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
@end

