/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <Twitter/TFNUITextRendererDelegate.h>
#import <Twitter/TFNAttributedStringItemActiveRangeHandler.h>

@class UILongPressGestureRecognizer, TFNUITextRenderer, NSAttributedString, NSArray, UIColor, TFNTwitterStatus, TFNTwitterAccount, UIViewController, NSString, TFNTwitterUser, TFNViewController;

@interface TFNAttributedStringItem : UIView <TFNUITextRendererDelegate, TFNAttributedStringItemActiveRangeHandler> {

	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	TFNUITextRenderer* renderer;
	BOOL highlightAllText;
	BOOL _singleLine;
	unsigned char _lineBreakMode;
	BOOL _statusVisible;
	BOOL _accessibilityDisabledForLinks;
	BOOL _accessibilityEnabledForWholeText;
	NSAttributedString* attributedString;
	NSArray* activeRanges;
	UIColor* _shadowColor;
	TFNTwitterStatus* status;
	TFNTwitterAccount* account;
	UIViewController* sourceViewController;
	NSString* lastSelectedString;
	UIColor* highlightColor;
	/*^block*/id highlightAllBlock;
	/*^block*/id deleteBlock;
	/*^block*/id copyBlock;
	/*^block*/id didTapActiveRangeBlock;
	/*^block*/id didTapInactiveAreaBlock;
	TFNTwitterUser* _user;
	unsigned long long _displayTextOptions;
	TFNViewController* _scribeController;
	CGSize _shadowOffset;
	UIEdgeInsets textInsets;

}

@property (nonatomic,copy) NSString * lastSelectedString; 
@property (nonatomic,retain) UIColor * highlightColor; 
@property (assign,nonatomic) UIEdgeInsets textInsets; 
@property (assign,nonatomic) BOOL singleLine;                                             //@synthesize singleLine=_singleLine - In the implementation block
@property (assign,nonatomic) unsigned char lineBreakMode;                                 //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                                       //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                                         //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedString; 
@property (nonatomic,retain) TFNTwitterStatus * status; 
@property (nonatomic,retain) TFNTwitterUser * user;                                       //@synthesize user=_user - In the implementation block
@property (assign,getter=isStatusVisible,nonatomic) BOOL statusVisible;                   //@synthesize statusVisible=_statusVisible - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account; 
@property (assign,nonatomic) unsigned long long displayTextOptions;                       //@synthesize displayTextOptions=_displayTextOptions - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * sourceViewController; 
@property (assign,nonatomic,__weak) TFNViewController * scribeController;                 //@synthesize scribeController=_scribeController - In the implementation block
@property (nonatomic,copy) id highlightAllBlock; 
@property (nonatomic,copy) id deleteBlock; 
@property (nonatomic,copy) id copyBlock; 
@property (nonatomic,copy) id didTapActiveRangeBlock; 
@property (nonatomic,copy) id didTapInactiveAreaBlock; 
@property (assign,nonatomic) BOOL accessibilityDisabledForLinks;                          //@synthesize accessibilityDisabledForLinks=_accessibilityDisabledForLinks - In the implementation block
@property (assign,nonatomic) BOOL accessibilityEnabledForWholeText;                       //@synthesize accessibilityEnabledForWholeText=_accessibilityEnabledForWholeText - In the implementation block
@property (nonatomic,retain) NSString * accessibilityIdentifierForWholeText; 
@property (nonatomic,retain) NSArray * activeRanges; 
@property (assign,nonatomic) BOOL highlightAllText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tfn_defaultDataViewAdapter;
+(id)itemWithAttributedString:(id)arg1 activeRanges:(id)arg2 status:(id)arg3 account:(id)arg4 viewController:(id)arg5 singleLine:(BOOL)arg6 truncateTail:(BOOL)arg7 shadowColor:(id)arg8 shadowOffset:(CGSize)arg9 highlightColor:(id)arg10 ;
+(id)itemWithAttributedString:(id)arg1 activeRanges:(id)arg2 user:(id)arg3 account:(id)arg4 viewController:(id)arg5 singleLine:(BOOL)arg6 truncateTail:(BOOL)arg7 shadowColor:(id)arg8 shadowOffset:(CGSize)arg9 highlightColor:(id)arg10 ;
+(id)itemWithAttributedString:(id)arg1 activeRanges:(id)arg2 displayTextOptions:(unsigned long long)arg3 status:(id)arg4 account:(id)arg5 viewController:(id)arg6 singleLine:(BOOL)arg7 truncateTail:(BOOL)arg8 shadowColor:(id)arg9 shadowOffset:(CGSize)arg10 highlightColor:(id)arg11 ;
+(id)itemWithAttributedString:(id)arg1 activeRanges:(id)arg2 displayTextOptions:(unsigned long long)arg3 status:(id)arg4 user:(id)arg5 account:(id)arg6 viewController:(id)arg7 singleLine:(BOOL)arg8 truncateTail:(BOOL)arg9 shadowColor:(id)arg10 shadowOffset:(CGSize)arg11 highlightColor:(id)arg12 ;
-(void)slideshow:(id)arg1 didSelectStatus:(id)arg2 ;
-(void)slideshow:(id)arg1 didDeleteStatus:(id)arg2 ;
-(void)slideshow:(id)arg1 didSelectUser:(id)arg2 ;
-(void)tfn_handleActiveRange:(id)arg1 ;
-(id)tfn_extendedHandleActiveRange:(id)arg1 withViewParameters:(id)arg2 ;
-(void)setActiveRanges:(NSArray *)arg1 ;
-(void)setSourceViewController:(UIViewController *)arg1 ;
-(BOOL)singleLine;
-(NSArray *)activeRanges;
-(unsigned long long)displayTextOptions;
-(void)setDidTapActiveRangeBlock:(id)arg1 ;
-(void)setAccessibilityDisabledForLinks:(BOOL)arg1 ;
-(void)setAccessibilityEnabledForWholeText:(BOOL)arg1 ;
-(void)setAccessibilityIdentifierForWholeText:(NSString *)arg1 ;
-(void)setCopyBlock:(id)arg1 ;
-(id)didTapActiveRangeBlock;
-(void)setDisplayTextOptions:(unsigned long long)arg1 ;
-(BOOL)tfn_hasTappableLinkAtPoint:(CGPoint)arg1 ;
-(id)activeRangesForTextRenderer:(id)arg1 ;
-(NSString *)accessibilityIdentifierForWholeText;
-(BOOL)accessibilityDisabledForLinks;
-(BOOL)accessibilityEnabledForWholeText;
-(void)menuWasHidden:(id)arg1 ;
-(void)setHighlightAllText:(BOOL)arg1 ;
-(NSString *)lastSelectedString;
-(void)setLastSelectedString:(NSString *)arg1 ;
-(BOOL)_isHighlightableRange:(id)arg1 ;
-(void)_presentLongPressActionSheetInRect:(CGRect)arg1 ;
-(BOOL)highlightAllText;
-(BOOL)isAccessibilityDisabledForLinks;
-(BOOL)isAccessibilityEnabledForWholeText;
-(id)highlightAllBlock;
-(void)setHighlightAllBlock:(id)arg1 ;
-(id)deleteBlock;
-(void)setDeleteBlock:(id)arg1 ;
-(id)copyBlock;
-(id)didTapInactiveAreaBlock;
-(void)setDidTapInactiveAreaBlock:(id)arg1 ;
-(BOOL)isStatusVisible;
-(void)setStatusVisible:(BOOL)arg1 ;
-(TFNViewController *)scribeController;
-(void)setScribeController:(TFNViewController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setLineBreakMode:(unsigned char)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(void)longPress:(id)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(void)copy:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(unsigned char)lineBreakMode;
-(UIViewController *)sourceViewController;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)delete:(id)arg1 ;
-(TFNTwitterStatus *)status;
-(void)setStatus:(TFNTwitterStatus *)arg1 ;
-(void)setTextInsets:(UIEdgeInsets)arg1 ;
-(void)setSingleLine:(BOOL)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
-(UIEdgeInsets)textInsets;
@end
