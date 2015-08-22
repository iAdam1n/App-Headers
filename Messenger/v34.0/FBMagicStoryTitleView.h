/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol FBServiceTransactionMutating, FBMagicStoryTitleViewDelegate;
@class UIView, FBWebImageView, UITextField, UILabel, UIButton, FBMagicStoryHeaderImageView, NSString, FBUserSession, NSDate;

@interface FBMagicStoryTitleView : UICollectionReusableView <UITextFieldDelegate> {

	UIView* _profilePictureShadowView;
	FBWebImageView* _profilePictureView;
	UITextField* _titleTextField;
	UILabel* _dateLabel;
	UILabel* _subtitleLabel;
	UIButton* _titleEditButton;
	UIButton* _clearButton;
	UIView* _backgroundView;
	FBMagicStoryHeaderImageView* _headerImageView;
	UIView* _headerImageOverlayView;
	NSString* _originalTitle;
	BOOL _didTrimTitle;
	id<FBServiceTransactionMutating> _graphQLFetchRequest;
	id _imageDownload;
	id<FBMagicStoryTitleViewDelegate> _delegate;
	FBUserSession* _session;
	NSDate* _date;

}

@property (assign,nonatomic,__weak) id<FBMagicStoryTitleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSDate * date;                                                    //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 title:(id)arg2 subtitle:(id)arg3 date:(id)arg4 hasHeaderImage:(BOOL)arg5 ;
+(id)_tapToEditTextFont;
+(id)_stringForDate:(id)arg1 ;
+(id)_titleThatFitsIntoTextField:(id)arg1 withTitle:(id)arg2 ;
+(CGSize)_sizeForText:(id)arg1 font:(id)arg2 constrainedSize:(CGSize)arg3 ;
+(id)_tapToEditText;
+(BOOL)_doesTitle:(id)arg1 fitIntoTextField:(id)arg2 ;
+(id)_titleFont;
+(id)_dateFont;
+(id)_subtitleFont;
-(void)setHeaderImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviewsWithBounds:(CGRect)arg1 headerImage:(BOOL)arg2 ;
-(void)setEditingModeEnabled:(BOOL)arg1 ;
-(void)setHeaderImageOverlayColor:(id)arg1 animated:(BOOL)arg2 ;
-(void)setEditButtonHidden:(BOOL)arg1 ;
-(void)loadProfilePicture;
-(void)handleEdit:(id)arg1 ;
-(void)handleClear:(id)arg1 ;
-(void)_fetchProfileImageWithProfilePicturesResponse:(id)arg1 ;
-(BOOL)_hasHeaderImage;
-(void)_didLayoutSubviews;
-(void)_setEditButtonToGlyph:(unsigned long long)arg1 size:(unsigned long long)arg2 text:(id)arg3 ;
-(void)_updateForTextFieldChange;
-(void)textFieldDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBMagicStoryTitleViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<FBMagicStoryTitleViewDelegate>)delegate;
-(NSString *)title;
-(NSDate *)date;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(NSString *)subtitle;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
