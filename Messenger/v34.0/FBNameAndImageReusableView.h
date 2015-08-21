/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBMultiSelectableTableViewCell.h>
#import <Messenger/FBTextLabeling.h>

@protocol FBAvatarProtocol;
@class UIImageView, FBConsistentLookasideCacheObservationHandle, FBAttributedTextReusableView_DEPRECATED, UIFont, NSAttributedString, FBRichTextView, UIView, FBGraphQLConsistentLookasideCache;

@interface FBNameAndImageReusableView : UIView <FBMultiSelectableTableViewCell, FBTextLabeling> {

	UIImageView* _customAccessoryView;
	FBConsistentLookasideCacheObservationHandle* _avatarCLCHandle;
	UIImageView* _verifiedBadgeView;
	FBAttributedTextReusableView_DEPRECATED* _textView;
	UIFont* _font;
	UIFont* _boldFont;
	BOOL _accessorySelected;
	CGRect _textLayoutFrame;
	BOOL _multiSelectionEnabled;
	BOOL _shouldShowSeparator;
	BOOL _boldSortedNameComponent;
	BOOL _hasSubtitle;
	NSAttributedString* _text;
	FBRichTextView* _attributedLabel;
	long long _verticalTextAlignment;
	id<FBAvatarProtocol> _avatar;
	CGColorRef _normalTextColor;
	CGColorRef _highlightedTextColor;
	UIView* _customImageView;
	double _fontSize;
	NSAttributedString* _normalText;
	NSAttributedString* _highlightedText;
	FBGraphQLConsistentLookasideCache* _consistentLookasideCache;

}

@property (assign,nonatomic) UIEdgeInsets textPadding; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,retain) id<FBAvatarProtocol> avatar;                                               //@synthesize avatar=_avatar - In the implementation block
@property (nonatomic,retain) CGColorRef normalTextColor;                                                //@synthesize normalTextColor=_normalTextColor - In the implementation block
@property (nonatomic,retain) CGColorRef highlightedTextColor;                                           //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (assign,nonatomic) BOOL boldSortedNameComponent;                                              //@synthesize boldSortedNameComponent=_boldSortedNameComponent - In the implementation block
@property (nonatomic,retain) UIView * customImageView;                                                  //@synthesize customImageView=_customImageView - In the implementation block
@property (assign,nonatomic) BOOL hasSubtitle;                                                          //@synthesize hasSubtitle=_hasSubtitle - In the implementation block
@property (assign,nonatomic) CGRect textLayoutFrame; 
@property (assign,nonatomic) double fontSize;                                                           //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,retain) NSAttributedString * normalText;                                           //@synthesize normalText=_normalText - In the implementation block
@property (nonatomic,retain) NSAttributedString * highlightedText;                                      //@synthesize highlightedText=_highlightedText - In the implementation block
@property (nonatomic,retain) FBGraphQLConsistentLookasideCache * consistentLookasideCache;              //@synthesize consistentLookasideCache=_consistentLookasideCache - In the implementation block
@property (assign,nonatomic) BOOL multiSelectionEnabled;                                                //@synthesize multiSelectionEnabled=_multiSelectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSeparator;                                                  //@synthesize shouldShowSeparator=_shouldShowSeparator - In the implementation block
@property (nonatomic,copy) NSAttributedString * text;                                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) FBRichTextView * attributedLabel;                                        //@synthesize attributedLabel=_attributedLabel - In the implementation block
@property (assign,nonatomic) long long verticalTextAlignment;                                           //@synthesize verticalTextAlignment=_verticalTextAlignment - In the implementation block
-(FBGraphQLConsistentLookasideCache *)consistentLookasideCache;
-(void)setAvatar:(id<FBAvatarProtocol>)arg1 ;
-(id<FBAvatarProtocol>)avatar;
-(UIEdgeInsets)textPadding;
-(void)setTextPadding:(UIEdgeInsets)arg1 ;
-(CGRect)textLayoutFrame;
-(long long)verticalTextAlignment;
-(void)setVerticalTextAlignment:(long long)arg1 ;
-(FBRichTextView *)attributedLabel;
-(void)setHasSubtitle:(BOOL)arg1 ;
-(void)refreshCell;
-(void)setTextLayoutFrame:(CGRect)arg1 ;
-(CGColorRef)normalTextColor;
-(void)setNormalTextColor:(CGColorRef)arg1 ;
-(BOOL)boldSortedNameComponent;
-(void)setBoldSortedNameComponent:(BOOL)arg1 ;
-(void)setupImageFrame;
-(void)setConsistentLookasideCache:(FBGraphQLConsistentLookasideCache *)arg1 ;
-(void)_memAvatarUpdated:(id)arg1 ;
-(void)setNormalText:(NSAttributedString *)arg1 ;
-(void)setHighlightedText:(NSAttributedString *)arg1 ;
-(void)_updateHighlightedText;
-(void)_updateNormalText;
-(id)avatarTextWithSubtitle:(BOOL)arg1 highlighted:(BOOL)arg2 boldSortedNameComponent:(BOOL)arg3 normalColor:(CGColorRef)arg4 highlightedColor:(CGColorRef)arg5 ;
-(BOOL)isActuallyHighlighted;
-(BOOL)multiSelectionEnabled;
-(void)setMultiSelectionEnabled:(BOOL)arg1 ;
-(BOOL)shouldShowSeparator;
-(void)setShouldShowSeparator:(BOOL)arg1 ;
-(void)setAccessorySelected:(BOOL)arg1 ;
-(NSAttributedString *)normalText;
-(NSAttributedString *)highlightedText;
-(UIView *)customImageView;
-(void)setCustomImageView:(UIView *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setHighlightedTextColor:(CGColorRef)arg1 ;
-(CGColorRef)highlightedTextColor;
-(void)setFontSize:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)fontSize;
-(BOOL)hasSubtitle;
-(void)_updateText;
-(id)initWithSession:(id)arg1 ;
-(UIEdgeInsets)separatorInsets;
@end

