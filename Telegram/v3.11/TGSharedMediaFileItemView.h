/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGSharedMediaItemView.h>

@class UIView, UILabel, TGSharedMediaFileThumbnailView, TGImageView, NSString, TGDocumentMediaAttachment, TGSharedMediaAvailabilityState, UIImageView, TGSharedMediaCheckButton, UIGestureRecognizer;

@interface TGSharedMediaFileItemView : TGSharedMediaItemView {

	UIView* _separatorView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	unsigned long long _descriptionLabelSize;
	TGSharedMediaFileThumbnailView* _genericIconView;
	UILabel* _genericIconExtensionLabel;
	TGImageView* _thumbnailIconView;
	NSString* _extension;
	NSString* _legacyThumbnailUrl;
	UIView* _progressView;
	TGDocumentMediaAttachment* _documentAttachment;
	int _date;
	TGSharedMediaAvailabilityState* _availabilityState;
	UIImageView* _availabilityStateIconView;
	TGSharedMediaCheckButton* _checkButton;
	UIGestureRecognizer* _tapRecognizer;

}
-(void)setUseThumbnail;
-(void)setUseGenericIconWithExtension:(id)arg1 ;
-(void)setAvailabilityState:(id)arg1 animated:(BOOL)arg2 ;
-(void)addPositionAnimationToLayer:(id)arg1 from:(CGPoint)arg2 to:(CGPoint)arg3 duration:(double)arg4 ;
-(void)addBoundsAnimationToLayer:(id)arg1 from:(CGRect)arg2 to:(CGRect)arg3 duration:(double)arg4 ;
-(double)editingInset;
-(id)availabilityStateIconDownload;
-(void)addFrameAnimationToView:(id)arg1 from:(CGRect)arg2 to:(CGRect)arg3 duration:(double)arg4 ;
-(id)availabilityStateIconPause;
-(void)layoutDescriptionLabel;
-(id)_imageSignal;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 delay:(double)arg3 ;
-(void)updateItemSelected;
-(void)setDocumentMediaAttachment:(id)arg1 date:(int)arg2 lastInSection:(BOOL)arg3 availabilityState:(id)arg4 thumbnailColors:(id)arg5 ;
-(void)imageThumbnailUpdated:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)tapGesture:(id)arg1 ;
@end
